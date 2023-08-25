#include<stdio.h>
#include<conio.h>

main()

{     int n;
      int i;

      clrscr();
      i=2000;
      printf("enter year : ");
      scanf("%d",&n);
      printf("leap year",n);

      do
      {
	 if(i%4==0)
	 {
	 printf("\t%d",i);
	 }
	 i++;

      }
      while(i<=3000);


      getch();






}