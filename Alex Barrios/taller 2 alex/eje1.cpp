/*
Clacule el total a cancelar por un cliente en un almacén de llantas, sabiendo que si compra mas de 2 llantas
el precio es de $200.000 sino el precio es de $220.000.además, se hace un descuento según el tipo de pago 
mostrado las siguentes opciones:
1) de contado en efectivo
2) de contado con targeta
3) credito
si el pago es de contado en efectivo se aplica un descuento del 8%, si es de contado con targeta un 4%
si es credito no tiene descuetno.
*/

#include<iostream>
using namespace std;
int main (){
	int llantas;
	long costoLlantas;
	long valorTotal;
	int opc;
	
	cout<<"Ingrese la cantidad de llantas a comprar: ";
	cin>>llantas;
	if(llantas > 2){
		costoLlantas = llantas * 200000;
	}else{
		costoLlantas = llantas * 220000;
	}
	cout<<"Tipo de pago."<<endl;
	cout<<"Digite (1) para de contado en efectivo."<<endl;
	cout<<"Digite (2) para de contado con targeta."<<endl;
	cout<<"Digite (3) para de credito."<<endl;
	cin>>opc;
	
	if(opc == 1){
		valorTotal = costoLlantas * 0.92;
		
		cout<<"El costo de las llantas es: $"<<costoLlantas<<endl;
		cout<<"Aplicando el 8% de descuento..."<<endl;
		cout<<"EL valor total a cancelar por el cliente es: $"<<valorTotal<<endl;
	}
	else if(opc == 2){
		valorTotal = costoLlantas * 0.96;
		
		cout<<"El costo de las llantas es: $"<<costoLlantas;
		cout<<"Aplicando el 4% de descuento..."<<endl;
		cout<<"EL valor total a cancelar por el cliente es: $"<<valorTotal<<endl;
	}else{
		//no hay descuento
		valorTotal = costoLlantas;
		
		cout<<"El costo de las llantas es: $"<<costoLlantas<<endl;
	cout<<"EL valor total a cancelar por el cliente es: $"<<valorTotal<<endl;
	}
	
	return 0;
}
