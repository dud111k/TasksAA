﻿// Task_2_5.cpp: определяет точку входа для приложения.
//С некоторого момента прошло 234 дня. Сколько полных недель прошло за этот период?

#include "Task_2_5.h"
#include "iostream"
#include "math.h"

using namespace std;

int main()
{
	int days = 234;
	int weeks;
	setlocale(0, "");
	weeks = floor(days / 7);
	cout << weeks << endl;
	return 0;
}
