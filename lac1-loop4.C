#include<stdio.h>
#include<conio.h>

main()

{
     int i = 1;
     int n;
     clrscr();
     printf("enter num : ");
     scanf("%d",&n);

     while(n>=i)
     {
	  printf("revers num = %d\n");

	  n--;
     }


     getch();
}