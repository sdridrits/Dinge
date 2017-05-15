#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void func(int arr[], int &length){
	srand(time(0));
	cout<<"Arreglo"<<endl;
	for(int i=0; i<length; i++){
		arr[i]=rand()%100;		
		cout<<arr[i]<<endl;
	}cout<<endl<<"Numeros pares del arreglo"<<endl;
	for(int i=0; i<length; i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
		}else{
			//cout<<"jejeje"<<endl;;
		}
	}
}

int main(){
	int length;
	cin>>length;
	int arr[length];
	func(arr,length);
	return 0;
}
