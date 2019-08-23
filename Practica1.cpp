#include<iostream>
using namespace std;
struct Persona{
	char nombre[20];
	char edad[3];
}Persona, Persona2;

int main(){
	cout<<"NOMBRE: ";
	cin.getline(Persona2.nombre,20,'\n');
	cout<<"EDAD: ";
	cin.getline(Persona2.edad,3);
	cout<<" "<<endl;
	cout<<"SU NOMBRE ES: "<<Persona2.nombre<<endl;
	cout<<"SU EDAD ES DE: "<<Persona2.edad<<endl;
	system("pause");
	return 0;
}//fin main
