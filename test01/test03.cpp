/// C++基础 - 函数重载
#include <iostream>
using namespace std;

// 函数重载的简单理解: 一词有多个意思
/*函数重载概念
    函数重载: 是函数的一种特殊情况, C++允许在同一个作用域中声明几个功能类似的同名函数,
这些函数的形参列表(参数个数 或 类型 或 顺序)必须不同, 常用来处理实现功能类似数据类型不同的问题

C语言是不支持函数重载的, C++支持.

注意: 只是返回值不同, 不能构成重载
*/
// 函数重载
int Add(int left, int right)
{
    return left + right;
}

double Add(double left, double right)
{
    return left + right;
}

long Add(long left, long right)
{
    return left + right;
}

int main()
{
    Add(10, 20);
    Add(10.0, 20.0);
    Add(10L, 20L);

    /*函数重载面试题:
    1 什么是函数重载

    2 C++是如何支持函数重载的? 为什么C语言不支持
    
    list.h  list.c  test.c
        1 预处理
            头文件的展开/宏替换/去掉注释, 进行条件编译
                生成:list.i  test.i
        2 编译
            检查语法问题, 生成汇编代码(给程序员看的)
                生成:list.s  test.s
        3 汇编
            把汇编代码转成二进制的机器码(给机器看的)
                生成:list.o  test.o
        4 链接
            把目标函数和主函数链接在一起, 生成可执行文件
                call list_push_back(?)
                链接时, 这里的问号表示编译时, 这个函数我们只有声明, 没有定义所以无法找到他的地址.
                表示链接的时候,到其他目标文件符号表中去找这个函数的地址, 再把把函数地址填到?这来
    
    shell命令: objdump -S listcpp # 查看编译成list.o文件
    因为C和C++的函数名修饰规则不同, 在.o文件中可以看到

    结论: 在linux下, 采用g++编译完成后, 函数名字的修饰发生变化, 编译器将函数参数类型信息添加到修改后的名字中.
    */

    return 0;
}