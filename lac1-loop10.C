#include<stdio.h>
#include<conio.h>

main()

{
      int i=1;
      int n;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&n);

      while(i<=10)
      {
	      printf("%d * %d = %d\n",n,i,n * i);
	      i++;

      }
      getch();



}
