#include <iostream>
#include <math.h>
using namespace std;

void pol(int g, int x);

int main(){
	int grado, x;
	cout<<"Ingresa la base y el grado del polinomio: ";
	cin>>x>>grado;
	pol(grado, x);
	return 0;
}

void pol(int g, int x){ //g: grado y x: base
	int a, n[g];
	unsigned long long int sum = 0;
	for(int i=0; i<=g; i++){
		cout<<"Ingresa n"<<i<<": ";
		cin>>a;
		n[i]=a;
	}
	for(int i=0; i<=g; i++){
		sum+=n[g-i]*(pow(x,(g-i)));
	}
	cout<<sum<<endl;;
}
