#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Conjetura de Collatz, ingresa un numero: ";
	cin>>n;
	while(n != 1){
		if(n%2==1){
			cout << n <<" | ";
			n = (n*3)+1;
		}else{
			cout << n <<" | ";
			n= n/2;
		}
	}
	cout << "1 " << "\n";
	return 0;
}
