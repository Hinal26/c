#include<stdio.h>
#include<conio.h>

main()

{
      int i;
      int factorial=1;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&i);

      while(i>0)
      {
	      printf("Num = %d\t",i);
	      factorial = (factorial * i);
	      i--;


      }
      printf("\n\nFactorial = %d",factorial);
      getch();



}
