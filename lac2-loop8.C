#include<stdio.h>
#include<conio.h>

main()

{
	 int i=1;
	 int n,sum=0;
	 clrscr();

	 printf("Enter value : ");
	 scanf("%d",&n);
	 do
	 {
	    printf("num = %d",i);
	    sum = sum + i;
	    i++;


	 }
	 while(i<=n);

	 printf("\n\nsum = %d",sum);
	 getch();



}