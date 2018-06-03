#include "Date_Time.h"

void main()
{
	char t[20];	
	Date::CurTime(t);
	cout << "Current time: " << t << endl;
	Date::CurDate(t);
	cout << "Current date: " << t << endl;
}