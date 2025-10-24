
/*
name;Lekipalu hellen lelemusi
Reg no;PA106/G/28728/25
Description;Program to display bank withdrawals
*/
#include<stdio.h>
int main(){
	int balance=1000;
	int amount;
	
	while(balance>0){
		printf( "enter amount to withdraw");
		scanf("%d\n",&amount);
		  balance=balance-amount;
		printf("new balance:=%d\n",balance);
	}
	printf("insufficient balance.balance is %d\n",balance);
	return 0;
}