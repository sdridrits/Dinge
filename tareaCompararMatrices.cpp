#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
/*
void comparar(int *& arr0, int *& arr1) {
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(arr0[i][j] == arr1[i][j]) {
				cout<<"Match in: "<<"( "<<i<<", "<<j<<" )"<<"Number -> "<<arr0;	
			}
		}
	}
}*/

int main() {
	srand(time(NULL));
	int x,y;
	cin>>x>>y;
	int array0[x][y];
	int array1[x][y];
	
	//int *arr0 = array0;
	//int *arr1 = array1;
	
	cout<<"Arreglo 1: "<<endl;
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			array0[i][j] = rand()%100;
			cout<<array0[i][j]<<" ";
		}
	}cout<<endl<<"Arreglo 2: "<<endl;
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			array1[i][j] = rand()%100;
			cout<<array1[i][j]<<" ";
		}
	}
	for(int i = 0; i < x; i++) {
		for(int j = 0; j < y; j++) {
			if(array0[i][j] == array1[i][j]) {
				cout<<"Match in: "<<"( "<<i<<", "<<j<<" )"<<"Number -> "<<array0[i][j];	
			}
		}
	}
	//int *arr0 = array0;
	//int *arr1 = array1;
	
	//comparar(arr0,arr1);
}
