#include <ncurses.h>
int main()
{
char nombre[25];



initscr();
clear();
 int pregunta;
    int Pregunta;
    printw("Hola, elige el numero de pregunta de la que quieras saber la respuesta\n");
    printw("1. ¿Como te llamas?\n");
    printw("2. ¿Te gusta algun deporte?\n");
    printw("3. ¿Lo practicas?\n");
    printw("4. ¿Cual es tu mayor anhelo en la vida?\n");
    printw("5. ¿Como planeas lograrlo?\n");
    printw("6. ¿Quien es tu superheroe favorito?\n");
    printw("7. ¿Cual es tu hobby favorito?\n");
    printw("8. ¿Cual es tu cancion favorita?\n");
    printw("Escribe el numero de la pregunta: "); scanw ("%d", &Pregunta);

    if (Pregunta == 1) {
        printw(" ");
        printw("Gideon, es un placer conocerte\n");
        printw("¿Deseas hacerme alguna otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 2) {
        printw(" ");
        printw("Si, me encanta el soccer\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");;
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 3) {
        printw(" ");
        printw("No puedo ya que soy una inteligencia virtual, pero me encanta verlo por TV, soy fanatica de las chivas\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 4) {
        printw(" ");
        printw("Ser el mejor asistente virtual\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 5) {
        printw(" ");
        printw("Actualizando mi información cada vez que sea posibe\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }
    }

    if (Pregunta == 6) {
        printw(" ");
        printw("Wonder woman, me encantaria ser como ella y patear traseros\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 7) {
        printw(" ");
        printw("Mmm... Pues ver soccer y leer\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printw("Gracias por preguntar\n"); }
    }

    if (Pregunta == 8) {
        printw(" ");
        printw("Me encanta la cancion I want it that way\n");
        printw("¿Deseas hacer otra pregunta?\n");
        printw("Ponga 1. Para si, o 2. para no\n");
        scanw("%d", &pregunta);
        if(pregunta == 1){
            return main();
        } else {
        printf("Gracias por preguntar\n"); }  }


refresh();
getch();
endwin();
return 0;
}

