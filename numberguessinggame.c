/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;program to display a number guessing game
*/
#include<stdio.h>
int main(){
	int guess;
	int attempts=0;
	int secret=1-20;
	
		printf("guess the number(1 to 20):\n");
	while(1){
		scanf("%d",&guess);
attempts++;
if(guess>secret)
printf("too high!\n");
else if(guess<secret)
printf("too low!\n");
	
	 else{
		printf("congratulations!guessed is %d attempts.\n",attempts);}
		break;
	}
	return 0;
	
	}	


	