#include<stdio.h>
#include<conio.h>

main()
{
    int i;
    int fact=1;
    clrscr();

    printf("enter value : ");
    scanf("%d",&i);

    do
    {

	 printf("num = %d\n",i);
	 fact = fact * i;
	 i--;

    }
    while(i>0);
    printf("fact = %d\n",fact);

     getch();

}