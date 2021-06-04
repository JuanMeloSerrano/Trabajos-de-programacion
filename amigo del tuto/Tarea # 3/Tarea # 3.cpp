
#include <iostream>
using namespace std;
int main(){
    int numero;
	int i;
    
    cout<<"Ingrese un numero N cualquiera para calcular los numeros impares entre 1 y N: ";
    cin>>numero;
    
    if(numero < 1){
    	
	    cout<<"Por favor ingrese un numero positivo"<<endl;
	    
	}else{
		
		for(i=0; i<=numero; i++){
	    	if(i % 2 == 0){
	    		
			}else{
				cout<<"Impar -> "<<i<<endl;
			}
		}
		
	}
 
   return 0;
}
