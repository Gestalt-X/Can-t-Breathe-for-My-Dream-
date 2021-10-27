#include <iostream>
#include <Calculation Module.h>
#include <Boost Module.h>
#include <EarlyDemo.h>

int main()
{
    Welcome();
    int WorkingMode = 0;
    ChooseWorkingMode(&WorkingMode);
    switch(WorkingMode)
    {
        case 1:WindowsStart(); break;
        case 2:FileStart(); break;
        default:printf("%s", "启动失败\n");
    }
    return 0;
}