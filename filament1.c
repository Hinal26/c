#include<stdio.h>
#include<string.h>
int main()
{
	char email[]= "hinal@8286gmail.com";
	char pass[]= "Hinal@000";
	
	char c_email[100];
	char c_pass[100];
	
	
	printf("enter email = ");
	gets(c_email);
	printf("enter password = ");
	gets(c_pass);
	
	if(strcmp(email,c_email)==0 || strcmp(pass,c_pass)==0)
	{
		printf("login successfuly");
	}
	else
	{
		printf("login not valid");
	}
}
