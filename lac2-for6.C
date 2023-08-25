#include<stdio.h>
#include<conio.h>

main()
{
  int i;
  int n;
  clrscr();

  printf("Enter Value : ");
  scanf("%d",&n);
  printf("Even Number");

  for(i=1;i<=n;i++)
  {
  if(i%2==0)
  {
  printf("\n%d",i);
  }
  }
  getch();


}
