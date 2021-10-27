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

#include <iostream>

int aPlusb(double a, double b)
{
	return int(a + b);
}

int aMinusb(double a, double b)
{
	return int(a - b);
}

int aMultipliedByB(double a, double b)
{
	return int(a * b);
}

int aDividedByB(double a, double b)
{
	return int(a / b);
}

int aModB(double a, double b)
{
	return (int)a % (int)b;
}

