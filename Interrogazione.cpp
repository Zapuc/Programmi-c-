											/*
							Nome programma: Interrogazione.cpp
							Data:  11/12/2020
							Programma fatto da: Hulboceanu Francesco Lorenzo
											*/



#include <iostream>
using namespace std;

int minDiUnVettore(int v[], int l )
{
	
	int min = v[0];
		for( int k = 1 ; k < l ; k ++ )
		{
			if ( min > v[k] ) // 2 5 6 9 0
			{
				min = v[k];	
			}
		}	
	return min;
}

int main()
{
	int valore;
	int vet [3] = {3,9,1};
	valore = minDiUnVettore(vet,3);
	cout<<"Il valore minimo del vettore e': "<<valore<<endl;
	vet[2]=33;
	cout<<minDiUnVettore(vet,3)<<endl;
	
	return 0;
}
