/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
*/
#include<stdio.h>
int main(){ 
	FILE*fptr=fopen("C:\\Users\\User\\OneDrive\\Desktop\\borrowed_books.txt","a");
	if(fptr==NULL){
	printf("error opening file.\n");
	return 1;
	}
	char title[100];
	printf("enter book title.\n");
	fgets(title, sizeof(title),stdin);
	fprintf(fptr,"%s",title);
	fclose(fptr);
	printf("book title is '%s'stored succesfully.\n",title);
	return 0;
	
}
