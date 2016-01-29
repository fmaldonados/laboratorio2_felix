#include<iostream>
#include<math.h>
#include<stdio.h>
using std::cout;
using std::cin;
using std::endl;

int factorial(int x);
int main(int argc,char* argv[]){
	int opcion;
	cout<< "Selecciones una de las opciones"<<endl
	    <<"1-Numero de Euler "<<endl
	    <<"2-Trapezoide"<<endl;
	cin>>opcion;
	cout << endl;
	if(opcion == 1){
		int x;
		double respuesta=1; 
		cout<< "Ingrese un numero entero: ";
		cin>> x;
		for(int i=1;i<=15;i++){
			int fact = factorial(i);
			double numerador = pow(x,i);
			respuesta+= numerador/fact;			
		}
		cout<< "La respuesta es: "<< respuesta;
	}else{
		if(opcion==2){
			
		}else{
			cout<<"ERROR! Esa no es una de las opciones";
		}
	}
	


	return 0;
}

int factorial(int limite){
	int factorial=1;
	for(int i=1; i<=limite;i++){
		factorial *= i;
	}
	
	return factorial;
}

