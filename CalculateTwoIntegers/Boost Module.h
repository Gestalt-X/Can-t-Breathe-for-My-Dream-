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

#include <iostream>

void Welcome()
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

void ChooseWorkingMode(int* WorkingMode)
{
	printf("%s", "请输入:");
	scanf("%d", WorkingMode);
	if (*WorkingMode == 1 || *WorkingMode == 2)
	{
		printf("%s", "选择成功,正在进入...\n");
	}
	else
	{
		printf("%s", "输入有误，请重新输入。\n");
		ChooseWorkingMode(WorkingMode);
	}
}