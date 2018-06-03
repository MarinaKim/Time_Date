#pragma once
#include "Library.h"

class Date
{
private:
	int dd;
	int mm;
	int yy;

public:
	Date() = default;

	static void CurTime(char *ct);
	static void CurDate(char *ct);	
};
