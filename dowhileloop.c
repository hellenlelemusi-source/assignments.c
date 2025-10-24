/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;program to dispay the correct password
*/
#include<stdio.h>
int main(){
	char password=20;
	do{
		printf("enter password:");
		scanf("%s",password);
	}
	while (password,"1234");
	printf("access granted\n");
return 0;
}