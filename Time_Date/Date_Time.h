#pragma once
#include "Library.h"

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date() = default;

	static void CurTime(char *ct);
	static void CurDate(char *ct);	
};
