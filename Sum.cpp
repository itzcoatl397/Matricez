#include<iostream>
#include<stdlib.h> // new  / delay 

using namespace std;

// funciones 

void leer();
void mostrarMatrizSumar(int **, int **);
void sumarMatriz(int **, int ** ,int,int);
void mostrarMatrizFinal(int **,int,int);

// creo un punteros  de munteros 
int  **matrizA,**matrizB;
int filasA,filasB,columnaA,columnaB; 



int main(int argc, char const* argv[])
{

    leer();
    
  

 // Limpiamos Memoria 
	for(int  i = 0; i<filasB;i++){
		delete [] matrizB[i];
	}
	delete [] matrizB;
	for(int  i = 0; i<filasA;i++){
		delete [] matrizA[i];
	}
	delete [] matrizA;
    return 0;
}

void leer() {

	cout<<"******************************************"<<endl;
	cout<<"* Suma de  Matrices  ( n x n )           *"<<endl;
	cout<<"******************************************"<<endl;

    cout << "Ingrese el numero de  filas de  matriz A : ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas  de  matriz A : ";
    cin >>columnaA;
    cout<<" "<<endl; 
    cout << "Ingrese el numero de  filas de  matriz B: ";
    cin >> filasB;
    cout << "Ingrese el numero de  columnas  de  matriz B : ";
    cin >> columnaB;
     cout<<" "<<endl; 
    
    
    //Matriz A 
   matrizA = new   int *[filasA];// reservo memoria  para filas 
   
   for(int  i = 0 ; i<filasA;i++){
   	matrizA[i] = new  int [columnaA]; // reservando memoria  para las columnas A
   }
   
  	// matriz  b  
   matrizB = new int *[filasB];
  
   for(int  i = 0 ; i<filasB;i++){
   	matrizB[i] = new  int [columnaB]; // reservando memoria  para las columnas  B
   }


   // Pedimos  los  datos  para  rellenar  matriz A 
  cout<<"Matriz 1  "<<endl;
	for(int  i  = 0;i< filasA;i++ ){
		for(int  j = 0 ;j< columnaA;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; 
			cin>>*(*(matrizA+i)+j);
		}
	}
	  cout<<" "<<endl; 
	    cout<<"Matriz 2  "<<endl;
		  cout<<" "<<endl;  
		for(int  i  = 0;i< filasB;i++ ){
		for(int  j = 0 ;j< columnaB;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"] : "; 
			cin>>*(*(matrizB+i)+j);
		}
	}
	cout<<" "<<endl;
	mostrarMatrizSumar(matrizA,matrizB);
	sumarMatriz(matrizA,matrizB,filasA,columnaB);
	mostrarMatrizFinal(matrizA,filasA,columnaB);

}

void mostrarMatrizSumar(int **matrizA,int **matrizB){
	
	
		for(int  i  = 0;i< filasA;i++ ){
		for(int  j = 0 ;j<columnaA;j++){
			cout<<"	"<<*(*(matrizA+i)+j)<<"	 ";
		}
		cout<<"\n";
	}
	cout<<" "<<endl;
	cout<<"	+	 "<<endl;
	cout<<" "<<endl;
	for(int  i  = 0;i< filasB;i++ ){
		for(int  j = 0 ;j< columnaB;j++){
			cout<<"	"<<*(*(matrizB+i)+j)<<"	";
		}
		cout<<"\n";
	}
}
void sumarMatriz(int **matrizA,int **matrizB,int  filasA,int columnaB) {
	
	for(int i = 0; i<filasA;i++){
		for(int  j  = 0 ;j<columnaB;j++){
			
		*(*(matrizA+i)+j) += *(*(matrizB+i)+j);  
		}
	}
}

void mostrarMatrizFinal(int **matrizA,int  filasA,int columnaB){
		cout<<" "<<endl;
 		cout<<"---------------------------------------------"<<endl;
 		cout<<"------LA SUMA DE  MATRIZ A   + MATRIZ  B ----"<<endl;
 		cout<<"---------------------------------------------"<<endl;
		for(int i = 0; i<filasA;i++){
			for(int  j = 0 ;j<columnaB;j++){
			
			cout<<"	"<<*(*(matrizA + i) + j)<<" ";
		}
		cout<<"\n";
	
	}
}


