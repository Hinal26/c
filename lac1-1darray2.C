#include<stdio.h>
#include<conio.h>

main()
{
	int a[10];
	int i,n;
	clrscr();

	printf("Enter Array : ");
	scanf("%d",&n);

	for(i=0 ; i<n ; i++)
	{
		printf("Enter Value : ");
		scanf("%d",&a[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\n\nSize = %d",i);
	getch();

}