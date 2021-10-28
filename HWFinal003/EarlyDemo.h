#pragma once

//
//  EarlyDemo.h
//
//  Created by Steven Yu on 2021/10/26.
//
//  早期测试Demo，基于面向对象的运算模块
//
//  代码作者：于世文
//

#include <iostream>
#include <iomanip>

using namespace std;
class AddTwoIntegers {  // 定义运算模块类  
public:
    AddTwoIntegers(void);  // 无参数的构造函数 
    AddTwoIntegers(int i1, int i2);  // 带参数的构造函数
    void output(void);  // 结果输出
    int aPlusB(void);  // 加法  
    int aMinusB(void);  // 减法
    int aMultipliedByB(void); // 乘法
    double aDividedByB(void); // 除法
    int aModB(void);  // 取模
private:
    int a;  // 运算变量1
    int b;  // 运算变量2
};

AddTwoIntegers::AddTwoIntegers(void) {  // 无参构造函数实现
    cout << "输入两个整数：" << "\n";
    cin >> a;
    cout << "已经输入整数a =  " << a << "\n";
    cin >> b;
    cout << "已经输入整数b = " << b << "\n";
}

AddTwoIntegers::AddTwoIntegers(int a, int b) {  // 带参数构造函数实现
    this->a = a;
    this->b = b;
}

int AddTwoIntegers::aPlusB(void) {  // 加法实现
    return a + b;
}
int AddTwoIntegers::aMinusB(void) {  // 减法实现
    return a - b;
}
int AddTwoIntegers::aMultipliedByB(void) {  // 乘法实现
    return a * b;
}
double AddTwoIntegers::aDividedByB(void) {  // 除法实现
    return (double)a / (double)b;
}
int AddTwoIntegers::aModB(void) {  // 取模实现
    return a % b;
}
void AddTwoIntegers::output(void) {  // 结果输出实现
    cout << "Output\n"
        << "a + b = " << aPlusB() << "\n"
        << "a - b = " << aMinusB() << "\n"
        << "a * b = " << aMultipliedByB() << "\n"
        << "a / b = " << fixed << setprecision(2) << aDividedByB() << "\n"
        << "a % b = " << aModB() << endl;
}