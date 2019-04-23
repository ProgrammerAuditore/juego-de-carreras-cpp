class MINA{
    int x,y;
public:
    MINA(int _x,int _y): x(_x),y(_y){}
    void pintar();
    void borrar();
    void colinA(class CARRO &jugador);
    void colinB(class CARRO &jugador);
    void colinC(class CARRO &jugador);
    void colinD(class CARRO &jugador);
};

void MINA::pintar(){
    gotoxy(x,y); printf(" ");
}

void MINA::borrar(){
    gotoxy(x,y); printf(" ");
}

void MINA::colinB(class CARRO &jugador){
    int DFX = jugador.X();
    int DFY = jugador.Y();

    if(x == DFX && y == DFY){
        int CXR = 3+rand()%35,CYR = 4+rand()%15;
            x = CXR+7;
            y = CYR+3;
            pintar();
    }
}

void MINA::colinD(class CARRO &jugador){
    int DFX = jugador.X();
    int DFY = jugador.Y();

    if(x == DFX && y == DFY){
        int CXR = 3+rand()%95,CYR = 4+rand()%15;
            x = CXR--;
            y = CYR--;
            pintar();
    }
}

void MINA::colinC(class CARRO &jugador){
    int DFX = jugador.X();
    int DFY = jugador.Y();

    if(x == DFX && y == DFY){
        int CXR = 3+rand()%65,CYR = 4+rand()%18;
            x = CXR+9;
            y = CYR-2;
            pintar();
    }
}

void MINA::colinA(class CARRO &jugador){
    int DFX = jugador.X();
    int DFY = jugador.Y();

    if(x == DFX && y == DFY){
        int CXR = 3+rand()%90,CYR = 4+rand()%15;
            x = CXR+4;
            y = CYR-1;
            pintar();
    }
}
