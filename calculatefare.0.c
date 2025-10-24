/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;function to calculate fare
*/
#include<stdio.h>
//function prototype
float calculatefare(float distance);
float farerate=50.0;
float totalfare;

void main(){
//function call	
float distance;
printf("enter the distance travelled (in km):");
scanf("%f",&distance);
float fare=calculatefare(distance);
printf("total fare  =KSH.%.2f\n",fare);
return 0;
}

//function declaration
float calculatefare(float distance){
	float farerate=50.0;
float totalfare;
totalfare=farerate*distance;
return totalfare;
}