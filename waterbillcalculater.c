/*
Name;Hellen lelemusi
Reg no;PA106/G/28728/25
Description;program to display water bill calculater
*/
#include<stdio.h>
int main(){
	int units;
	float total_bill;
	printf("enter units consumed.");
	scanf("%d",&units);
	if(units<=30){
		total_bill=units*20;
		}
		else if(units>=30&&  units<=60){
			total_bill=units*25;
		}
			else if(units>=80){
				total_bill=units*30;
			}
		printf("total water bill :%.2fKES\n",total_bill);
		
	return 0;
	
	}