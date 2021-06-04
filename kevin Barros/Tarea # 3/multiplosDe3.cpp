#include<iostream>
using namespace std;
int main(){
	int n, i;
	cout<<"Programa que calcula los numeros multiplos de 3 entre 1 y N."<<endl;
	cout<<"Ingrese un numero N cualquiera:";
	cin>>n;
	cout<<endl;
	for(i=3; i<=n; i++){
		if(i %  3 == 0){
			cout<<i<<" <-  es mutiplo de 3"<<endl;
		}
	}
}
