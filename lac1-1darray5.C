#include<stdio.h>
#include<conio.h>

main()
{
     int a[5],b[5],c[10];
     int i,j,n;
     clrscr();

     printf("Enter Marks Size : ");
     scanf("%d",&n);

     for(i=0 ; i<n ; i++)
     {
	printf("Enter Array A : ");
	scanf("%d",&a[i]);
     }
     for(i=0 ; i<n ; i++)
     {
	printf("Enter Array B : ");
	scanf("%d",&b[i]);
     }
     for(i=0 ; i<n ; i++)
     {
	c[i] = a[i];
     }
     for(i=0,j=n ; i<n,j<n*2 ; i++,j++)
     {
	c[j] = b[i];
     }
     for(i=0 ; i<n*2 ; i++)
     {
	printf("%d",c[i]);
     }
     getch();



}
