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
	//seed random number generator
	
	//assign random accupancy
	for(branch=0,branch<=3,branch++){
	for (floor=0,floor<=5,floor++){
	for (room=0,room<=10,room++){
		
		totaloccupied+=chain[branch][floor][room];
	}
	}	
	}
	//print occupancy matrix and calculate total occupied
	for(branch=0,branch<=3,branch++){
printf("branch%d:\n",branch+1);
	for (floor=0,floor<=5,floor++){
printf("floor%d:\n",floor+1);
	for (room=0,room<=10,room++){
		printf("%d",chain[branch][floor][room]);
	}
		printf("\n");
	}
		printf("\n");
	}
	//print total occupied rooms
	
	printf("total number of rooms across all branches:%d\n",totaloccupied);
	return 0;
}

	

