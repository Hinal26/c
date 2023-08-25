#include<stdio.h>
#include<conio.h>

main()

{
      int i = 1;
      int n,sum=0;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&n);

      while(i<=n)
      {
	      printf("Num = %d\t",i);
	      sum =+ i;
	      i++;

      }
      printf("\n\nSum = %d",sum);
      getch();



}