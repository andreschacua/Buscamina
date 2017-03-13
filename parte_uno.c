#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct casilla {
	
	char etiqueta;
	char tipo;
	int nMinas;
};

/*---------------------------------------------------------------------------*/

tipoCasilla** crearMatriz(int filas, int columnas){

	tipoCasilla **mat = (tipoCasilla **)malloc(filas*sizeof(tipoCasilla *));

	for (int i = 0; i < filas; i++){
		
		mat[i] = (tipoCasilla *)malloc(columnas*sizeof(tipoCasilla));
	}

	return mat;
}

/*---------------------------------------------------------------------------*/

void llenarMatriz(tipoCasilla **mat, int filas, int cols){

	for (int i = 0; i < filas; i++){
		
		for (int j = 0; j < cols; j++){
			
			mat[i][j].etiqueta = 'o';
			mat[i][j].tipo = 'c';
			mat[i][j].nMinas = '0';
		}
	}
}

/*---------------------------------------------------------------------------*/

void dibujarMatriz(filas, columnas, tipoCasilla, matriz){

	int i,j;

	for (i = 0; i < filas; i++){
		
		for (j = 0; j < cols; j++){
			
			printf("%c",matriz[i][j].tipo);
		}

		printf("\n");
	}
}

/*---------------------------------------------------------------------------*/

void dibujarMatriz(tipoCasilla **mat, int filas, int cols){

	for (int i = 0; i < filas; i++){
		
		for (int j = 0; j < cols; j++){
			
			//mat[i][j].etiqueta = 'o'
			printf("%c\t", mat[i][j].tipo);
			//mat[i][j].nMinas = '0'
		}
	}
}

void colocarMinas(int filas, int cols, tipoCasilla **mat, int numeroMinas){
	
	int posFila, posColum, n;
	srand(time(NUL));
	
	n = 0;
	
	while (n < numeroMinas){
		
		posFila = rand() % filas;
		posCol = rand() % cols;
		
		matriz[posFila][posColumn].tipo = "M";
		
		n++;
	}
}

/*---------------------------------------------------------------------------*/

typedef struct casilla tipoCasilla;

tipoCasilla** matriz;
int n = 5, m = 4, mina = 8;

matriz = crearMatriz(n,m);
llenarMatriz(matriz,n,m);
dibujarMatriz(matriz,n,m);

/*---------------------------------------------------------------------------*/

void main(/*todo lo que necesitemos*/){
	

}
