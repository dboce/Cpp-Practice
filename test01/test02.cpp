/// C++基础 - 缺省参数
#include <iostream>
using namespace std;
/*注意:
1. 半缺省参数必须从右往左依次来给出, 不能间隔着给
2. 缺省参数不能在函数声明和定义中同时出现
    //a.h
    void Func(int a = 10);

    //a.cpp
    void Func(int a = 20){}
    // 注意: 如果声明与定义同时出现, 恰巧两个位置提供的值不同, 那编译器就无法确定到底该用哪个缺省值
3. 缺省值必须是常量或者全局变量
4. C语言不支持(编译器不支持)
*/

// 缺省参数(设置默认值)
void Func(int a = 0)
{
    cout << a << endl;
}

// 全缺省
void Func1(int a = 10, int b = 20, int c = 30)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

// 半缺省(缺省部分参数) -  必须是从右往左连续的缺省
void Func2(int a, int b = 20, int c = 30)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main(int argc, char const *argv[])
{
    Func(10);
    Func();

    // 调用时, 如果要传参必须从左往右依次传参, 不能空缺
    Func1();
    Func1(1);
    Func1(1, 2);
    Func1(1, 2, 3);

    Func2(1);
    Func2(1, 2);
    Func2(1, 2, 3);

    return 0;
}
