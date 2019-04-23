#include <string>

// Creamos un objeto carro
class APPLE{
    int x,y; // Coordenadas del APPLE
    int puntos=0, puntoscpu=0; // Marcadores
    void PM(int f);
    void PCPU(int f);
public:
    // Constructor que tine como parametros las cooredenadas del carro
    APPLE(int _x,int _y): x(_x), y(_y){}
		
    // Obtener las coordenadas de la Comida
    int X(){ return x; }
    int Y(){ return y; }
	// Obtener los puntos del jugador y cPu
	int PS(){ return puntos; }
	int cPu(){ return puntoscpu; }
	
    void pintar();
    void borrar();
    void PintarMarcador();

    // funcion cuando el jugador come una comida
    void choque(class CARRO &jugador);
    //CPU
    void moverCPU(class CARRO &CPU);

};

void APPLE::pintar(){
 gotoxy(x,y); printf("0");
}

void APPLE::borrar(){
 gotoxy(x,y); printf("");
}

void APPLE::PintarMarcador(){
    gotoxy(2,2); printf("Score Player: 0");
}

void APPLE::PM(int f){
    gotoxy(2,2); printf("Score Player: %d",f);
}

void APPLE::PCPU(int f){
    gotoxy(84,2); printf("Score CPU: %d",f);
}

void APPLE::choque(class CARRO &jugador){
    int XX =  jugador.X(), YY = jugador.Y();
    int ScoreL = 20; // Puntos de limites

if(puntos != ScoreL){

 if( XX == x &&  YY == y || XX+1 == x &&  YY == y){
    puntos++;
    PM(puntos);

        if( puntos < ScoreL ){
            int CXR = 3+rand()%95,CYR = 4+rand()%15;
            x = CXR;
            y = CYR;
            pintar();
        }
 }

}
 else{
    gotoxy(45,2); printf("Corre hacia la meta!!!");
    gotoxy(98,4); printf("M");
    gotoxy(98,8); printf("E");
    gotoxy(98,12); printf("T");
    gotoxy(98,16); printf("A");

        if( XX == 95)
        {
            gotoxy(45,4); printf("YOU WIN!!!");
            gotoxy(45,20); printf("YOU LOSER!!!");
            //getch();
        }

 }
}

void APPLE::moverCPU(class CARRO &CPU){
    int ZX,ZY,pR;
    ZX = CPU.X(); ZY = CPU.Y();
    pR = 20; // Puntos de limite

if(puntoscpu != pR){
    if( x == ZX && y == ZY || x == ZX+1 && y == ZY ){
    puntoscpu++;
    PCPU(puntoscpu);
        if(puntoscpu < pR ){
        int CPUX = 5+rand()%95,CPUY = 20+rand()%27;
        x = CPUX-2;
        y = CPUY;
        if( y > 32 || y == 44 ){ y = 30; }
        if( x > 95 || x == 97 ){ x = 4; }
        pintar();
        }
    }else{
    CPU.moverCPU(x,y);
    }
}else{ // Cuando los puntos llega a 10
    CPU.moverCMeta();
    gotoxy(45,2); printf("Corre hacia la meta!!!");
    gotoxy(98,22); printf("M");
    gotoxy(98,24); printf("E");
    gotoxy(98,26); printf("T");
    gotoxy(98,28); printf("A");

        if( ZX == 95)
        {
            gotoxy(45,4); printf("YOU LOSER!!!");
            gotoxy(45,20); printf("YOU WIN!!!");
            //getch();
        }
}
}