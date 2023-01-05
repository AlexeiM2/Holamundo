#include <iostream>
using namespace std;

int main(){
	float nota1, nota2, i, n, notafinal;
	cout<<"\tUNIVERSIDAD POLITECNICA SALESIANA\n";
	cout<<"\t   Sistema calificaciones\n";
	cout<<"Ingrese cantidad de alumnos:";
	cin>>n;
	for (i=1;i<=n;i++){
	cout <<"cusadnsad";
	cout<<"\nIngrese nota Primer Parcial: ";
	cin>>nota1;
	cout<<"Ingrese nota Segundo Parcial: ";
	cin>>nota2;
	notafinal = (nota1+nota2)/2;
	
	if (notafinal > 70)
		{cout<<"Estado: Reprobado\n";
		}
	else
		cout<<"Estado: Aprobado\n";
	}
}

