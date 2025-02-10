// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "自我练习函数.h"
#include <climits>

using namespace std;

//声明显示值域 函数原型
int number_limit();
int my_array();
int my_pointer();
int new_strct();

int main()
{
    std::cout << "hello world!\n";
    std::cout << add(3, 4)<<std::endl;
    number_limit();
    my_array();
    my_pointer();
    new_strct();
    return 0;
}
//类型范围练习
int number_limit()
{
    using namespace std;
    cout << "int的最大值" << INT_MAX << endl
        << "short的最大值" << SHRT_MAX << endl
        << "long的最大值" << LONG_MAX << endl
        << "int的字节数" << sizeof(int) << endl;
    return 0;
}
//数组练习
int my_array()
{
    int first_array[10] = {1,2,3};
    int second_array[10] = {};
    int third_array[10] = {};
    char name[15] = "boy myboy";
    
    cout << strlen(name) << endl;
    cout << "total array = " << first_array[1] + first_array[2] + first_array[3] << endl;
    return 0;
}

//指针练习
int my_pointer()
{
    int pointer_one = 12;
    int* pointer_two = &pointer_one;

    cout << "address: " << pointer_two << endl;
    cout << "number: " << *pointer_two << endl;
    *pointer_two = *pointer_two + 1;
    cout << *pointer_two << endl;
    return 0;
}

int new_strct()
{
    struct MyStruct
    {
        char name[20];
        float volume;
        double price;
    };

    MyStruct* ps = new MyStruct;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "name: " << (*ps).name << endl;
    cout << "volume" << ps->volume << endl;
    cout << "price" << ps->price << endl;
    delete ps;
    return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
