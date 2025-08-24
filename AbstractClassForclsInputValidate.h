#pragma once
#include<iostream>
#include"clsDate.h";
using namespace std;

class AbstractClassForclsInputValidate
{
		virtual bool isNumberBetween(int number, int from, int to) = 0;

		virtual  bool isNumberBetween(double number, double from, double to) = 0;

		virtual  bool isDateBetween(clsDate date, clsDate dateFrom, clsDate dateTo) = 0;

		virtual  int readIntegerNumber(string message) = 0;

		virtual  double readDoubleNumber(string message) = 0;

		virtual  int readIntegerNumberBetween(int from, int to, string message) = 0;

		virtual  double readDoubleNumberBetween(double from, double to, string message) = 0;

		virtual  bool isValidDate(clsDate date) = 0;
	};




