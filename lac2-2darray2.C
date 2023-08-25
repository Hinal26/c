#include<stdio.h>
#include<conio.h>

main()
{
	int a[10][10];
	int i,j,r,c,n;
	clrscr();

	printf("Enter Value Row : ");
	scanf("%d",&r);
	printf("Enter Value Calumn : ");
	scanf("%d",&c);

	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
		printf("Enter Marks A : ");
		scanf("%d",a[i][j]);
		}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
		printf("Enter Marks A : ");
		scanf("%d",a[i][j]);
		}
	}
	printf("\n\nSize = %d",i,j);
	getch();

}