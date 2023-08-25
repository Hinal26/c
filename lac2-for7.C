#include<stdio.h>
#include<conio.h>
main()

{
      int i;
      int n;
      clrscr();

      i=2000;
      printf("Enter Number : ");
      scanf("%d",&n);
      printf("Leap Year",n);

      for(i=2000;i<=3000;i++)
      {
	 if(i%4==0)
	 {
	  printf("\t%d",i);
	 }
      }

      getch();

}
