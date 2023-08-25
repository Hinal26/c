#include<stdio.h>
#include<conio.h>

main()

{
      int i=1;
      int n,sum=0;
      clrscr();

      printf("Enter Number : ");
      scanf("%d",&n);

      for(i=1;i<=n;i++)
      {
       sum = sum + i;
       printf("Num = %d\n",i);
      }
      printf("\nsum = %d",sum);

      getch();

}
