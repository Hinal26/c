#include<stdio.h>
#include<conio.h>

main()

{

    int n1=0,n2=1,sum,n;
    clrscr();

    printf("Enter Number : ");
    scanf("%d",&n);

    while(n1<n)
    {
	printf("%d  ",n1);
	sum = n1+n2;
	n1 = n2;
	n2 =sum;
    }
    getch();

}