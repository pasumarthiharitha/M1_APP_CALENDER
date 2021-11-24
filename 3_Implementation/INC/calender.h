#ifndef _HEADER_H_
#define _HEADER_H_



#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
struct Date
{
	int dd;
	int mm;
	int yy;
};
struct Date date;
char *dayName(int day)
{
	//returns the name of the day
	switch(day)
	{
		case 0 :return("Sunday");
		case 1 :return("Monday");
		case 2 :return("Tuesday");
		case 3 :return("Wednesday");
		case 4 :return("Thursday");
		case 5 :return("Friday");
		case 6 :return("Saturday");
		default:return("Error");
	}
}
int check_leapYear(int year)
{	
	//checks whether the year is leap year or not
	if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0))
	return 1;
	return 0;
}
int getNumberOfDays(int month,int year)
{ 
	//returns the number of days in given month and year
	switch(month)
	{
		case 1 : return(31);
		case 2 : if(check_leapYear(year)==1)
		return(29);
		else
		return(28);
		case 3 : return(31);
		case 4 : return(30);
		case 5 : return(31);
		case 6 : return(30);
		case 7 : return(31);
		case 8 : return(31);
		case 9 : return(30);
		case 10: return(31);
		case 11: return(30);
		case 12: return(31);
		default: return(-1);
	}
}
int getDayNumber(int day,int mon,int year)
{
	//retuns the day number
	int res=0, t1, t2, y = year;
	year = year - 1600;
	while(year >= 100)
	{
		res = res + 5;
		year = year - 100;
	}
	res = (res % 7);
	t1 = ((year - 1) / 4);
	t2 = (year-1)-t1;
	t1 = (t1*2)+t2;
	t1 = (t1%7);
	res = res + t1;
	res = res%7;
	t2 = 0;
	for(t1 = 1;t1 < mon; t1++)
	{
		t2 += getNumberOfDays(t1,y);
	}
	t2 = t2 + day;
	t2 = t2 % 7;
	res = res + t2;
	res = res % 7;
	if(y > 2000)
	res = res + 1;
	res = res % 7;
	return res;
}
char *Day(int dd,int mm,int yy)
{
	int day;
	if(!(mm>=1 && mm<=12))
	{
		return("Invalid month value");
	}
	if(!(dd>=1 && dd<=getNumberOfDays(mm,yy)))
	{
		return("Invalid date");
	}
	if(yy>1600)
	{
		day = getDayNumber(dd,mm,yy);
		day = day%7;
		return(dayName(day));
	}
	else
	{
		return("Please give year more than 1600");
	}
}
int determinedaycode(int year)
{	
	int daycode;
	int d1, d2, d3;
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}
int entireyear(int year, int daycode)
{
	int month, day;
	char *months[]=
	{
		" ",
		"\n\n\nJanuary",
		"\n\n\nFebruary",
		"\n\n\nMarch",
		"\n\n\nApril",
		"\n\n\nMay",
		"\n\n\nJune",
		"\n\n\nJuly",
		"\n\n\nAugust",
		"\n\n\nSeptember",
		"\n\n\nOctober",
		"\n\n\nNovember",
		"\n\n\nDecember"
	};
	int nod;
	for ( month = 1; month <= 12; month++ )
	{
		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
			
		// Correct the position for the first date
		for(day=1;day<=1+daycode*5;day++)
		{
			printf(" ");
		}
		
		// Print all the dates for one month
		nod=getNumberOfDays(month,year);
		for(day=1;day<=nod;day++)
		{
			printf("%2d", day);
			
			// Is day before Sat? Else start next line Sun.
			if((day+daycode) % 7>0)
				printf("   " );
			else
				printf("\n ");
		}
		// Set position for next month
		daycode = ( daycode + nod ) % 7;
	}
	return(0);
}	
int entiremonth(int mm,int year,int daycode)
{
	int month, day;
	char *months[]=
	{
		" ",
		"\n\n\nJanuary",
		"\n\n\nFebruary",
		"\n\n\nMarch",
		"\n\n\nApril",
		"\n\n\nMay",
		"\n\n\nJune",
		"\n\n\nJuly",
		"\n\n\nAugust",
		"\n\n\nSeptember",
		"\n\n\nOctober",
		"\n\n\nNovember",
		"\n\n\nDecember"
	};
	int nod;
	for ( month = 1; month <= 12; month++ )
	{
		nod=getNumberOfDays(month,year);
		if(month==mm)
		{
			printf("%s", months[month]);
			printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
			
			// Correct the position for the first date
			for ( day = 1; day <= 1 + daycode * 5; day++ )
			{
				printf(" ");
			}
			
			// Print all the dates for one month
			for ( day = 1; day <=nod; day++ )
			{
				printf("%2d", day);
			
				// Is day before Sat? Else start next line Sun.
				if ( ( day + daycode ) % 7 > 0 )
					printf("   " );
				else
					printf("\n ");
			}
		}
			// Set position for next month
			daycode = ( daycode +nod ) % 7;
	}
	return(0);
}
char *Getmonth(char month)
{
	switch(month)
	{
		case 1:return("JANUARY");break;
		case 2:return(" FEBRUARY");break;
		case 3:return("MARCH");break;
		case 4:return ("APRIL");break;
		case 5:return ("MAY");break;
		case 6:return ("JUNE");break;
		case 7:return ("JULY");break;
		case 8:return ("AUGUST");break;
		case 9:return ("SEPTEMBER");break;
		case 10:return ("OCTOBER");break;
		case 11:return ("NOVEMBER");break;
		case 12:return ("DECEMBER");break;
		default:return("ERROR");break;
	}
}

#endif
