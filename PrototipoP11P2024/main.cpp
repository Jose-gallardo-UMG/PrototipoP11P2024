//Jos� Eduardo Gallardo Del Cid
//Carn� 9959-23-106
//Variante U "Programa partidos"





#include <iostream> // Librer�a de entrada y salida en C++
#include <string>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#define NOMBRE_CANDIDATOS 5
#define NUMERO_ANOS 4
#define MAX_VOTOS 100

void PideNombres(string nomcandidatosa[NOMBRE_CANDIDATOS]);
void llenarMatrizpr(int matrizpr[NOMBRE_CANDIDATOS][NUMERO_ANOS]);
void llenarMatrizpd(int matrizpd[NOMBRE_CANDIDATOS][NUMERO_ANOS]);
void llenarMatrizpi(int matrizpi[NOMBRE_CANDIDATOS][NUMERO_ANOS]);
void imprimirMatrizLinea();
int generarNumAle();

int main()
{
    int x, y, i, j, matriza[NOMBRE_CANDIDATOS][NUMERO_ANOS], matrizb[NOMBRE_CANDIDATOS][NUMERO_ANOS], matrizc[NOMBRE_CANDIDATOS][NUMERO_ANOS];
    int totala=0, totalb=0, totalc=0, totald=0, totale=0;
    string nomcandidatob[NOMBRE_CANDIDATOS];
    PideNombres(nomcandidatob);
    system("cls");
    srand(getpid());

    //Imprime tabla de partido republicano

    cout << "\n";
    cout << "              Partido Republicano" << endl;
    cout << "\n";
    llenarMatrizpr(matriza);
    imprimirMatrizLinea();
    cout << "| " << "Cand." << setw(9) << " Ano 2017" << setw(9) << "Ano 2019" << setw(9) << "Ano 2021" << setw(9) << "Ano 2023" << "|" << endl;
    imprimirMatrizLinea();

    for (y=0 ; y<NOMBRE_CANDIDATOS ; y++)
    {
       cout << "!" << setw(8) << nomcandidatob[y] << "!";
       for (x=0 ; x<NUMERO_ANOS ; x++)
       {
           cout << setw(8) << matriza[y][x] << "!";
       }
       cout << "\n";
    }
    totala = totala + matriza[0][0] + matriza[0][1] + matriza[0][2] + matriza[0][3];
    totalb = totalb + matriza[1][0] + matriza[1][1] + matriza[1][2] + matriza[1][3];
    totalc = totalc + matriza[2][0] + matriza[2][1] + matriza[2][2] + matriza[2][3];
    totald = totald + matriza[3][0] + matriza[3][1] + matriza[3][2] + matriza[3][3];
    totale = totale + matriza[4][0] + matriza[4][1] + matriza[4][2] + matriza[4][3];
    imprimirMatrizLinea();
    cout << "\n";


    //Imprime tabla de partido democrata

    cout << "\n";
    cout << "               Partido Democrata" << endl;
    cout << "\n";
    llenarMatrizpd(matrizb);
    imprimirMatrizLinea();
    cout << "| " << "Cand." << setw(9) << "Ano 2017" << setw(9) << "Ano 2019" << setw(9) << "Ano 2021" << setw(9) << "Ano 2023" << "|" << endl;
    imprimirMatrizLinea();

    for (y=0 ; y<NOMBRE_CANDIDATOS ; y++)
    {
       cout << "!" << setw(8) << nomcandidatob[y] << "!";
       for (x=0 ; x<NUMERO_ANOS ; x++)
       {
           cout << setw(8) << matrizb[y][x] << "!";
       }
       cout << "\n";
    }
    totala = totala + matrizb[0][0] + matrizb[0][1] + matrizb[0][2] + matrizb[0][3];
    totalb = totalb + matrizb[1][0] + matrizb[1][1] + matrizb[1][2] + matrizb[1][3];
    totalc = totalc + matrizb[2][0] + matrizb[2][1] + matrizb[2][2] + matrizb[2][3];
    totald = totald + matrizb[3][0] + matrizb[3][1] + matrizb[3][2] + matrizb[3][3];
    totale = totale + matrizb[4][0] + matrizb[4][1] + matrizb[4][2] + matrizb[4][3];
    imprimirMatrizLinea();
    cout << "\n";


    //Imprime tabla de partido independiente

    cout << "\n";
    cout << "             Partido Independiente" << endl;
    cout << "\n";
    llenarMatrizpi(matrizc);
    imprimirMatrizLinea();
    cout << "| " << "Cand." << setw(9) << "Ano 2017" << setw(9) << "Ano 2019" << setw(9) << "Ano 2021" << setw(9) << "Ano 2023" << "|" << endl;
    imprimirMatrizLinea();

    for (y=0 ; y<NOMBRE_CANDIDATOS ; y++)
    {
       cout << "!" << setw(8) << nomcandidatob[y] << "!";
       for (x=0 ; x<NUMERO_ANOS ; x++)
       {
           cout << setw(8) << matrizc[y][x] << "!";
       }
       cout << "\n";
    }
    totala = totala + matrizc[0][0] + matrizc[0][1] + matrizc[0][2] + matrizc[0][3];
    totalb = totalb + matrizc[1][0] + matrizc[1][1] + matrizc[1][2] + matrizc[1][3];
    totalc = totalc + matrizc[2][0] + matrizc[2][1] + matrizc[2][2] + matrizc[2][3];
    totald = totald + matrizc[3][0] + matrizc[3][1] + matrizc[3][2] + matrizc[3][3];
    totale = totale + matrizc[4][0] + matrizc[4][1] + matrizc[4][2] + matrizc[4][3];
    imprimirMatrizLinea();
    cout << "\n";




    //Calculo del partido mas votado

    if ( (totala>totalb) && (totala>totalc) && (totala>totald) && (totala>totale) )
    {
        cout << "El partido con mas votos fue de " << nomcandidatob[0] << " con un total de: " << totala << endl;
    }
    else if ( (totalb>totala) && (totalb>totalc) && (totalb>totald) && (totalb>totale) )
    {
        cout << "El partido con mas votos fue de " << nomcandidatob[1] << " con un total de: " << totalb << endl;
    }
    else if ( (totalc>totala) && (totalc>totalb) && (totalc>totald) && (totalc>totale) )
    {
        cout << "El partido con mas votos fue de " << nomcandidatob[2] << " con un total de: " << totalc << endl;
    }
    else if ( (totald>totala) && (totald>totalb) && (totald>totalc) && (totald>totale) )
    {
        cout << "El partido con mas votos fue de " << nomcandidatob[3] << " con un total de: " << totald << endl;
    }
    else if ( (totale>totala) && (totale>totalb) && (totale>totalc) && (totale>totald) )
    {
        cout << "El partido con mas votos fue de " << nomcandidatob[4] << " con un total de: " << totale << endl;
    }


    cout << "\n";


    //Calculo del partido menos votado

    if ( (totala<totalb) && (totala<totalc) && (totala<totald) && (totala<totale) )
    {
        cout << "El partido con menos votos fue de " << nomcandidatob[0] << " con un total de: " << totala << endl;
    }
    else if ( (totalb<totala) && (totalb<totalc) && (totalb<totald) && (totalb<totale) )
    {
        cout << "El partido con menos votos fue de " << nomcandidatob[1] << " con un total de: " << totalb << endl;
    }
    else if ( (totalc<totala) && (totalc<totalb) && (totalc<totald) && (totalc<totale) )
    {
        cout << "El partido con menos votos fue de " << nomcandidatob[2] << " con un total de: " << totalc << endl;
    }
    else if ( (totald<totala) && (totald<totalb) && (totald<totalc) && (totald<totale) )
    {
        cout << "El partido con menos votos fue de " << nomcandidatob[3] << " con un total de: " << totald << endl;
    }
    else if ( (totale<totala) && (totale<totalb) && (totale<totalc) && (totale<totald) )
    {
        cout << "El partido con menos votos fue de " << nomcandidatob[4] << " con un total de: " << totale << endl;
    }

    cout << "\n";
    return 0;
}

