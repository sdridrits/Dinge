#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void rules(int arr[10][10]) {
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			if(arr[i][j]==1 || arr[i+1][j]==1 || arr[i+2][j]==1) {
				arr[i][j]==1;
				arr[i][j+1]==0;
				arr[i][j+2]==1;						
			}
			if(arr[i][j]==1 || arr[i][j+1]==1 || arr[i][j+2]==1) {
				arr[i][j]==1;
				arr[i+1][j]==0;
				arr[i+2][j]==1;						
			}
		}
	}
}
void show(int grid[10][10]) {
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			cout<<" "<<grid[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
}

int main(){
	srand(time(NULL));
	int grid[10][10];
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			grid[i][j]=0;
			//grid[i][j]=rand()%2;
		}
	}
	grid[3][5]=1;
	grid[4][5]=1;
	grid[5][5]=1;	
	/*
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			cout<<" "<<grid[i][j]<<" ";
		}
		cout<<endl<<endl;
	}
	*/
	while(true) {
		show(grid);
		rules(grid);
		(system( "cls" ));			
	}
	return 0;
}
