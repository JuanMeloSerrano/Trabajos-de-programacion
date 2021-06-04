#include <iostream>
using namespace std;
int main(){
	int n, cont = 0;
	cout<<"Ingrese el tamaño N para la matriz NxN: ";
	cin>>n;
	int m[n][n];
	
	cout<<endl;
	for (int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cont++;
			m[i][j] = cont;
			cout<<"["<<m[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	return 0;
}
