/// C++基础 - 命名空间
// 包含头文件
#include <iostream>
// 方式一: 使用命名空间 (全部展开命名空间内容)
// 在日常练习中, 不在乎跟库命名冲突, 就可以将std全部展开
// using namespace std; // C++库中所有东西都是存放在std命名空间中

// 方式三: 使用命名空间 (展开部分命名空间内容)
// 常用的库里面的一些对象或类型可以展出来
// 工程比较推荐这种用法
using std::count;
using std::endl;

// 1.普通命名空间
namespace N1
{
    // 命名空间中的内容, 既可以定义变量, 也可以定义函数
    int a;
    int Add(int left, int right)
    {
        return left + right;
    }
}

// 2.命名空间可以嵌套
namespace N2
{
    int a;
    int b;
    int Add(int left, int right)
    {
        return left + right;
    }
    namespace N3
    {
        int c;
        int d;
        int Sub(int left, int right)
        {
            return left + right;
        }
    }
}

// 3.同一个工程中允许存在多个相同名称的命名空间, 编译器最后会合成同一个命名空间中.
namespace N1
{
    int Mul(int left, int right)
    {
        return left * right;
    }
} // 注意: 一个命名空间就定义一个新的作用域, 命名空间中所有内容都局限于该命名空间中

// main函数, 程序从这里开始执行
int main(int argc, char const *argv[])
{
    // CS  Client Server  (MFC)
    // BS  网页    Server  (前端-HTML+CSS+JS)

    /*命名空间
    在C/C++中, 函数和类都是大量存在的, 这些变量\函数和类的名称将都存在于全局作用域中,
    可能会导致很多冲突, 使用命名空间的目的是对标识符的名称进行本地化, 以避免命名冲突或名字污染,
    namespace关键字的出现就是针对这个问题的.

    命名空间定义
        定义命名空间, 需要使用到namespace关键字, 后面跟命名空间的名字, 然后接一对{}即可, {}中即为命名空间的成员.
    */

    // 方式二: 使用命名空间(不展开命名空间内容)
    std::cout << "Hello World!\n";
    // std::cout  向控制台输出内容的指令
    // <<   输出的运算符
    std::cout << "Hello World!\n"
              << std::endl;

    int i = 1;
    double d = 1.11;
    std::cout << i << " " << d << std::endl;

    // 方式一 & 方式三: 使用命名空间
    // cout << i << " " << d << endl; //就不用加std::了

    return 0;
}
