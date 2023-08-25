#include<stdio.h>
#include<conio.h>
main(){
	
	int a,b,c;
//	clrscr();
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value of B = ");
	scanf("%d",&b);
	printf("Enter value of C = ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("A is big");
		}
		else{
			printf("C is big");
		}
	}
	else{
		if(b>c){
			printf("B is big");
		}
		else{
			printf("C is big");
		}
	}
	getch();
}
