													/*
											PROGRAMMA FATTO DA: Hulboceanu Francesco Lorenzo
											NOME: Vettorih
											SCOPO: Esercitazione vettori
													*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

void riempiVettore( int v[ ], int n,int max)
{
	
	srand(time(NULL));
	
	for( long long k=0 ; k<n ; k++ )
	{
		
		v [ k ] = rand()%max+1;
		cout << "vettore[" << k << "] = " << v [ k ] << "\n";
		
	}

}

void ordinaVettore( int v [ ], int n )
{
	
	int deposito;
	
	for( long long i = 0 ; i < n ; i ++ )
	{
		for( long long k = i + 1 ; k < n ; k ++ )
		{
			
			if( v [ k ] < v [ i ] )
			{
				
				deposito = v [ k ];
				v [ k ] = v [ i ];
				v [ i ] = deposito;
			}
			
		}
		
	}
	
	system("CLS");
	cout<<"Vettore ordinato in ordine crescente: ";
	
	for( long long i = 0 ; i < n ; i ++ )
	{
		
		cout << "vettore[" << i << "] = " << v [ i ] << "\n";
		
	}

}

int main( /* int argc, const char *argv[] */ )
{
	
	int vet [ 10 ];
	int max = 100;
	
	riempiVettore( vet, 10, max );
	
	ordinaVettore( vet );
	
	return 1;
	
}
