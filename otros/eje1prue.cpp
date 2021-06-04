#include <iostream>
using namespace std;
int main(){
	int m, n, i, r;
    cin>>n;
    cin>>m;
    i=1;
    while(i<= n && i<= m){
    	if(n%i ==0 && m % i == 0){
    		r=i;
		}
		i++;
	}
    
    cout<<"El perimetro del triangulo rectangulo es: "<<r<<endl;
   return 0;
}
