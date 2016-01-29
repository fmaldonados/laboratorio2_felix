#include<iostream>
#include<math.h>
#include<stdio.h>
using std::cout;
using std::cin;
using std::endl;

int factorial(int x);
double distancia(int x1, int y1, int x2, int y2);
double semiperimetro(double lado1, double lado2, double lado3);


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
		cout << endl;
		double t1_l1= distancia(x1,y1,x3,y3) ,t1_l2 =  distancia(x3,y3,x4,y4) ,t1_l3 = distancia(x1,y1,x4,y4);
		double t2_l1= distancia(x4,y4,x2,y2) ,t2_l2 =  distancia(x2,y2,x1,y1) ,t2_l3 = distancia(x1,y1,x4,y4);	
		double diagonal = distancia(x1,y1,x4,y4);
		
		cout <<"("<< x1<<","<< y1<< ")"<<endl;
		cout <<"("<< x2<<","<< y2<< ")"<<endl;
		cout <<"("<< x3<<","<< y3<< ")"<<endl;
		cout <<"("<< x4<<","<< y4<< ")"<<endl<<endl;

		cout << "Los lados del trapezoide  Miden: "<<endl;
		cout << "Lado 1: "<< distancia(x1,y1,x3,y3)<<endl ;
		cout << "Lado 2: "<< distancia(x3,y3,x4,y4)<<endl ;
		cout << "Lado 3: "<< distancia(x4,y4,x2,y2)<<endl ;
		cout << "Lado 4: "<< distancia(x2,y2,x1,y1)<<endl ;

		cout << "Los lados del triangulo 1  Miden: "<<endl;
                cout << "Lado 1: "<< t1_l1<<endl ;
                cout << "Lado 2: "<< t1_l2<<endl ;
                cout << "Lado 3: "<< t1_l3<<endl<<endl ;
	
		cout << "Los lados del triangulo 2  Miden: "<<endl;
                cout << "Lado 1: "<< t2_l1<<endl ;
                cout << "Lado 2: "<< t2_l2<<endl ;
                cout << "Lado 3: "<< t2_l3<<endl<<endl ;
		
		double semiperimetro1= semiperimetro(t1_l1,t1_l2,t1_l3), semiperimetro2= semiperimetro(t2_l1,t2_l2,t2_l3);
		
		cout <<"El semiperimetro del triangulo 1 es: "<< semiperimetro1<<endl;
		cout << "El semiperimetro del triangulo 2 es: "<< semiperimetro2<< endl<< endl;
		

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

double distancia(int x1, int y1, int x2, int y2){
	double respuesta;
	int restax=x2-x1, restay=y2-y1;
	respuesta = sqrt(pow(restax,2) + pow(restay,2));
	return respuesta;

}

double semiperimetro(double lado1, double lado2, double lado3){
	double respuesta;
	respuesta = lado1 + lado2 + lado3;
	respuesta /= 2;
	return respuesta;

}











