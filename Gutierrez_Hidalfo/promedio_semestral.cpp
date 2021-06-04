#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string nombre;
	string apellido;
	string No;
	string nom_materia1, nom_materia2, nom_materia3, nom_materia4;
	
	float m1_nota_1, m1_nota_2, m1_nota_3;
	float m2_nota_1, m2_nota_2, m2_nota_3;
	float m3_nota_1, m3_nota_2, m3_nota_3;
	float m4_nota_1, m4_nota_2, m4_nota_3;
	
	float cant_cred_m1, cant_cred_m2, cant_cred_m3, cant_cred_m4;
	
	float porc_seg1=0.3, porc_seg3=0.4;
	
	float m1_s1, m1_s2, m1_s3;
	float m2_s1, m2_s2, m2_s3;
	float m3_s1, m3_s2, m3_s3;
	float m4_s1, m4_s2, m4_s3;
	
	float nota_def1,nota_def2, nota_def3, nota_def4;
	
	float prom_sem, sum_cred;
	
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"%%%%%  CALUCLADORA DE PROMEDIO SEMESTRAL  %%%%%"<<endl;
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	
	cout<<endl<<"Ingrese el nombre del estudiante: ";
	cin>>nombre;
	cout<<"Ingrese el apellido del estudiante: ";
	cin>>apellido;
	cout<<"Ingrese el No documeto de identidad del del estudiante: ";
	cin>>No;
	
	// materia 1
	cout<<endl<<endl<<"PRIMERA MATERIA...";
	cout<<endl<<endl<<"Ingrese el nombre de la primera materia: ";
	cin>>nom_materia1;
	cout<<"Ingrese la cantidad de creditos de "<<nom_materia1<<": ";
	cin>>cant_cred_m1;
	
	cout<<endl<<"Ingrese la primera nota del parcial de "<<nom_materia1<<": ";
	cin>>m1_nota_1;
	cout<<"Ingrese la segunda nota del parcial de "<<nom_materia1<<": ";
	cin>>m1_nota_2;
	cout<<"Ingrese la tercera nota del parcial de "<<nom_materia1<<": ";
	cin>>m1_nota_3;
	
	m1_s1=m1_nota_1*porc_seg1;
	m1_s2=m1_nota_2*porc_seg1;
	m1_s3=m1_nota_3*porc_seg3;
	
	nota_def1=(m1_s1+m1_s2+m1_s3);
	
	// materia 2
	cout<<endl<<endl<<"SEGUNDA MATERIA...";
	cout<<endl<<endl<<"Ingrese el nombre de la segunda materia: ";
	cin>>nom_materia2;
	cout<<"Ingrese la cantidad de creditos de "<<nom_materia2<<": ";
	cin>>cant_cred_m2;
	
	cout<<endl<<"Ingrese la primera nota del parcial de "<<nom_materia2<<": ";
	cin>>m2_nota_1;
	cout<<"Ingrese la segunda nota del parcial de "<<nom_materia2<<": ";
	cin>>m2_nota_2;
	cout<<"Ingrese la tercera nota del parcial de "<<nom_materia2<<": ";
	cin>>m2_nota_3;
	
	m2_s1=m2_nota_1*porc_seg1;
	m2_s2=m2_nota_2*porc_seg1;
	m2_s3=m2_nota_3*porc_seg3;
	
	nota_def2=(m2_s1+m2_s2+m2_s3);
	
	// materia 3
	cout<<endl<<endl<<"TERCERA MATERIA...";
	cout<<endl<<endl<<"Ingrese el nombre de la primera materia: ";
	cin>>nom_materia3;
	cout<<"Ingrese la cantidad de creditos de "<<nom_materia3<<": ";
	cin>>cant_cred_m3;
	
	cout<<endl<<"Ingrese la primera nota del parcial de "<<nom_materia3<<": ";
	cin>>m3_nota_1;
	cout<<"Ingrese la segunda nota del parcial de "<<nom_materia3<<": ";
	cin>>m3_nota_2;
	cout<<"Ingrese la tercera nota del parcial de "<<nom_materia3<<": ";
	cin>>m3_nota_3;
	
	m3_s1=m3_nota_1*porc_seg1;
	m3_s2=m3_nota_2*porc_seg1;
	m3_s3=m3_nota_3*porc_seg3;
	
	nota_def3=(m3_s1+m3_s2+m3_s3);
	
	// materia 4
	cout<<endl<<endl<<"CUARTA MATERIA...";
	cout<<endl<<endl<<"Ingrese el nombre de la primera materia: ";
	cin>>nom_materia4;
	cout<<"Ingrese la cantidad de creditos de "<<nom_materia4<<": ";
	cin>>cant_cred_m4;
	
	cout<<endl<<"Ingrese la primera nota del parcial de "<<nom_materia4<<": ";
	cin>>m4_nota_1;
	cout<<"Ingrese la segunda nota del parcial de "<<nom_materia4<<": ";
	cin>>m4_nota_2;
	cout<<"Ingrese la tercera nota del parcial de "<<nom_materia4<<": ";
	cin>>m4_nota_3;
	
	m4_s1=m4_nota_1*porc_seg1;
	m4_s2=m4_nota_2*porc_seg1;
	m4_s3=m4_nota_3*porc_seg3;
	
	nota_def4=(m4_s1+m4_s2+m4_s3);
	
	//Definitiva
	sum_cred=cant_cred_m1+cant_cred_m2+cant_cred_m3+cant_cred_m4;
	prom_sem=((nota_def1*cant_cred_m1)+(nota_def2*cant_cred_m2)+(nota_def3*cant_cred_m3)+(nota_def4*cant_cred_m4))/sum_cred;
	
	system("cls");
	cout<<endl<<endl;
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
	cout<<"%%%%%                  PROMEDIO SEMESTRAL                %%%%%"<<endl;
	cout<<"%%%%%----------------------------------------------------%%%%%"<<endl;
	
	cout<<endl<<"Nombre del cliente: "<<nombre<<endl;
	cout<<"Apellido del cliente: "<<apellido<<endl;
	cout<<"Documento de identidad: "<<No<<endl;
	cout<<"Materias ---- No. Creditos --- P1 --- P2 --- P3 --- Nota Definitiva"<<endl;
	cout<<nom_materia1<<" ---   "<<cant_cred_m1<<" --- "<<m1_nota_1<<" --- "<<m1_nota_2<<" --- "<<m1_nota_3<<" --- "<<nota_def1<<endl;
	cout<<nom_materia2<<" ---   "<<cant_cred_m2<<" --- "<<m2_nota_1<<" --- "<<m2_nota_2<<" --- "<<m2_nota_3<<" --- "<<nota_def2<<endl;
	cout<<nom_materia3<<" ---   "<<cant_cred_m3<<" --- "<<m3_nota_1<<" --- "<<m3_nota_2<<" --- "<<m3_nota_3<<" --- "<<nota_def3<<endl;
	cout<<nom_materia4<<" ---   "<<cant_cred_m4<<" --- "<<m4_nota_1<<" --- "<<m4_nota_2<<" --- "<<m4_nota_3<<" --- "<<nota_def4<<endl;
	cout<<"Promedio del Semestre: "<<prom_sem<<endl;
   return 0;
}
