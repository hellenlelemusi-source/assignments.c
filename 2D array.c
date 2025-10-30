/*
name;lekipalu hellen lelemusi
reg no;PA106/G/28728
Description;an array displaying room occupancy
*/
#include<stdio.h>
int main(){
	float occupancy[5][10];
	int floor,room;
	int occupied,vacant;
	
	//generate random occupancy data
	
	for (floor=0;floor<=5;floor++){
		for (room=0;room<=10;room++){
	}
}
//display results per floor
for(floor=0;floor<=5;floor++){
	occupied=0;
	vacant=0;
	for(room=0;room<=10;room++){
		if (occupancy[floor][room]==1){
			occupied++;
	}
	else {
		vacant ++;
	}
	}
	printf("floor%d,occupied=%d,vacant=%d\n",floor+1,occupied,vacant);
}

return 0;

}