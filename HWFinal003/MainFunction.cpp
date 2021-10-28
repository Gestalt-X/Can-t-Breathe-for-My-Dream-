#include <iostream>
#include <Boost Module.h>
#include <Calculation Module.h>
#include <Windows Module.h>
#include <File Module.h>

int main()
{
    Welcome();  // 启动欢迎模块
    int WorkingMode = 0;  // 工作模式变量
    double Number[2] = { 0,0 };  // 窗口模式数组
    char Path[50] = "";  // 文件模式地址数组
    ChooseWorkingMode(&WorkingMode);  // 选择工作模式
    switch(WorkingMode)  // 执行相应模式
    {
        case 1:WindowsStart(Number); Calculation(Number); break;
        case 2:FileStart(); break;
        default:printf("%s", "启动失败\n");
    }
    return 0;
}