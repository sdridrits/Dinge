/*#include <iostream>
#include <math.h>
using namespace std;
//factorial
unsigned long long int fac(int n){
	return (n<=1)?1:fac(n-1)*n;
}
//RAD
double rad(int n){
	return (n*3.14159/180);
}

int main()
{
	double form;
	int conf,x;
	form=0;
	cin>>x>>conf;
	//sin x:
	for(int n=0;n<conf;n++)
	{
		//int p=2*n+1;
		form+=pow(-1,n)*(pow(rad(x),(2*n+1))/fac(2*n+1));
	}
	cout<<form<<endl;
}*/

#include <iostream>
#include <math.h>
using namespace std;
//factorial
unsigned long long int fac(int n){
	return (n<=1)?1:fac(n-1)*n;
}
//RAD
double rad(int n){
	return (n*3.14159/180);
}

int main()
{
	double sumatoria;
	int angulo, precision;
	sumatoria=0;
	cin>>angulo>>precision;
	//sin angulo:
	for(int n=0;n<precision;n++)
	{
		int m=2*n+1;
		sumatoria+=pow(-1,n)*(pow(rad(angulo),m)/fac(m));
	}
	cout<<sumatoria<<endl;
}



