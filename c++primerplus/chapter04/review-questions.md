# 解答：

1.  a. char actor[30];
    b. short betsie[100];
    c. float chuck[13];
    d. long double dipsea[64];

2.  a. array<char, 30> actor;
    b. array<short, 100> betsie;
    c. array<float, 13> chuck;
    d. array<long double, 64> dipsea;

3.  int odds[5] = {1, 3, 5, 7, 11};
4.  int even = odds[0] + odds[4];
5.  ideas[1]; or \*(ideas + 1);
6.  char buger[] = "cheeseburget";
7.  string name = "Waldorf Salad";
8.  struct fish{
    char type[20];
    int weight;
    double length;
    };
9.  fish f = {
    "goldfish",
    5,
    4.5;
    }
10. enum Resonse {No=0, Yes=1, Maybe = 2}
11. double *tp = &ted;
    cout << *tep << endl;
12. float *tp = treacle;
    *tp;
    \*(tp+9);
13. int size = 0;
    cin >> size;
    int \*ap = new int[size];
    vector<int> v(size);
14. 有效，输出常量的地址
15. fish \*f = new fish;
    f->type;
    f->weight;
    f->length;
16. cin 按空格和换行来分割输入，会导致 address 只能读取到第一个空格前的内容
17. const int size = 10;
    #include <vector>
    std::vector<string> strvs(10);

    #include <array>
    std::array<string, 10> stras

# 评判

1.  a. char actors[30]; 单词拼写错误， actors 错误拼写为 actor
2.  a. array<char, 30> actors; 单词拼写错误， actors 错误拼写为 actor
3.  int odds[5] = {1, 3, 5, 7, 9}; 奇数而非质数，理解错误
4-16. 正确
4.  #include <vector>
    #include <array>
    #include <string>

    const int size = 10;
    std::vector<std::string> strvs(size);
    std::array<std::string, size> stras

# 总结：

题目理解出错情况较明显，语法掌握没问题。
