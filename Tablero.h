#ifndef TABLERO_H
#define TABLERO_H
#include "EspacioTablero.h"
#include "Casilla.h"
#include "Ficha.h"
#include "Peon.h"

class Tablero{

    private: 
        int filas;
        int columnas;
        EspacioTablero ***tableroPuntero;
    
    public:
    	//Constructor y destructor
        Tablero();
        ~Tablero();
        
        //Metodos set
        void setNumeroCasillas();
        
		//Otros metodos
        void generarTablero(int fichaUno, int fichaDos);
        void mostrarTablero();
        bool hayFicha(int fila, int columna);
        void actualizarMatriz(int filaActual, int columnaActual, int filaNueva, int columnaNueva);
        EspacioTablero * getFicha(int fila, int columna);
};

#endif
