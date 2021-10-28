#pragma once

//
//  Calculation Module.h
//
//  Created by Victor Gao on 2021/10/27.
//
//  正式版，基于面向过程的运算模块
//
//  代码作者：高艺
//

int aPlusb(double a, double b)  // 加法
{
	return int(a + b);
}

int aMinusb(double a, double b)  // 减法
{
	return int(a - b);
}

int aMultipliedByB(double a, double b)  // 乘法
{
	return int(a * b);
}

double aDividedByB(double a, double b)  // 除法，除数不为0
{
	if (b != 0)
	{
		return a / b;
	}
	else
	{
		return printf("%s","除:被0除，无法运算\n");
	}	
}

int aModB(double a, double b)  // 取模，不能对0取模
{
	if (b != 0)
	{
		return (int)a % (int)b;
	}
	else
	{
		return printf("%s", "取模:对0取模，无法运算\n");
	}	
}