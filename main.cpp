#include <iostream>
#include "gotoxy.h"
#include "carro.h"
#include "comida.h"
#include "mensajes.h"

using namespace std;

int main()
{

    int ModoDeJuego; // Elegir modo de juego con cin >>
    int cont; // Controla la veloidad
    int velocidad; // Eligir Velocidad con cin >>
    pintar_escenario(); // pinta el escenario(limites) del juego
	
    /*
	//Elegir Modo de Juego
    do{
    Instrucciones(); // Imprimimos las instrucciones
    MSG_MDJ(); // Imprimos los modos de juegos existentes
    gotoxy(38,9); cout << "Elige un modo de juego\n";
    gotoxy(38,10); cin >> ModoDeJuego;
    }while(ModoDeJuego > 1);
	*/
	
    // Elegir Dificultad
    Borrar_MSG_MDJ();
    MSG_Dificultad();
	Instrucciones(); // Imprimimos las instrucciones
    gotoxy(38,9); cout << "Elige una dificultad\n";
    gotoxy(38,10); cin >> velocidad;
    // Dificultad
    switch(velocidad){
    case 1: velocidad = 8; break; // Facil
    case 2: velocidad = 6; break; // Media
    case 3: velocidad = 4; break; // Dificil
    default: velocidad = 8;
    }
    Borrar_MSG_Dificultad();
    OcultarCursor();
    switch(velocidad){
    case 8: gotoxy(38,9); cout << "Dificultad: Facil"   << endl; break; // Facil
    case 6: gotoxy(38,9); cout << "Dificultad: Media"   << endl; break; // Media
    case 4: gotoxy(38,9); cout << "Dificultad: Dificil" << endl; break; // Dificil
    }
    gotoxy(38,10); cout << "Presiona una tecla para comenzar..." << endl;
    getch();
    Borrar_MSG_Dificultad();
    Borrar_Instrucciones(); // Borramos las instrucciones

    // carro.h
	// De aqui
    int CXR =4;
    int CYR =rand()%18;
    CARRO jugador(CXR,CYR); // carro del jugador
    int CXR2 =4;
    int CYR2 =20+rand()%32;
    CARRO CPU(CXR2,CYR2); // carro del cpu
    // Hasta aqui

    // comida.h
	// De aqui
    int AXR = 4+rand()%95;
    int AYR = rand()%23;
    APPLE comida(AXR,AYR); // comida para el jugador
    int CCPUX = 4+rand()%95;
    int CCPUY = 20+rand()%32;
    APPLE ComidaCPU(CCPUX,CCPUY); // comida para el cpu
	// Hasta aqui
	
    // Pintar parte del jugador
    jugador.pintar();
    comida.pintar();
    comida.PintarMarcador();
	
    // Pintar la parte del CPU
    CPU.pintar();
    CPU.PintarMarcador();
    ComidaCPU.pintar();
	
	bool GAME_OVER = false;

	
	// Modo de juego 1  Humano vs CPU
   	while(!GAME_OVER){ // Modo de juego 1  Humano vs CPU
	
	if(comida.PS() == 20 && jugador.X() == 95 ||
   ComidaCPU.cPu() == 20 &&  	CPU.X() == 95 ){
		GAME_OVER = true;
	}
	
	// CPU
	if(!cont)ComidaCPU.moverCPU(CPU);


    //Jugador
    if(cont++)jugador.mover();
    if(cont++)comida.choque(jugador);

    // Velocidad
    if(cont > velocidad) cont=0;
	
    Sleep(30);
}
	
	system("cls");
	if(ComidaCPU.cPu() == 20 &&  	CPU.X() == 95){
		cout << "\n\n\t\tPERDISTE!!! \n\n";
	}else{
		cout << "\n\n\t\tGANASTE!!! \n\n";
	}
	
    system("pause");
    return 0;
}
