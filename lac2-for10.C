#include<stdio.h>
#include<conio.h>

main()

{
      int i=1;
      int n;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&n);

      for(i=1;i<=10;i++)
      {
      printf("%d*%d=%d\n",n,n,n*i);
      }

      getch();

}
