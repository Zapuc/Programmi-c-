															/*
					scopo programma: capire come funziona il segnio &
					fatto da: Hulboceanu Francesco Lorenzo
					nome: funzioni con parametri per riferimento (celle di memoria/puntatori)
															*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
//#include <>
using namespace std;

int somma(int *n1, int *n2)
{
	long long somma;
	somma=*n1+*n1;
	return somma;
}

int decrementa(int n)
{
	n-=1;
	return n;
}

int main()
{
	int n1, n2, sum, n=5;
	
	cout<<"Inserisci il primo numero: ";
	cin>>n1;
	cout<<"\nInserisci il secondo numero: ";
	cin>>n2;
	cout<<"-------------------------------------";
	
	sum=somma(&n1,&n2);
	
	cout<<"\n\ncaricamento risultato";
	for(int i=0;i<n;i++)
	{
		Sleep(0350);
		cout<<".";
	}
	system("CLS");
	
	cout<<"La somma dei due numeri e': "<<sum;
	cout<<endl<<endl<<endl;
	
	cout<<"\n\n";
	cout<<decrementa(&n);
	cout<<endl<<n;
	
	return 0;
}
