/*Diseñar un programa en C++ que imprima los números impares desde el 1 hasta un número N. 

Por ejemplo, si el usuario ingresa el número N=10, su programa debe mostrar los números: 1,3,5,7,9.  

Se debe hacer uso de una estructura repetitiva.  

Deben subir su proyecto comprimido. 
*/
#include <iostream>
using namespace std;
int main(){
    int n, i;
    
    cout<<"Programa que imprime los numeros impares desde el 1 hasta un numero N."<<endl;
    cout<<"Ingrese un numero N cualquiera: ";
    cin>>n;
    
    if(n > 0){
    	
	    for(i=0; i<=n; i++){
	    	if(i % 2 == 0){
	    		
			}else{
				cout<<i<<endl;
			}
		}
	}else{
		cout<<"Ingrese un numero mayor que 0..."<<endl;
	}
 
   return 0;
}
