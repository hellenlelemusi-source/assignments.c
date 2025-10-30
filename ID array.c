/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;an array to show weekly revenue tracker
*/
#include<stdio.h>
int main(){
	float revenue[7];
	float average;
	float sum=0;
	int i;
	for (i=0;i<=7;i++){
		printf("enter revenue for the day");
		scanf("%f",&revenue[i]);
		sum=sum+revenue[i];
	}
	average=sum/7;
	printf("\total weekly revenue for day =%.2f\n",sum);
	printf("avarage daily revenue=%.2f",average);
		return 0;
}
