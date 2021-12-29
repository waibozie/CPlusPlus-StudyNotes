# 解答：
1. 对不同的表示范围进行支持，在内存和表示范围之间提供给开发者选择；
2.
    -a. short s = 80;
    -b. unsigned u = 42110;
    -c. long long foo = 3000000000
3. 自动类型转换
4. 33L表示为值为33，类型为long的整型； 33为值为33,类型为int的整型
5. 在字符编码'A' = 65的设备上是等级的，比如ASCII编码、UNICODE编码
6. char c = 88; 
7. 都会导致误差，double是浮点类型，把整型转换为浮点数时可能存在精度损失
8.
    -a. 74
    -b. 4
    -c. 0
    -d. 4.5
    -e. 3
9. 
- int sum = (int)x1 + (int)x2;
- int sum = (int)(x1 + x2);

10.
- a. int
- b. float
- c. char
- d. wchar_t
- e. double

# 评判
1. 错误，有多种整型类型，可以根据特定需求选择最合适的类型。例如，可以使用short来存储空格，使用long来确保存储容量。也可以寻找可提高特定计算的速度的类型
2. 正确
3. 错误， C++没有提供自动防止超出整型限制的功能，可以使用头文件climits来确认限制情况。
4. 正确
5. 正确
6. 错误
- char c = 88;
- cout.put(char(88));
- cout << char(88) << endl;
- cout << (char) 88 << endl;
7. 不正确。 float有效位6位， double至少13有效数字， long long至少19位有效数字
8. 正确
9. 正确
10. 
- d. 不正确， 答案为：char32_t


# 总结：
1. 浮点有效位于精度的关系需要重新阅读
    - 见floatpointdigexp.cpp
2. char32_t、char16_t、wchar_t、char类型的区别需要重来理解