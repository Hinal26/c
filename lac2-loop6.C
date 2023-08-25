#include<stdio.h>
#include<conio.h>

main()

{
      int n;
      int i;
      clrscr();

      i=1;
      printf("enter value of number : ",n);
      scanf("%d",&n);
      printf("even number");

      do
      {
	  if(i%2==0)
	  {
	  printf("\n%d",i);
	  }
	  i++;
      }
      while(n<=i);
      getch();

}