#pragma once

//
//  Windows Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  窗口模式模块
//
//  代码作者：高艺
//

int WindowsStart(double Number[])  // 窗口模式启动，初始化数值
{
	for (int i = 1; i <= 2; i++)
	{
		printf("%s", "请输入一个整数(自动取整):");
		int flag = scanf("%lf", &Number[i-1]);  // 信号变量，判断输入值是否为数值
		if (flag == 0)
		{
			printf("%s","输入值非数值，请重新输入\n");
			rewind(stdin);  // 刷新缓冲区
			i -= 1;  // 循环退1，重启流程
		}
		else
		{
			Number[i - 1] = floor(Number[i - 1]);  // 数值取整
			printf("输入成功，结果为:%.0f\n",Number[i-1]);  // 结果呈现
		}
	}
	return 1;
}

int Calculation(double Number[])  // 计算函数
{
	printf("%s", "结果计算中...\n");
	printf("加:a+b=%d\n", aPlusb(Number[0], Number[1])); // 加法
	printf("减:a-b=%d\n", aMinusb(Number[0], Number[1]));  // 减法
	printf("乘:axb=%d\n", aMultipliedByB(Number[0], Number[1]));  // 乘法
	printf("除:a/b=%.2f\n", aDividedByB(Number[0], Number[1]));  // 除法
	printf("取模:a%%b=%d\n", aModB(Number[0], Number[1]));  // 取模
	return 1;
}