#include <iostream>
using namespace std;
int main (){
	int total[100][100],matriz1[100][100],matriz2[100][100];
	int option,fila1,columna1,fila2,columna2;
	
		
	cout<<"Ingrese la cantidad de filas de la primera matriz: ";
	cin>>fila1;
	cout<<"Ingrese la cantidad de columnas de la primera matriz: ";
	cin>>columna1;
	cout<<endl;
	//ingreso de la primera matriz
	for(int i=0;i<fila1;i++){
		for(int j=0;j<columna1;j++){
			cout<<"Ingrese el valor de la fila["<<i+1<<"] y de la columna ["<<j+1<<"]: ";
			cin>>matriz1[i][j];
		}
	}
	//imprecion de la primera matriz
	cout<<endl;
	for(int i=0;i<fila1;i++){
		for(int j=0;j<columna1;j++){
			cout<<"  "<<matriz1[i][j]<<" ";
		}cout<<endl;
	}
	//ingreso de la segunda matriz
	cout<<"\nIngrese la cantidad de filas de la segunda matriz: ";
	cin>>fila2;
	cout<<"Ingrese la cantidad de columnas de la segunda matriz: ";
	cin>>columna2;
	cout<<endl;
	
	for(int i=0;i<fila2;i++){
		for(int j=0;j<columna2;j++){
			cout<<"Ingrese el valor de la fila["<<i+1<<"] y de la columna ["<<j+1<<"]: ";
			cin>>matriz2[i][j];
		}
	}
	//imprecion de la segunda matriz
	cout<<endl;
	for(int i=0;i<fila2;i++){
		for(int j=0;j<columna2;j++){
			cout<<"  "<<matriz2[i][j]<<" ";
		}cout<<endl;
	}
	
	cout<<"\n1. Suma.\n2. Resta.\n3. Multiplicacion.\n :";
	cin>>option;
	
	switch (option){
		case 1: 
		//suma
		if(fila1==fila2&&columna1==columna2){
			for(int i=0;i<fila1;i++){
				for(int j=0;j<columna1;j++){
					total[i][j]=matriz1[i][j]+matriz2[i][j];
				}
			}
			//imprecion de suma
			cout<<endl;
			for(int i=0;i<fila1;i++){
				for(int j=0;j<columna1;j++){
					cout<<total[i][j]<<" ";
				}cout<<endl;
			}
		}else{
			cout<<"Las matrices deben de tener la misma dimencion para poderse sumar.";
		}		
		break;
		
		case 2:
			//Resta
			if(fila1==fila2&&columna1==columna2){
			for(int i=0;i<fila1;i++){
				for(int j=0;j<columna1;j++){
					total[i][j]=matriz1[i][j]-matriz2[i][j];
				}
			}
			//imprecion de resta
			cout<<endl;
			for(int i=0;i<fila1;i++){
				for(int j=0;j<columna1;j++){
					cout<<total[i][j]<<" ";
				}cout<<endl;
			}
		}else{
			cout<<"Las matrices deben de tener la misma dimencion para poderse restar.";
		}
		break;
		
		case 3:
			//multiplicaccion
			if(fila1==columna2||fila2==columna1){
				//columna de matriz 1 x fila de matriz 2
				if(columna1==fila2){
					
					for(int i = 0; i < fila1; i++) {
				        for(int j = 0; j < columna2; j++) {
				            for(int k = 0; k < columna1; k++) {
				                total[i][j] += matriz1[i][k] * matriz2[k][j];
				            }
				        }
				    }
				    //imprecion de la multiplicacion
				    cout<<endl;
				    for(int i=0;i<fila1;i++){
				    	for(int j=0;j<columna2;j++){
				    		cout<<" "<<total[i][j]<<" ";
						}cout<<endl;
					}
				//fila de matriz1 x columna de matriz2
				}else if(fila1==columna2){
					
					for(int i = 0; i < fila2; i++) {
				        for(int j = 0; j < columna1; j++) {
				            for(int k = 0; k < columna2; k++) {
				                total[i][j] += matriz2[i][k] * matriz1[k][j];
				            }
				        }
				    }
				    //imprecion de multiplicacion
				    cout<<endl;
				    for(int i=0;i<fila2;i++){
				    	for(int j=0;j<columna1;j++){
				    		cout<<" "<<total[i][j]<<" ";
						}cout<<endl;
					}
				
					
				}else
				cout<<"problema";
				
			}else{
				cout<<"La operacion no se puede realizar.";
			}
		break;
	}
}

