# 解答：

1.  a. 实例的成员变量没有复制，会呈现为不可预期的值。应该复制 str 为空串， 长度 len 为 0；
    b. s 没有采用 new 进行分配内存，直接应用外部的字符串，后续 delete 调用的结果未知，且存在语法错误，常量赋值给变量；
    c. str 没有分配内存旧进行拷贝，会导致段错误

2.

- 内存泄露： 添加析构函数回收内存
- 成员变量的浅拷贝，造成错误的内存管理： 实现复制构造函数和赋值运算符， 或禁用两个函数
- ？

3. 默认的构造函数、析构函数、复制构造函数、赋值运算符
   构造函数、析构函数： 啥也不干
   复制构造函数、赋值运算符： 成员变量的按值拷贝

4.

```c++
class nifty
{
    // 01-添加权限
    private:
        char personality[];
        int telents;
    public:
        nifty();
        nifty(char *s);
    // 02-定义为友元函数
    friend ostream & operator<<(ostream &os, nifty &n)
}

// 03-使用作用域运算符号，不是：
nifty::nifty()
{
    // 04-需要申请内存
    personality = new char[1];
    personality[0] = '\0';
    talents = 0;
}

// 03-使用作用域运算符号，不是：
nifty::nifty(char * s)
{
    // 05-需要多申请1位，用于存储\0
    personality = new char[sttlen(s) + 1];
    strcpy(s, personality);
    talents = strlen(s);
}

// 06-友元函数定义不需要在类作用域
ostream & operator<<(ostream &os, nitify &n)
{
    // 07-需要return
    return os << n.personality;
}

```

5.

- a1 Golfer()
- a2 Golfer(const char \* name, int g = 0)
- a3 Golfer(const char \* name, int g = 0)
- a4 Golfer()
- a5 Golfer(const Golfer & g)
- a6 Golfer(const char \* name, int g = 0)
- a7 Golfer operator==(const Golfer & g)
- a8 Golfer(const char \* name, int g = 0), operator==(const Golfer & g)

-b Golfer perator==(const Golfer & g)

# 评判

2.

- 析构回收内存
- 复制构造函数多次释放内存
- 赋值运算导致多次释放
  解答中将后续两种情况合一了

3. 遗漏地址运算符

4.

```c++
class nifty
{
    // 01-添加权限 ： 答案错误，这里是可选的
    private:
        char * personality; // 未识别： 这里需要声明为指针
        int telents;
    public:
        nifty();
        nifty(const char *s); // 未识别： 这里需要加const
        nifty(const nifty & n); // 未识别： 这里需要加入复制构造函数
        ~nifty();   // 未识别： 这里定义析构函数

    // 02-定义为友元函数
    friend ostream & operator<<(ostream &os, cosnt nifty &n)； // 未识别： 这里需要加const
}   // 未识别： 这里缺少；

// 03-使用作用域运算符号，不是：
nifty::nifty()
{
    // 04-需要申请内存， 另一种动态内存的思路， 不算错
    personality = new char[1];
    personality[0] = '\0';
    talents = 0;
}

// 03-使用作用域运算符号，不是：
nifty::nifty(char * s)
{
    // 05-需要多申请1位，用于存储\0
    personality = new char[sttlen(s) + 1];
    strcpy(s, personality);
    talents = strlen(s);
}

// 06-友元函数定义不需要在类作用域
ostream & operator<<(ostream &os, nitify &n)
{
    // 07-需要return
    return os << n.personality << endl << n.talent << endl;
} 

```

# 总结：
对于使用动态内存的类注意事项不太清楚：
    - 申请内存和释放内存的函数需要匹配
    - 需要定义析构函数
    - 需要定义复制构造函数
    - 需要定义赋值运算符
    - 需要注意对象的const修饰符
