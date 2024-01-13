/// C++基础 - extern "C"
#include <iostream>
using namespace std;

/*有时候C++工程中可能需要将某些函数按照C的风格来编译, 在函数前面加extern "C",
意思是告诉编译器, 将该函数按照C语言规则来编译. 比如: tcmalloc 是google用C++实现的一个项目,
它提供tcmalloc()和tcfree两个接口来使用, 但如果是C项目就没办法使用, 那么它就使用extern "C"来解决.
*/
extern "C" int Add(int left, int right);
// 要求C和C++程序都能够使用这个C++的静态库/动态库

int main()
{
    Add(1, 2);
    return 0;
}
// 连接时报错: error_NK2019: 无法解析的外部符号_Add, 该符号在函数_main中被引用

// 面试题: 下面两个函数能形成函数重载吗? 有问题吗或者什么情况下会出问题?
void TestFunc(int a = 10)
{
    cout << "void TestFunc(int)" << endl;
}
void TestFunc(int a)
{
    cout << "void TestFunc(int)" << endl;
}
// 答案: 不能构成重载, 因为只是缺省的, 函数名修饰规则是一样的, 方法名/参数类型/参数个数都相同