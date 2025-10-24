/*
Name;hellen lelemusi
reg no;PA106/G/28728/25
Description;program to display exam eligibility
*/
#include<stdio.h>
int main(){
	float attendance_percentage,average_marks;
	printf("average_marks.");
	scanf("%f",&average_marks);
	printf("attendance_percentage.");
	scanf("%f",&attendance_percentage);
	
if(attendance_percentage>=0.75&&average_marks>=40)
{
	printf("eligible for exams.\n");
	}
else{
	printf("not eligible for exams.\n");
}
return 0;

}