#include<stdio.h>
#include<conio.h>

main()

{
      int n;
      int i;
      clrscr();

      i = 2000;
      printf("enter year : ");
      scanf("%d",&i);
      printf("leap year",n);

      while(i<=3000)
      {
	  if((i%4==0) && (i%400))

	  {
	     printf("%d\t",i);
	  }

	  i++;
      }

      getch();
}
