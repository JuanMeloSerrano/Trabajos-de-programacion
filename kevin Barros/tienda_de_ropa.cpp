#include <iostream>
#include <string>
using namespace std;
int main(){
	
	float ganancia = 1.4;
	float descuento = 0.85;
	
	float camisa = 20;
	float pantalon = 40;
	float zapatos = 60;
	
	float unidad_camisas = camisa * ganancia;
	float unidad_pantalones = pantalon * ganancia;
	float unidad_zapatos = zapatos * ganancia;
	
	float valor_camisas;
	float valor_pantalones;
	float valor_zapatos;
	
	int cant_camisas;
	int cant_pantalones;
	int cant_zapatos;
	
	float precio_total;
	float precio_pagar;
	float descuento_total;
	
	string nombre;
	string apellido;
	string No; 
	
	cout<<"###############################################"<<endl;
	cout<<"#####            TIENDA DE ROPA           #####"<<endl;
	cout<<"#####-------------------------------------#####"<<endl;
	cout<<"#####   PRODUCTOS:                        #####"<<endl;
	cout<<"##### - CAMISAS                           #####"<<endl;
	cout<<"##### - PANTALONES                        #####"<<endl;
	cout<<"##### - ZAPATOS                           #####"<<endl;
	cout<<"###############################################"<<endl;
	
	cout<<endl<<"Ingrese el nombre del cliente: ";
	cin>>nombre;
	cout<<"Ingrese el nombre del apellido: ";
	cin>>apellido;
	cout<<"Ingrese el No documeto de identidad del cliente: ";
	cin>>No;
	
	cout<<endl<<"NOTA: cada compra efectuada debe tener un minimo de una unidad de cada producto."<<endl;
	cout<<"(Por temas de inaguracion)"<<endl<<endl;
	
	cout<<"Ingrese la cantidad de camisas a comprar: ";
	cin>>cant_camisas;
	cout<<"Ingrese la cantidad de pantalones a comprar: ";
	cin>>cant_pantalones;
	cout<<"Ingrese la cantidad de zapatos a comprar: ";
	cin>>cant_zapatos;
	
	valor_camisas = cant_camisas * camisa * ganancia;
	valor_pantalones = cant_pantalones * pantalon * ganancia;
	valor_zapatos = cant_zapatos * zapatos * ganancia;
	
	precio_total = valor_camisas + valor_pantalones + valor_zapatos;
	
	descuento_total = precio_total - (precio_total * descuento);
	
	precio_pagar = precio_total * descuento;
	
	
	
	cout<<endl<<endl;
	cout<<"##############################################################"<<endl;
	cout<<"#####                         FACTURA                    #####"<<endl;
	cout<<"#####----------------------------------------------------#####"<<endl;
	
	cout<<endl<<"Nombre del cliente: "<<nombre<<endl;
	cout<<"Apellido del cliente: "<<apellido<<endl;
	cout<<"Documento de identidad: "<<No<<endl;
	cout<<"Producto ---- Cantidad --- Precio Unitario --- Precio Total"<<endl;
	cout<<"Camisas  ----   "<<cant_camisas<<"      --- $"<<unidad_camisas<<"             --- $"<<valor_camisas<<endl;
	cout<<"Pantalones --   "<<cant_pantalones<<"      --- $"<<unidad_pantalones<<"             --- $"<<valor_pantalones<<endl;
	cout<<"Zapatos  ----   "<<cant_zapatos<<"      --- $"<<unidad_zapatos<<"             --- $"<<valor_zapatos<<endl;
	cout<<"Precio Total   $"<<precio_total<<endl;
	cout<<"descuento      $"<<descuento_total<<endl;
	cout<<"Precio a pagar $"<<precio_pagar<<endl;
	cout<<"##############################################################"<<endl<<endl;
	
   return 0;
}
