#include<stdio.h>
#include<conio.h>

main()

{
      int n;
      int i;
      clrscr();

      i = 1;
      printf("enter value of n : ");
      scanf("%d",&n);
      printf("even number",n);

      while(i<=n)
      {
	  if(i%2==0)
	  {
	     printf("\n%d",i);
	  }

	  i++;
      }

      getch();
}
