#include<stdio.h>
#include<conio.h>

main()
{	int i= 1;
	int n;
	clrscr();

	      printf("Enter Value : ");
	      scanf("%d",&n);

	do
	{

		printf("Number = %d\n",i);
		i++;


	}
	while(i<=n);

	getch();

}
