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
		for(int i=1;i<=13;i++){
			int fact = factorial(i);
			double numerador = pow(x,i);
			respuesta+= numerador/fact;			
		}
		
		cout<< "La respuesta es: "<< respuesta<<endl;
	}else{
		if(opcion==2){
		double x1,y1,x2,y2,x3,y3,x4,y4;
		cout<< "Ingrese el punto x1: ";
		cin >> x1;
		cout<< "Ingrese el punto y1; ";
		cin>> y1;
		cout<< "Ingrese el punto x2: "; 
                cin >> x2;
                cout<< "Ingrese el punto y2; ";
                cin>> y2;
		cout<< "Ingrese el punto x3: "; 
                cin >> x3;
                cout<< "Ingrese el punto y3; ";
                cin>> y3;
		cout<< "Ingrese el punto x4: "; 
                cin >> x4;
                cout<< "Ingrese el punto y4; ";
                cin>> y4;
		
		if(y1==y2 && y1==y3 && y1==y4){
			cout<< "Los puntos estan en una misma linea";
		}
		if(x1==x2 && x1==x3 && x1==x4){
			cout<< "Los puntos estan en la misma linea";
		}
		if(x1== x2 && y1==y2){
			cout<< "Los puntos son iguales";
		}
		if(x1== x3 && y1==y3){
                        cout<< "Los puntos son iguales";
                }
		if(x2==x3 && y2==y3){
			cout<< "los puntos son iguales";
		}



	
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

