#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void sw(int arr[], int n0, int n1){
	if(arr[n0]<arr[n1]){
		arr[n0];
		arr[n1];
	}else{
		int temp;
		temp=arr[n0];
		arr[n0]=arr[n1];
		arr[n1]=temp;
	}	
	//cout<<arr[n0]<<" "<<arr[n1];
}


//sorting main() base
int main(){
	srand(time(0));
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=(rand()%100);
		cout<<arr[i]<<" ";
	}cout<<endl;
	sw(arr,0,1);
	cout<<endl<<arr[0]<<" "<<arr[1];
	return 0;
}


