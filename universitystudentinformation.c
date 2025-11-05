/*
name ;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
desription;file creation
*/
#include<stdio.h>
int main(){
	FILE*fptr=fopen("C:\\Users\\User\\OneDrive\\Desktop\\results.dat","rb");
	if(fptr==NULL){
		printf("no records found.\n");
		return 1;
	}
	struct student{
		char name[50];
		int regno;
		float marks;
	};
	struct student student;
	if (fread(&student,sizeof(struct student),1,fptr)==1){
	printf("Name:%s,marks:%.2f\n",student.name,student.marks);
	}
fclose(fptr);
return 0;
	
	
}