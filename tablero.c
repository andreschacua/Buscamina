void iniciarJuego(int filas,int cols, int **matrix){
	for (int i = 0; i < filas; i++){
		matrix [i] = (int *) malloc (columnas * sizeof(int));
	}
}

void main(int argc, char *argu){
	int filas = atoi(argu[1]);
	int cols = atoi(argu[2]);
	int **matrix = (int **) malloc(filas x sizeof(int));
	
	iniciarJuego(filas, cols, matrix); //Hacer las funciones
	dibujarTablero(filas, cols, matrix); //Hacer las funciones
	
	
}

