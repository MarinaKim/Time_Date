#include "Date_Time.h"

void Date::CurTime(char *ct)
{
	int h, m, s;
	char tmp[4];
	ct[0] = '\0';
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	h = timeinfo->tm_hour;
	m = timeinfo->tm_min;
	s = timeinfo->tm_sec;
	itoa(h, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(m, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(s, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, "\0");
}

void Date::CurDate(char * ct)
{
	int y, m, d;
	char tmp[6];
	ct[0] = '\0';
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	y = 1900 + timeinfo->tm_year;
	m = timeinfo->tm_mon + 1;
	d = timeinfo->tm_mday;
	itoa(d, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(m, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, ":");
	tmp[0] = '\0';
	itoa(y, tmp, 10);
	strcat(ct, tmp);
	strcat(ct, "\0");
}
