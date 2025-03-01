//Programa 30
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int i, suma, dado1, dado2,saldo,apuesta=5;

void contorno1();
void contorno2();
void dib_cara1();
void dib_cara2();
void actualiza();
int main() {
	textcolor(WHITE);textbackground(BLUE);
	clrscr;
	gotoxy(80,5); 
	printf("Saldo: %d      ", saldo);
    srand(time(NULL)); // semillaaaaaaa random
while{

    //inf. del dado #1
    contorno1();
    dado1 = rand() % 6 + 1;
    dib_cara1();

    //inf. del dado #2
    contorno2();
    dado2 = rand() % 6 + 1;
    dib_cara2();
 
getche();    
}

while(saldo>=apuesta);
    suma = dado1 + dado2;

    // Mostrar los valores de los dados y la suma
    gotoxy(25, 18);
    printf("Dado 1: %d", dado1);
    gotoxy(45, 18); // Ajuste de posición para el Dado 2
    printf("Dado 2: %d", dado2);
    gotoxy(35, 20); // Centrar la suma
    printf("Suma: %d", suma);

    // Mostrar el resultado del juego
    gotoxy(35, 22); // Centrar el mensaje de resultado
    if (suma == 7 || suma == 11) {
        printf("Ganaste!");
        saldo=saldo+apuesta*2;
    } else {
        printf("Sigue intentando.");
        saldo= saldo-apuesta;
    }
    

    getche();
    clrscr;
    return 0;
}
void actualiza();
{
	for (i = 80; i <= 95; i++) {
        gotoxy(i, 3); // Ajuste de posición vertical
        printf("%c", 178);
        gotoxy(i, 7); // Ajuste de posición vertical
        printf("%c", 178);
}
gotoxy(80,5); printf("Saldo: %d      ", saldo);
void dib_cara1() {
    switch (dado1) {
        case 1:
            gotoxy(27, 10);
            printf("*");
            break;
        case 2:
            gotoxy(23, 7);
            printf("*");
            gotoxy(31, 13);
            printf("*");
            break;
        case 3:
            gotoxy(23, 7);
            printf("*");
            gotoxy(27, 10);
            printf("*");
            gotoxy(31, 13);
            printf("*");
            break;
        case 4:
            gotoxy(23, 7);
            printf("*");
            gotoxy(31, 7);
            printf("*");
            gotoxy(23, 13);
            printf("*");
            gotoxy(31, 13);
            printf("*");
            break;
        case 5:
            gotoxy(23, 7);
            printf("*");
            gotoxy(31, 7);
            printf("*");
            gotoxy(27, 10);
            printf("*");
            gotoxy(23, 13);
            printf("*");
            gotoxy(31, 13);
            printf("*");
            break;
        case 6:
            gotoxy(23, 7);
            printf("*");
            gotoxy(31, 7);
            printf("*");
            gotoxy(23, 10);
            printf("*");
            gotoxy(31, 10);
            printf("*");
            gotoxy(23, 13);
            printf("*");
            gotoxy(31, 13);
            printf("*");
            break;
    }
}

void contorno1() {
    for (i = 20; i <= 35; i++) {
        gotoxy(i, 5);
        printf("%c", 178);
        gotoxy(i, 15);
        printf("%c", 178);
    }
    for (i = 5; i <= 15; i++) {
        gotoxy(20, i);
        printf("%c", 178);
        gotoxy(35, i);
        printf("%c", 178);
    }
}

void dib_cara2() {
    switch (dado2) {
        case 1:
            gotoxy(47, 10);
            printf("*");
            break;
        case 2:
            gotoxy(43, 7);
            printf("*");
            gotoxy(51, 13);
            printf("*");
            break;
        case 3:
            gotoxy(43, 7);
            printf("*");
            gotoxy(47, 10);
            printf("*");
            gotoxy(51, 13);
            printf("*");
            break;
        case 4:
            gotoxy(43, 7);
            printf("*");
            gotoxy(51, 7);
            printf("*");
            gotoxy(43, 13);
            printf("*");
            gotoxy(51, 13);
            printf("*");
            break;
        case 5:
            gotoxy(43, 7);
            printf("*");
            gotoxy(51, 7);
            printf("*");
            gotoxy(47, 10);
            printf("*");
            gotoxy(43, 13);
            printf("*");
            gotoxy(51, 13);
            printf("*");
            break;
        case 6:
            gotoxy(43, 7);
            printf("*");
            gotoxy(51, 7);
            printf("*");
            gotoxy(43, 10);
            printf("*");
            gotoxy(51, 10);
            printf("*");
            gotoxy(43, 13);
            printf("*");
            gotoxy(51, 13);
            printf("*");
            break;
    }
}

void contorno2() {
    for (i = 40; i <= 55; i++) {
        gotoxy(i, 5); // Ajuste de posición vertical
        printf("%c", 178);
        gotoxy(i, 15); // Ajuste de posición vertical
        printf("%c", 178);
    }
    for (i = 5; i <= 15; i++) {
        gotoxy(40, i);
        printf("%c", 178);
        gotoxy(55, i);
        printf("%c", 178);
    }
}
