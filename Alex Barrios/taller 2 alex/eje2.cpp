#include<iostream>
using namespace std;
int main (){
	int opc;
	float area, base, alt, B, b;
	
	cout<<"1. Area de un triangulo."<<endl;
	cout<<"2. Area de un cuadrado."<<endl;
	cout<<"3. Area de un trapecio."<<endl;
	cout<<"4. Area de un circulo."<<endl;
	cout<<"5. Area de un rectangulo."<<endl<<endl;
	
	cout<<"Ingrese la opcion de la figura geometrica que desee calcular: ";
	cin>>opc;
	
	cout<<endl;
	switch(opc){
		case 1:
			cout<<"Area de un triangulo."<<endl<<endl;
			cout<<"Ingrese la base: ";
			cin>>base;
			cout<<"Ingrese la altura: ";
			cin>>alt;
			area = (base * alt)/2;
			cout<<"El area es: "<<area<<endl<<endl;
			break;
		case 2:
			cout<<"Area de un cuadrado."<<endl<<endl;
			cout<<"Ingrese la base: ";
			cin>>base;
			area = base*base;
			cout<<"El area es: "<<area<<endl<<endl;
			break;
		case 3:
			cout<<"Area de un trapecio."<<endl<<endl;
			cout<<"Ingrese el lado B: ";
			cin>>B;
			cout<<"Ingrese el lado b: ";
			cin>>b;
			cout<<"Ingrese la altura: ";
			cin>>alt;
			area = ((B + b) * alt)/2;
			cout<<"El area es: "<<area<<endl<<endl;
			break;
		case 4:
			cout<<"Area de un circulo."<<endl<<endl;
			cout<<"Ingrese el radio: ";
			cin>>b;
			area = 3.1416 * (b * b);
			cout<<"El area es: "<<area<<endl<<endl;
			break;
		case 5:
			cout<<"Area de un rectangulo."<<endl<<endl;
			cout<<"Ingrese la base: ";
			cin>>base;
			cout<<"Ingrese la altura: ";
			cin>>alt;
			area = base * alt;
			cout<<"El area es: "<<area<<endl<<endl;
			break;
		default:
			cout<<"A ingresado una opcion incorrecta!"<<endl;
	}
	
	return 0;
}