void PideNombres(string nomcandidatosa[NOMBRE_CANDIDATOS])
{
    int i;
    //string nomcandidatos [5];

    cout << "\n";
    cout << "   Partidos Politicos (2017,2019,2021,2023)" << endl;
    cout << "\n";

    for ( i=0 ; i<5 ; i++ )
    {
        cout << " Ingrese el nombre del candidato No." << i+1 << ": ";
        cin >> nomcandidatosa[i];
    }
}

int generarNumAle()
{
    return rand() % 1000001;
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+--------";
    for (x = 0; x < NUMERO_ANOS; x++)
    {
        cout << "+--------";
    }
    cout << "+\n";
}

void llenarMatrizpr(int matrizpr[NOMBRE_CANDIDATOS][NUMERO_ANOS])
{
    //Llena matriz del partido republicano

    for (int i = 0; i < NOMBRE_CANDIDATOS; ++i) {
        for (int j = 0; j < NUMERO_ANOS; ++j) {
            matrizpr[i][j] = generarNumAle();
        }
    }

}

void llenarMatrizpd(int matrizpd[NOMBRE_CANDIDATOS][NUMERO_ANOS])
{
    //Llena matriz del partido Dem�crata

    for (int i = 0; i < NOMBRE_CANDIDATOS; ++i) {
        for (int j = 0; j < NUMERO_ANOS; ++j) {
            matrizpd[i][j] = generarNumAle();
        }
    }

}

void llenarMatrizpi(int matrizpi[NOMBRE_CANDIDATOS][NUMERO_ANOS])
{
    //Llena matriz del partido Independiente

    for (int i = 0; i < NOMBRE_CANDIDATOS; ++i) {
        for (int j = 0; j < NUMERO_ANOS; ++j) {
            matrizpi[i][j] = generarNumAle();
        }
    }

}


