#include<stdio.h>
#include<conio.h>

main()
{
     int i;
     int n;
     clrscr();

     printf("enter value : ");
     scanf("%d",&n);

     for(i=1;n>=i;n--)
     {
     printf("Num = %d\n",n);
     }
     getch();

}