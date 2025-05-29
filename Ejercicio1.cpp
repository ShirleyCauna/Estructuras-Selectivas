#include<iostream>
using namespace std;

int main(){
	int N1,N2,N3,P;
	cout<<"Ingrese Nota 1: ";
	cin>>N1;
	cout<<"Ingrese Nota 2: ";
	cin>>N2;
	cout<<"Ingrese Nota 3: ";
	cin>>N3;
	P=(N1+N2+N3)/3;
	if (P >= 70) {
        cout << "El alumno APRUEBA con un promedio de " << P << endl;
    } else {
        cout << "El alumno REPRUEBA con un promedio de " << P<< endl;
    }
	return 0;
}
