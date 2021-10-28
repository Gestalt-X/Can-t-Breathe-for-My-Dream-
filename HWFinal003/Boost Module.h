#pragma once

//
//  Boost Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  启动模块，欢迎界面与引导工作模式
//
//  代码作者：高艺
//

void Welcome()  // 欢迎界面
{
	printf("%s", "******************************************\n");
	printf("%s", "*                                        *\n");
	printf("%s", "*         欢迎使用两整数运算程序         *\n");
	printf("%s", "*      输入“1”或“2”选择工作模式      *\n");
	printf("%s", "*  模式1：窗口模式 单次输入，结果不保存  *\n");
	printf("%s", "*  模式2：文件模式 文件输入，结果可保存  *\n");
	printf("%s", "*                                        *\n");
	printf("%s", "******************************************\n");
}

void ChooseWorkingMode(int* WorkingMode)  // 选择工作模式
{
	printf("%s", "请输入:");
	int flag = scanf("%d", WorkingMode);  // 信号变量，判断输入值是否为数值
	if (flag == 0)
	{
		printf("%s","输入值非整数，请重新输入\n");
		rewind(stdin);  // 刷新缓冲区，让scanf安全读入
		ChooseWorkingMode(WorkingMode);  // 重启流程

	}
	else if (*WorkingMode == 1 || *WorkingMode == 2)
	{
		printf("%s", "选择成功,正在进入...\n");  // 合法数值
	}
	else
	{
		printf("%s", "输入有误，请重新输入。\n");  // 不合法数值
		rewind(stdin);  // 刷新缓冲区，让scanf安全读入
		ChooseWorkingMode(WorkingMode);  // 重启流程
	}
}