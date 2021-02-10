														/*
										Programma fatto da: Hulboceanu Francesco Lorenzo
										Data: 17/12/2020
										Scopo: Compito
														*/


#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;

void riempiMatrice(int matrice[10][10], int righe, int colonne, int max)
{
	
	for(int i=0;i<righe;i++)
	{
		
		for(int k=0;k<colonne;k++)
		{
			
			matrice[i][k]=rand()%max+1;
			cout<<matrice[i][k]<<" ";
			
		}
		
		cout<<endl;
		
	}
	
}

int riempiMaxTavolaPitagorica(int matrice[10][10], int righe, int colonne, int rigaParametro)
{
		//1 2 3 4
		//2 4 6 8 
		//3 6 9 12
			
	int somma=0;
	int i,k;
	
	for(i=0;i<righe;i++)
	{ 			
		
		
		
		for(k=0;k<colonne;k++)
		{

			matrice[i][k]=(i+1)*(k+1);				
			cout<<matrice[i][k]<<" ";
			
		}
		
		somma+=matrice[i][rigaParametro-1];
		cout<<endl;
	}

	return somma;
	
}

void fineProgramma()
{
	
	cout<<endl;
	Sleep(2500);
	system("PAUSE");
	system("CLS");
	
}

int main()
{
	
	//int return0=0;
	
	srand(time(NULL));
	int matrice[10][10];
	int somma;
	int rigaDaMettere;
	riempiMatrice(matrice, 10, 10, 100);
	
	//cout<<endl<<endl<<endl<<endl;
	
	Sleep(5000);
	system("CLS");
	cout<<"Inserisci la riga degli elementi da sommare (es prima riga=1, seconda riga=2): ";
	cin>>rigaDaMettere;
	cout<<endl<<endl;
	
	Sleep(1000);
	somma=riempiMaxTavolaPitagorica(matrice, 10, 10, rigaDaMettere);
	
	cout<<endl;
	cout<<"La somma e': "<<somma<<endl;
	
	fineProgramma();
	
	return 0;
	
}

