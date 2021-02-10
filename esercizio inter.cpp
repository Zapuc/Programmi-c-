														/*
												PROGRAMMA FATTO DA: Hulboceanu Francesco Lorenzo
												SCOPO: Esercitazione vettori nelle funzioni
														*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void riempiMatrice(int v[10][10], int righe, int colonne, int max)
{
	
	for(int i=0;i<righe;i++)
	{
		for(int k=0;k<colonne;k++)
		{
			v[i][k]=rand()%max+1;
		}
	}	
}


void stampaMatrice(int v[10][10], int righe, int colonne)
{
	
	for(int i=0;i<righe;i++)
	{
		for(int k=0;k<colonne;k++)
		{
			cout<<v[i][k]<<" ";	
		}
		cout<<endl;
	}
	
}


int sommaMatriceSuperiore(int v[10][10], int righe, int colonne)
{
	int somma=0;	
	
	for(int i=0;i<righe;i++)
	{
		for(int j=i+1;j<colonne;j++) 
		{
			somma+=v[i][j];
		}
	}
	return somma;
}


int main()
{
	int somma;
	int matrice[10][10];	
	srand(time(NULL));
	riempiMatrice(matrice, 10, 10, 100);
	stampaMatrice(matrice, 10, 10);
	somma=sommaMatriceSuperiore(matrice, 10, 10);
	//system("CLS");
	cout<<endl<<"La somma e': "<<somma<<endl;
	
	return 0;
}
