/*
 * Autor: Yan Carlos Certuche 
 * Fecha de creación: 06 de mayo 2017
 * Fecha última modificación: 
 * Versión: 1.0
 * 
 * Archivo encabezado libreria TAD Matriz Dispersa
 */

 #ifndef __MATRIZDISPERSA_H
 #define __MATRIZDISPERSA_H
 #define ne 10
 #define n 10
 #include <stdio.h>

 /************************
* ESTRUCTURAS DE DATOS *
************************/
struct matriz{
	int valor[ne];
	int cols[ne];
	int cfilas[n+1];
}
typedef struct matriz MatrizD;

/************************
* OPERACIONES DEL TAD *
************************/

/* Constructoras */

MatrizD CrearDeMatrizCompleta();

/* Analizadoras */

MatrizD ObtenerMatrizCompleta();

int  ObteberElemento();

MatrizD ObtenerFila();

MatrizD ObtenerColumna();

MatrizD ObtenerFilaDispersa();

MatrizD ObtenerColumnaDispersa();

MatrizD ObtenerNumElemetos();

/* Modificadoras */

MatrizD ModificarPosicion();

MatrizD SumaMatrices();

MatrizD ProductoMatrizVector();

MatrizD MatrizTranspuesta();

#endif