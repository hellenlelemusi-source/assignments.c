/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728/25
Description;an array to show multiple branches
*/
#include<stdio.h>
int main(){
	int chain[3][5][10];
	int branch,floor,room;
	int totaloccupied=0;
	//assign random accupancy
	for(branch=0,branch<=3,branch++){
	for (floor=0,floor<=5,floor++){
	for (room=0,room<=10,room++){
		if (chain[branch][floor][room]==1){
		totaloccupied++;
	}
	}	
	}
	}
	printf("total number of rooms across all branches:%d\n",totaloccupied);
	return 0;
}
	