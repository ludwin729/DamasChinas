#ifndef PARTIDA_H
#define PARTIDA_H
#include "Tablero.h"
#include "Jugador.h"

class Partida{

    private:
    Tablero tablero;
        //Jugador jugadorUno;
        //Jugador jugadorDos;


    
    
    
    public:
    //Constructor y destructor
        Partida();
        ~Partida();

    //Metodos
            void iniciarPartida(Tablero * tablero);
            void guardarPartida();
            void cargarPartida();
            void cerrarPartida();

};


#endif
