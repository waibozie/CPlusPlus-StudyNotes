# 解答：
1. C++程序模块叫 函数
2. 导入iostream头文件声明，便于后续代码调用iostream中的定义的符号
3. std命令空间中的符号可以直接引用，而不用通过std::<symbol>的格式；
4. cout << "Hello, world" << endl;
5. int cheeses;
6. cheeses = 32;
7. cin >> cheeses;
8. cout << "We have " << cheeses << " varieties of cheeses,";
9. 函数信息如下：
- int froop(double t): 函数froop接受一个double类型的入参，返回一个int类型的返回值；
- void rattle(int n): 函数rattle接受一个int类型的入参，没有返回值；
- int prune(void): 函数prune不接受任何参数，返回一个int类型的返回值；
10. 在函数声明中表明函数不需要返回值是不需要return
11. 原因可能如下：
- 没有导入iostream头文件， 修正方法为在文件顶部加入 #include <iostream>
- 没有使用命令空间编译指令using， 修正方法： using namespace std； 或者 using std::cout； 
这两种修改中方法可以用于函数级别或者文件级别

# 评判
1. 正确
2. 不对， #include <iostream>的作用：这将导致在最终的编译之前，使用iostream文件的内容替换该编译指令。
3. 正确
4. 正确， 另一个答案 cout << "Helllo, world\n";
5. 正确
6. 正确
7. 正确
8. 正确，题目中没明确表明要行号，所以答案符合题目要求；
9. 正确
10. 正确，补充在返回值为void时，如需要提前中断执行过程可以直接使用return；
11. 附加答案没有记录，判断为正确

复习题总结：
正确率： 10/11
错误率： 1/11，对include编译指令的作用理解不对，需要再次复习。
