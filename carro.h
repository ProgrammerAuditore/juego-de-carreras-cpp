#include <windows.h>
#include <conio.h>

#define ARRIBA 72
#define DERECHA 77
#define ABAJO 80
#define IZQUIERDA 75

// Hacemos un objeto carro
class CARRO{
    int x,y,puntos;
    void PM(int f);
public:
    // Constructor que tine como parametros las cooredenadas del carro
    CARRO(int _x,int _y): x(_x),y(_y){}
    // Obtener las coordenadas(privadas) del Carro
    int X(){ return x; }
    int Y(){ return y; }

    void borrar();
    void pintar();

    // Jugador
    void mover();

    // Humano
    void PintarMarcadorHumano();
    void moverHumano();

    // CPU

    void PintarMarcador();
    void moverCPU(int COMX,int COMY);
    void PCOM(int XX,int YY);
    void moverCMeta();
};

void CARRO::pintar(){
    gotoxy(x,y); printf("%c%c",178,62);
}

void CARRO::borrar(){
    gotoxy(x,y); printf("  ");
}

void CARRO::mover(){
 if(kbhit()){
 //gotoxy(4,4); printf("X=%d y Y=%d",x,y);
 char tecla = getch();
    if( tecla == ARRIBA && y > 4 ){ borrar(); y--; pintar();}
    if( tecla == ABAJO && y+2 < 20 ){ borrar(); y++; pintar();}
    if( tecla == DERECHA &&  x+2 < 97 ){ borrar(); x++; pintar();}
    if( tecla == IZQUIERDA && x>3 ){ borrar(); x--; pintar();}
 }
}
void CARRO::PintarMarcador(){
    gotoxy(84,2); printf("Score CPU: 0");
}

void CARRO::PM(int f){
    int mas = f;
    gotoxy(84,2); printf("Score CPU: %d",mas);
}
void CARRO::PCOM(int XX,int YY){
 gotoxy(XX,YY); printf("0");
}

void CARRO::moverCPU(int COMX,int COMY){
        int TX,TY;
        TX = COMX;
        TY = COMY;
    if( y > TY && y > 20 ){ borrar(); y--; pintar();}
    if( y < TY && y+2 < 34 ){ borrar(); y++; pintar();}
    if( x < TX && x+2 < 97 ){ borrar(); x++; pintar();}
    if( x > TX && x > 3 ){ borrar(); x--; pintar();}

}

void CARRO::moverCMeta(){
    if( x < 97 && x+2 < 97 ){ borrar(); x++; pintar();}
}

void CARRO::moverHumano(){
 if(kbhit()){
 //gotoxy(4,4); printf("X=%d y Y=%d",x,y);
    char teclas = getch();
    if( teclas == 'w' && y > 20 ){ borrar(); y--; pintar();}
    if( teclas == 's' && y+2 < 34 ){ borrar(); y++; pintar();}
    if( teclas == 'd' &&  x+2 < 97 ){ borrar(); x++; pintar();}
    if( teclas == 'a' && x>3 ){ borrar(); x--; pintar();}
 }
}
void CARRO::PintarMarcadorHumano(){
    gotoxy(80,2); printf("Score Humano2: 0");
}
