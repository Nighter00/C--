/*
 * @Author: Nighter00
 * @Date: 2021-12-29 17:13:59
 * @LastEditors: Nighter00
 * @LastEditTime: 2022-01-06 23:42:43
 * @Description: C++书写Helloworld
 * @FilePath: \C++\C++_basics\HelloWorld.cpp
 */
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//宏常量
#define day 7

int main()
{
    // 单行注释
    /*
     * 多行注释
     * 
     */
    short num1 = 10; //-32768-32767
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    float f1 = 3.14f;
    double d1 = 3.14;
    //默认情况下输出一个小数会输出六位有效数字。
    float f2 = 3e2;
    float f3 = 3e-2;

    //string
    char str1[] = "string";
    string str2 = "string2";

    // bool
    bool b1 = true;

    // cin 输入
    // int a = 0;
    // float b = 3.14f;
    // char c = '1';
    // string str = "qwe";
    // cout << "input:" << endl;
    // cin >> str;

    // cout << str << endl;
    // cout << sizeof(str) << endl;

    // cout << b1 << endl;
    // cout << str2 << endl;
    // cout << f3 << endl;
    // cout << f2 << endl;
    // cout << sizeof(num1) << endl;
    // cout << sizeof(long) << endl;

    // 运算符
    // cout << 1 / 2 << endl;   // 0
    // cout << 1 / 2.0 << endl; // 0.5

    //
    // float pig1 = 0;
    // float pig2 = 0;
    // float pig3 = 0;

    // cout << "input:" << endl;
    // cin >> pig1;
    // cin >> pig2;
    // cin >> pig3;

    // if (pig1 >= pig2)
    // {
    //     if (pig3 >= pig1)
    //     {
    //         cout << "3" << endl;
    //     }
    //     else
    //     {
    //         cout << "1" << endl;
    //     }
    // }
    // else
    // {
    //     if (pig3 >= pig2)
    //     {
    //         cout << "3" << endl;
    //     }
    //     else
    //     {
    //         cout << "2" << endl;
    //     }
    // }

    // srand((unsigned int)time(NULL));
    // //利用时间生成随机数，防止每次都一样

    // int num = rand() % 100 + 1; //伪随机数
    // int guess = 0;
    // while (guess != num)
    // {
    //     cin >> guess;
    //     if (guess == num)
    //     {
    //         cout << "succcess" << endl;
    //         break;
    //     }
    //     else if (guess < num)
    //     {
    //         cout << "small" << endl;
    //     }
    //     else
    //     {
    //         cout << "big" << endl;
    //     }
    // }

    //水仙花
    // int a = 0;
    // int b = 0;
    // int c = 0;
    // for (int i = 100; i < 1000; i++)
    // {
    //     a = i / 100;
    //     b = i % 100 / 10;
    //     c = i % 10;
    //     if (i == a * a * a + b * b * b + c * c * c)
    //     {
    //         cout << i << endl;
    //     }
    // }

    //array
    // int arr1[3];
    // int arr2[3] = {1, 2, 3};
    // int arr[3] = {1}; //默认补0
    // int arr[] = {1, 2, 3};
    // cout << arr << endl;     //数组首地址
    // cout << &arr[2] << endl; //数组某个元素首地址

    //数组逆置
    // int arr[5] = {1, 2, 3, 4, 5};
    // int flag = 0;
    // int len = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < len / 2; i++)
    // {
    //     flag = arr[i];
    //     arr[i] = arr[len - 1 - i];
    //     arr[len - 1 - i] = flag;
    // }
    // for (int i = 0; i < len; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    //冒泡
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int flag = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] > arr[j])
            {
                flag = arr[i];
                arr[i] = arr[j];
                arr[j] = flag;
            }
        }
        for (int k = 0; k < 9; k++)
        {
            cout << arr[k] << ' ';
        }
        cout << endl;
    }

    system("pause");
    return 0;
}