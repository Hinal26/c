#include<stdio.h>
#include<conio.h>

main()
{	int i=1;
	int n;
	clrscr();

	      printf("Enter Value : ");
	      scanf("%d",&n);
	do
	{
		printf("Revers Numer = %d\n",n);
		n--;
	}
	while(n>=i);

	getch();
}
