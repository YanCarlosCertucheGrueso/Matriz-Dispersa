#include <stdio.h>
//#include "matriz.h"
/* no pertenece al tad*/
 #define ne 100
 #define n 100

struct matriz{
	int valor[ne];
	int cols[ne];
	int cfilas[n+1];
};

typedef struct matriz MatrizD;

int** crearMatrix(int filas, int columnas){
	int i,j ;
	int** mat=(int**)malloc(filas*sizeof(int));//numero de filas que son apuntadores a nada.
	for (i=0;i<filas; i++){
		mat[i]=(int*) malloc(sizeof(int*)*columnas);// espacio de memoria para las columnas
	}

	for (i =0 ; i< filas; i++){
		for(j=0 ; j<columnas; j++){
			mat[i][j]=rand()%2;
		}
	}
	return mat; 
}

 void imprimirMatriz(int filas,int columnas, int** mat){
	 int i,j ;
	 for (i=0 ; i<filas; i++){
		 for(j=0; j<columnas; j++){
			 printf("%d", mat[i][j]);
		 }
		 printf("\n");
	 }
 }
/* hasta aqui */


 MatrizD CrearDeMatrizCompleta(int filas, int columnas,int** mat){
 	int i,j,k;
 	k=0;
 	MatrizD matriz;
	for (i =0 ; i< filas; i++){
		for(j=0 ; j<columnas; j++){
			if (mat[i][j]!=0){
				matriz.valor[k]=mat[i][j];
				printf("%d",matriz.valor[k]);
				printf("\t");
				//printf("\n");
				matriz.cols[k]=j;
				//printf("%d",matriz.cols[k]);
				//printf("\n");
				matriz.cfilas[k]=i;
				//printf("%d",matriz.cfilas[k]);
				//printf("\n");
				k=k+1;
				//printf("\n");
			}
		}
	 }
	 return matriz;
}

int main(){
	int filas = 8;
	int columnas = 8;
	int **matriz= crearMatrix( filas, columnas);
	imprimirMatriz(filas, columnas, matriz);
	MatrizD mat = CrearDeMatrizCompleta(filas,columnas,matriz);
	return 1;
}