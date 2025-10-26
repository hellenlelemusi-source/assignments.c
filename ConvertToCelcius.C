/*
Name;lekipalu hellen lelemusi
 reg no;PA106/G/28728/25
Description;Function to convert temperature to degree celcius
*/
#include<stdio.h>
//function prototype
float convertToCelcius(float temperature);
float F=98.6;
float C=(F-32)*5/9;
int main(){
	//function call
	float temperature;
	printf("enter the temperature in fahrenheit:");
	scanf("%f",&temperature);
	float temparature;
	float temparatureinCelcius=convertToCelcius(temparature);
	printf("temparature in celcius=C.%.2f\n",temparatureinCelcius);
	return 0;
}
//function declarationte
float convertToCelcius(float temparature){
	float F=98.6;
	float C=(F-32)*5/9;
	return C;
}
