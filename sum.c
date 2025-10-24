/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;function to add two numbers
*/
#include<stdio.h>

//function prototype
int addition(int x,int y);

void main(){
	int result,result_1;
	//function call
	result=addition(10,20);
	result_1=addition(30,50);
	printf("the sum is =%d\n",result);
	printf("the sum is =%d\n",result_1);
	
}

//function declaration
int addition (int x, int y){
int sum;
sum=x+y;
return sum;
}
