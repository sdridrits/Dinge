#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void sw(int arr[], int n0, int n1){//sw = swap;
	int temp=arr[n0];
	arr[n0]=arr[n1];
	arr[n1]=temp;
}
int main(){
	int var=0;
	int n;
	srand(time(0));
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=(rand()%1000);
		cout<<arr[i]<<" ";
	}cout<<endl;
	while(var<(n*n)){
		for(int i=0; i<n-1; i++){
			if(arr[i]<arr[i+1]){
				var+=1;
			}else{ 
				sw(arr,i,i+1);//if arr0 > arr1, swap;
				var-=2; 
			}
			//cout<<endl<<arr[i]<<"|"<<arr[i+1];
		}//cout<<endl;
	}cout<<endl;
	for(int j=0; j<n; j++){
		cout<<arr[j]<<" ";
	}
	return 0;
} 
