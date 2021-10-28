//
//  AddTwoIntegers.cpp
//  CPPdemo06_testGtest
//
//  Created by Steven Yu on 2021/10/26.
//

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
class AddTwoIntegers{
public:
    AddTwoIntegers(void);
    AddTwoIntegers(double i1,double i2);
    void output(void);
    double aPlusB(void);
    double aMinusB(void);
    double aMultipliedByB(void);
    double aDividedByB(void);
    double aModB(void);
    void toFile();
private:
    /*Integers*/
    double a,b;
    void insertIntegers(double &d);
};

void AddTwoIntegers::insertIntegers(double &a){
    try {
        if( scanf("%lf",&a)==0)
            throw -1; //抛出int类型异常
        else
            return;
    }
    catch(int i){
        cout<<"无效输入,请重新输入\n";
        rewind(stdin);
        insertIntegers(a);
    }
}

AddTwoIntegers::AddTwoIntegers(void){
    cout<<"输入两个整数："<<"\n";
    insertIntegers(a);
    cout<<"输入成功，已经输入整数a = "<<(int)a<<"\n";
    insertIntegers(b);
    cout<<"输入成功，已经输入整数b = "<<(int)b<<"\n";
}

AddTwoIntegers::AddTwoIntegers(double a, double b){
    this->a = a;
    this->b = b;
}

double AddTwoIntegers::aPlusB(void){
    return a+b;
}
double AddTwoIntegers::aMinusB(void){
    return a-b;
}
double AddTwoIntegers::aMultipliedByB(void){
    return a*b;
}
double AddTwoIntegers::aDividedByB(void){
    if( b == 0)
        return NULL;
    else
        return a/b;
}
double AddTwoIntegers::aModB(void){
    if( b == 0)
        return NULL;
    else
        return (int)a%(int)b;
}
void AddTwoIntegers::output(void){
    cout<<"Output\n"
        <<"a + b = "<<aPlusB()<<"\n"
        <<"a - b = "<<aMinusB()<<"\n"
        <<"a * b = "<<aMultipliedByB()<<"\n"
        <<"a / b = "<<fixed<<setprecision(2)<<aDividedByB()<<"\n"
        <<"a % b = "<<aModB()<<endl;

}
void AddTwoIntegers::toFile(){
    //2. 创建流
    fstream output;
    //3. 打开文件，将流与文件相关联，这里使用绝对路径
    output.open("out.txt");
    //4. 向文件写入数据

    output<<"Output\n"
        <<"a + b = "<<aPlusB()<<"\n"
        <<"a - b = "<<aMinusB()<<"\n"
        <<"a * b = "<<aMultipliedByB()<<"\n"
        <<"a / b = "<<fixed<<setprecision(2)<<aDividedByB()<<"\n"
        <<"a % b = "<<aModB()<<endl;
    //5. 关闭流
    output.close();

}
