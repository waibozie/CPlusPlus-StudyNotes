# error-prone
记录C++中易错点，方便后续快速回忆起来， 持续更新

## 函数使用类

## F.cin.01
- `cin.get(char*, int)`遇到空行时，会导致后续输入被阻断，输入状态被置为失效，可以通过`cin.clear()`恢复； 原因是`cin.get(char*, int)`是不读取换行符，把换行符保留到输入流中；

- `cin.getline(char*, int)`在不能完整容纳一行的数据时，也会设置失效位，关闭后续输入，这种情况下函数语意和行为不一致， 同样可以通过`cin.clear()`恢复；

## C与C++的差异
1. 结构的使用中, C++可以忽略struct关键字，而C不行；

## S.for.01
- C语言中for的结构：`for (expression; expression; expression)` 其中expression不包括声明语句；
- C++语言中国for的结构： `for (for-init-statement condition; expression)`, 其中`for-init-statement`是一条语句(包括自己的;), 所以在C++中是允许在初始化语句中声明循环变量的。

## S.for.02
C++11的范围for支持两种类型的循环
```C++
    int ints[] = {1, 2, 3};
    // 符号&表示e是一个引用变量，会修改原来的值
    for (auto &e : ints)
    {
        cout << e << endl;
        e = 5;
    }

    // 不带符号&表示e是一个值变量，不会修改原来的值
    for (auto e : ints)
    {
        cout << e << endl;
    }
```

## Function.Argument.01
C++支持默认参数，C不支持。

C++支持默认参数是考虑： 使用默认参数，可以减少要定义的析构函数、方法以及方法重载的数量。
只需要在函数的原型中指定默认值，函数定义与没有默认参数时完全一致。

## Function.Argument.02
C++支持函数重载，C不支持

## Function.Select.03
使用函数模板时需明确的类型，避免隐式的函数选择造成不期望的错误

## Annomous 
C++将const全局变量的链接性视内部，这一点和C不一样， 原因是C++这样允许在头文件中定义常量而不破坏单一定义声明

## class
当类的构造函数中使用了new申请动态内存，且类变量通过在栈上声明的方式赋值给其他对象是，临时对象的析构会造成指针悬空。
``
UseNewInConstructorClass a;
// 下面代码会创建临时对象，并赋值给a， 临时对象在赋值后被析构，造成a的成员悬空；
// 原来的a没有调用析构函数，会存在内存泄漏；
a = UseNewInConstructorClass();
```
禁止在栈上对类成员做初始化赋值外的二次赋值， 除非类中不存在使用动态内存
