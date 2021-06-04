#include <iostream>
using namespace std;
int main(){
	int opc;
	
	float n1, n2, n3, result;
	do{
		
		system("cls");	
		cout<<endl<<endl;
		cout<<"###############################################"<<endl;
		cout<<"#####  1. Operaciones matematicas         #####"<<endl;
		cout<<"#####  2. Perimetro de figura             #####"<<endl;
		cout<<"#####  3. Salir                           #####"<<endl;
		cout<<"###############################################"<<endl;
		cin>>opc;
		

		if(opc == 1){
			
			do{
				system("cls");
				cout<<endl<<endl;
				cout<<"###############################################"<<endl;
				cout<<"#####       Operaciones matematicas       #####"<<endl;
				cout<<"#####-------------------------------------#####"<<endl;
				cout<<"#####  1. Tabla de sumar                  #####"<<endl;
				cout<<"#####  2. Tabla de restar                 #####"<<endl;
				cout<<"#####  3. Tabla de multipliar             #####"<<endl;
				cout<<"#####  4. Tabla de dividir                #####"<<endl;
				cout<<"#####  5. Regresar                        #####"<<endl;
				cout<<"###############################################"<<endl;
				cin>>opc;
				
				switch(opc){
					case 1:
						
						system("cls");
						cout<<"Tabla de suma."<<endl<<endl;
						cout<<"Ingrese el primer numero: ";
						cin>>n1;
						cout<<"Ingrese el segundo numero: ";
						cin>>n2;
						result = n1 + n2;
						cout<<"La suma es igual a: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 2:
						
						system("cls");
						cout<<"Tabla de resta."<<endl<<endl;
						cout<<"Ingrese el primer numero: ";
						cin>>n1;
						cout<<"Ingrese el segundo numero: ";
						cin>>n2;
						result = n1 - n2;
						cout<<"La resta es igual a: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 3:
						
						system("cls");
						cout<<"Tabla de multiplicar."<<endl<<endl;
						cout<<"Ingrese el primer numero: ";
						cin>>n1;
						cout<<"Ingrese el segundo numero: ";
						cin>>n2;
						result = n1 * n2;
						cout<<"La multiplicacion es igual a: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 4:
						
						system("cls");
						cout<<"Tabla de dividir."<<endl<<endl;
						cout<<"Ingrese el dividendo: ";
						cin>>n1;
						cout<<"Ingrese el divisor: ";
						cin>>n2;
						result = n1 / n2;
						cout<<"La divicion es igual a: "<<result<<endl<<endl;
						system("pause");
						break;
						
				}
				
				if(opc != 1 && opc != 2 && opc != 3 && opc != 4 && opc != 5){
					cout<<"Opcion incorrecta! Vuelva a intentarlo..."<<endl<<endl;
					system("pause");			
				}
				
			}while(opc != 5);
			
		}else if(opc == 2){
				
			do{
				
				system("cls");
				cout<<endl<<endl;
				cout<<"###############################################"<<endl;
				cout<<"#####        Perimetro de figura          #####"<<endl;
				cout<<"#####-------------------------------------#####"<<endl;
				cout<<"#####  1. Cuadrado                        #####"<<endl;
				cout<<"#####  2. Triangulo                       #####"<<endl;
				cout<<"#####  3. Circulo                         #####"<<endl;
				cout<<"#####  4. Rectangulo                      #####"<<endl;
				cout<<"#####  5. Regresar                        #####"<<endl;
				cout<<"###############################################"<<endl;
				cin>>opc;
				
				system("cls");
				switch(opc){
					case 1:
						
						cout<<"Cuadrado"<<endl<<endl;
						cout<<"Ingrese la un lado del cuadrado: ";
						cin>>n1;
						result = n1 * 4;
						cout<<"El perimetro del cuadro es: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 2:
						
						cout<<"Triangulo"<<endl<<endl;
						cout<<"Ingrese el primer lado del triangulo: ";
						cin>>n1;
						cout<<"Ingrese el segundo lado del triangulo: ";
						cin>>n2;
						cout<<"Ingrese el tercer lado del triangulo: ";
						cin>>n3;
						result = n1 + n2 + n3;
						cout<<"El perimetro del triangulo es: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 3:
						
						cout<<"Circulo"<<endl<<endl;
						cout<<"Ingrese el radio del circulo: ";
						cin>>n1;
						result = n1 * 2 * 3.1416;
						cout<<"El perimetro del circulo  es: "<<result<<endl<<endl;
						system("pause");
						
						break;
					case 4:
						
						cout<<"Rectangulo"<<endl<<endl;
						cout<<"Ingrese la altura del rectangulo: ";
						cin>>n1;
						cout<<"Ingrese el ancho del rectangulo: ";
						cin>>n2;
						result = (2*n1) + (2*n2);
						cout<<"El perimetro del triangulo es: "<<result<<endl<<endl;
						system("pause");
						
				}
				
				if(opc != 1 && opc != 2 && opc != 3 && opc != 4 && opc != 5){
					cout<<"Opcion incorrecta! Vuelva a intentarlo..."<<endl<<endl;
					system("pause");			
				}
				
			}while(opc != 5);
		}else if(opc != 3){
			cout<<"Opcion incorrecta! Vuelva a intentarlo..."<<endl<<endl;
			system("pause");
		}
	}while(opc != 3);
	
   return 0;
}
