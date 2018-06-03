#include "Date_Time.h"

void Date::CurTime(char *ct)
{
	int hh, mm, ss;
	char tmp[4];
	ct[0] = '\0';
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	hh = timeinfo->tm_hour;
	mm = timeinfo->tm_min;
	ss = timeinfo->tm_sec;
	itoa(hh, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(mm, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(ss, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, "\0");
}

void Date::CurDate(char * ct)
{
	int yy, mm, dd;
	char tmp[6];
	ct[0] = '\0';
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	yy = 1900 + timeinfo->tm_year;
	mm = timeinfo->tm_mon + 1;
	dd = timeinfo->tm_mday;
	itoa(dd, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(mm, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(yy, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, "\0");
}
