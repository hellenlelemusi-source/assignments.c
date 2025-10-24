/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;function to compute simple interest
*/
#include<stdio.h>
//function prototype
float interest(float principle,float rate,float time);

void main(){
	//function call
float result;
result=interest(1000,10,5);
printf("The simple interest is =KES%.2f",result);
return 0;
}

//function declaration
float interest(float principle,float rate,float time){
float simple_interest;
simple_interest=principle * rate/100 * time;
return simple_interest;
}