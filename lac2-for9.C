#include<stdio.h>
#include<conio.h>

main()

{
      int i;
      int n,fact=1;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&n);

      for(i=1;i<=n;i++)
      {
       fact = fact * i;
       printf("Num = %d\n",i);
      }
      printf("\nfact = %d",fact);

      getch();

}
