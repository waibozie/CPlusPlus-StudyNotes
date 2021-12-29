// floatpointdigexp.cpp -- 展示浮点数类型的有效位数和指数位

#include <iostream>
#include <cfloat>

using namespace std;

// floating-point=significant（mantissa） x base^ exponent
int main()
{
    cout << "the following are the minimum number of significant digits" << endl;
    cout << "double dig: " << DBL_DIG << endl;
    cout << "float dig: " << FLT_DIG << endl;
    cout << "long double dig: " << LDBL_DIG << endl
         << endl;

    cout << "the following are the number of bits used to represent the mantissa" << endl;
    cout << "double mantissa dig: " << DBL_MANT_DIG << endl;
    cout << "float mantissa  dig: " << FLT_MANT_DIG << endl;
    cout << "long double mantissa dig: " << LDBL_MANT_DIG << endl
         << endl;

    cout << "the following are the maximum and minimum exponent values" << endl;
    cout << "double max 10 exp: " << DBL_MAX_10_EXP << endl;
    cout << "float max 10 exp: " << FLT_MAX_10_EXP << endl;
    cout << "long double max 10 exp: " << LDBL_MAX_10_EXP << endl;

    cout << "double min 10 exp: " << DBL_MIN_10_EXP << endl;
    cout << "float min 10 exp: " << FLT_MIN_10_EXP << endl;
    cout << "long double min 10 exp: " << LDBL_MIN_10_EXP << endl;
    return 0;
}
