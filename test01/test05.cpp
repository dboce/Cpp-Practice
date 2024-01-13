/// C++基础 - 引用
#include <iostream>
using namespace std;

/*引用
引用不是定义一个变量, 而是给已存在变量起一个别名, 编译器不会为引用变量开辟内存空间,
它和它引用的变量共用同一块内存空间.

类型& 引用变量名(对象名) = 引用实体;

引用特性:
    1.引用在定义时必须初始化
    2.一个变量可以有多个引用
    3.引用一旦引用一个实体, 再不能引用其他实体
*/

int main(int argc, char const *argv[])
{
    int a = 1;
    int &ra = a; // ra是a的引用, 引用也就是别名, a再取一个名称ra

    // int &b; //引用必须在定义时初始化

    int &c = a;
    int d = 2;
    c = d; // 分析:这里是c变成了d的引用?no 还是将d赋值给c?ok
    // 将d的值赋值给c
    // 引用一旦引用一个实体, 再不能引用其他实体

    int a = 0;
    int &b = a; // b的类型是int

    const int a = 0;
    // int &b = a; // 此时编译不通过,原因: a是只读的; b的类型是int,也就是可读可写的, 所以不行
    const int &b = a;

    int c = 1;
    int &d = c;
    const int &e = c; // 可以, c只是可读可写, e变成别名只读
    // 总结: 引用取别名时, 变量访问的权限可以缩小, 不能放大

    int i = 0;
    double db = i; // 隐士类型转换
    const double &rd = i;
    const float &rf = i;

    // 变量之间赋值没有权限缩小和放大的关系, 引用才有
    const int ci = 1;
    int x = ci;

    return 0;
}
