# 解答：
1. 第二种格式可以减少不必要的判断，在为空格是需要做必定不成立的换行符判定，程序效率更高。
2. ch+1 会导致隐式的类型转换： char 会被转换为 int 进行加法运算，打印十进制的数字而不是字符。
3. 输出如下

```
HHii!!

SSeennddct1 = 8, ct2 = 8

```

4.  a. weight >= 15 && weight < 125
    b. ch == 'q' || ch == 'Q'
    c. x % 2 == 0 && x != 26
    d. x % 2 == 0 && x % 26 != 0
    e. donation >= 1000 && donation <= 2000 || guest == 1
    f. (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')

5.  不相同， !!x 的值为 bool， 转换为 0 或 1， 与原始的 x 不等
6.  int y = x > 0 ? x : -x
7. 
```C++
swith (ch)
{
    case 'A':
    a_grade++;
    break;
    case 'B'
        b_grade++;
        break;
    case 'C'
        c_grade++;
        break;
    case 'D'
        d_grade++;
        break;
    default:
        f_grade++;
        break;
}
```

8. ?
9. 

```C++
int line = 0;
char ch;
while (cin.get(ch) && ch != 'Q')
{
    if (ch == '\n')
        line++;
}
```

# 评判

3. 答案错误，错误原因：没看仔细 if 中的判断语句写成了赋值语句

```
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1=9, ct2=9
```

5. 答案错误，错误原因：没有考虑 x 为 bool 类型的场景，在 x 为 bool 类型是等价的，其他场景不等价；

6. 未解答出，正确答案，在处理数字输入时，输入了字符，会导致 cin 读不到数字，一个死循环。

# 总结：

1. 对 cin 的读取行为，字符、数字混合读入场景需要补充了解。
   - 在 cin 读数字时，如果遇到了非数字会导致 cin 错误置位，此时需要使用 clear()恢复，恢复后需要把非数字字符消耗掉，方法为调用 while (std::cin.get() != '\n');
