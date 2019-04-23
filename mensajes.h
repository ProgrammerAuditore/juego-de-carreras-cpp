#include <iostream>

using namespace std;

void MSG_MDJ(){
    gotoxy(40,4); cout << "Modo de juego:\n";
    gotoxy(40,5); cout << "1 = Humano vs CPU\n";
//    gotoxy(40,6); cout << "2 = Humano vs Humano\n";
}

void Borrar_MSG_MDJ(){
    gotoxy(38,9);  cout << "                                          ";
    gotoxy(38,10); cout << "                                          ";
    gotoxy(40,4);  cout << "                                          ";
    gotoxy(40,5);  cout << "                                          ";
    gotoxy(40,6);  cout << "                                          ";
}

void MSG_Dificultad(){

    gotoxy(38,9);  cout << "                                          ";
    gotoxy(38,10); cout << "                                          ";
    gotoxy(40,4);  cout << "Opciones de dificultad: \n";
    gotoxy(40,5);  cout << "1 = Facil \n";
    gotoxy(40,6);  cout << "2 = Media \n";
    gotoxy(40,7);  cout << "3 = Dificil \n";
}

void Borrar_MSG_Dificultad(){
    gotoxy(38,9);  cout << "                                          ";
    gotoxy(38,10); cout << "                                          ";
    gotoxy(40,4);  cout << "                                          ";
    gotoxy(40,5);  cout << "                                          ";
    gotoxy(40,6);  cout << "                                          ";
    gotoxy(40,7);  cout << "                                          ";
}

void Instrucciones(){
    gotoxy(4,20);  cout << "Instrucciones: \n";
    gotoxy(4,21);  cout << "Usted al igual que el CPU o Humano tendra que agarrar las pelotas (O) \n";
    gotoxy(4,22);  cout << "en caso que de uno de ustedes llegue a los 10 puntos tendra que correr hacia la meta \n";
    gotoxy(4,23);  cout << "el primero en llegar a la meta gana!!! Suerte!!! \n";
    gotoxy(4,25);  cout << "Nota importante: \n";
    gotoxy(4,26);  cout << "Usted le corresponde la parte de arriba y el CPU(o Humano), la parte de abajo \n";
    gotoxy(4,28);  cout << "Controles: \n";
    gotoxy(4,29);  cout << "Para moverte use las flechas del su teclado\n";
    gotoxy(4,30);  cout << "Para mover al Humano use la tecla siguiente:\n";
    gotoxy(4,31);  cout << "a = Izquierda, s = Abajo, w = Arriba, d = Derecha.\n";
}

void Borrar_Instrucciones(){
    gotoxy(4,20);  cout << "                                                                                      ";
    gotoxy(4,21);  cout << "                                                                                      ";
    gotoxy(4,22);  cout << "                                                                                      ";
    gotoxy(4,23);  cout << "                                                                                      ";
    gotoxy(4,25);  cout << "                                                                                      ";
    gotoxy(4,26);  cout << "                                                                                      ";
    gotoxy(4,28);  cout << "                                                                                      ";
    gotoxy(4,29);  cout << "                                                                                      ";
    gotoxy(4,30);  cout << "                                                                                      ";
    gotoxy(4,31);  cout << "                                                                                      ";

}
