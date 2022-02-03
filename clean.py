#!/usr/bin/env python3

import os
import sys
import shutil


"""
清理C++项目中的临时文件， 由于MSVC编译环境下会产生大量的临时文件，该脚本用于辅助快速一键清理

用法:
    python clean.py [<dir01> <dir02> ...] 清理全部子目录文件，或者指定文件； 脚本做了防误删除考虑，不会清除.vscode, .git文件下的内容；
"""

# tmpfileSuffixs 临时文件后缀类型
tempfileSuffixs = [".exe", ".obj", ".pdb", ".ilk", "a.out"]


def isTempFile(filename):
    for suffix in tempfileSuffixs:
        if filename.endswith(suffix):
            return True
    return False


# tmpDirectorySuffix 清理构建生成的临时目录
# MacOS上clang编译器生成
tempDirectorySuffix = [".dSYM"]


def isTempDirectory(dir):
    for sufflix in tempDirectorySuffix:
        if sufflix in dir:
            return True
    return False


# excludeDirs 不需要清理的目录
excludeDirs = [".git", ".vscode"]


def isExcludeDir(dir):
    for ex in excludeDirs:
        if ex in dir:
            return True
    return False


def cleanSpecifiedDir(dir):
    "clean temporary file of specified directory"
    for path, _, files in os.walk(dir):
        for f in files:
            if isTempFile(f):
                os.remove(os.path.join(path, f))


def cleanDirs(dirs):
    for d in dirs:
        if isTempDirectory(d):
            # 当先父目录被删除后，子目录再删除会报错，所以忽略错误
            shutil.rmtree(d, ignore_errors=True)
        else:
            cleanSpecifiedDir(d)


def cleanAll():
    "clean all sub directory temporary file"
    allDirs = ["."]
    for path, dirs, _ in os.walk("."):
        if isExcludeDir(path):
            continue
        for d in dirs:
            if isExcludeDir(d):
                continue
            allDirs.append(os.path.join(path, d))
    cleanDirs(allDirs)


def main():
    if len(sys.argv) <= 1:
        cleanAll()
    else:
        cleanDirs(sys.argv[1:])


if __name__ == "__main__":
    main()
