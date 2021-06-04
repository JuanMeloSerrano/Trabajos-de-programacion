#include <iostream>
using namespace std;
int main(){
    double valorCamiseta, cantCamisetas, totalPagar;
    cout<<"Ingrese el la cantidad de camisetas a comprar: ";
    cin>>cantCamisetas;
    cout<<"Ingrese el balor de una camiseta: $";
    cin>>valorCamiseta;
    totalPagar = cantCamisetas * valorCamiseta;
    totalPagar = totalPagar - (totalPagar * 0.08);
    cout<<"Total a pagar por el cliente: $"<<totalPagar<<endl;
   return 0;
}
