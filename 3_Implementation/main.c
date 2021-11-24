int main()
{
	char c;
    int choice,h=0,m=0,s=0,daycode;
    while(1)
    {
        system("cls");
        printf("1. Find Out the Day\n");
        printf("2. Print all the day of month\n");
        printf("3. print entire year\n");
        printf("4. Digital clock\n");
        printf("5. EXIT\n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        system("cls");
        switch(choice)
        {
            case 1:
                printf("Enter date (DD MM YYYY) : ");
                scanf("%d %d %d",&date.dd,&date.mm,&date.yy);
                printf("Day is : %s",Day(date.dd,date.mm,date.yy));
                printf("\nPress any key to continue......");
                getch();
                break;
            case 2 :
                printf("Enter month and year (MM YYYY) : ");
                scanf("%d %d",&date.mm,&date.yy);
                system("cls");
	   if(date.yy<1600)
		printf("Please give year more than 1600");
                else if(date.mm<1||date.mm>12)
			printf("invalid month!");
		else
		{
                		daycode = determinedaycode(date.yy);
			entiremonth(date.mm,date.yy, daycode);
			printf("\n");
			printf("enter p if you want the previous month or n for next month : ");				c=getch();
			system("cls");
			while(c=='p'||c=='n')
			{
				if(c=='n')
				{
					if(date.mm>12)
					{	
						++date.yy;
						daycode = determinedaycode(date.yy);
						date.mm=0;
						entiremonth(++date.mm,date.yy, daycode);
					}
					else
						entiremonth(++date.mm,date.yy, daycode);
					}
					else if(c=='p')
					{
						if(date.mm<1)
						{		
							--date.yy;
							daycode = determinedaycode(date.yy);
							date.mm=13;
							entiremonth(--date.mm,date.yy, daycode);
						}
						else
							entiremonth(--date.mm,date.yy, daycode);
					}
					printf("\n\nenter p if you want the previous month or n for next month : ");
					c=getch();
					system("cls");
				}	
			}
			printf("\nPress any key to continue......");
			getch();
			break;
			case 3:
				printf("Please enter a year (example: 1999) : ");
				scanf("%d", &date.yy);
				system("cls");
			if(date.yy<1600)
			printf("Please give year more than 1600");
		                else 
			{
				daycode = determinedaycode(date.yy);
				entireyear(date.yy, daycode);
				printf("\n");
				printf("\nPress any key to continue......");
				getch();
				break;
			}

			case 4:					
			printf("Enter date (DD MM YYYY) : ");
		            scanf("%d %d %d",&date.dd,&date.mm,&date.yy);
			printf("enter time in HH MM SS format:\n");
			scanf("%d%d%d",&h,&m,&s);
			if(date.mm>12||date.mm<1)
				printf("invalid month");
			else 
			{
				if(date.dd>getNumberOfDays(date.mm,date.yy))
					printf("invalid date");
				else
				{
					for(;h<24;++h)
					{
						for(;m<60;m++)
						{
							for(;s<60;s++)
							{
								system("cls");
												printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t      %s\n",Day(date.dd,date.mm,date.yy));
			printf("\n\t\t\t\t\t\t\t    %d : %d : %d\n",h,m,s);
			printf("\n\t\t\t\t\t\t\t%d %s %d\n",date.dd,Getmonth(date.mm),date.yy);
			sleep(1);
							}
					s=0;}
					m=0;
					if(h==23)
					{
						h=-1;
						date.dd++;
						if(date.dd>getNumberOfDays(date.mm,date.yy))
						{
							date.dd=1;
							date.mm++;
							if(date.mm>12)
							{
								date.dd=1;
								date.mm=1;
								date.yy++;
							}
						}
					}
				}
			}
			printf("\nPress any key to continue......");
			getch();
			break;
			}
			printf("\nPress any key to continue......");
			getch();
			break;
			
			case 5 :
				exit(0);
        }
    }
    return 0;
}
