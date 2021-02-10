						
														/*
									PROGRAMMA FATTO DA: Hulboceanu Francesco Lorenzo
									NOME PROGRAMMA: Numero da indovinare
														*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void fineProgramma()
{
	Sleep(2500);
	system("CLS");
	system("PAUSE");
	cout<<"\n\n\t\t\t\tProgramma finito\n\n";

}

int main ()
{
char scelta;
srand(time(NULL));
int cas = rand()%100+1;
bool numTrovato = false;
int numUtente;
int tentativi = 3;

cout << "Indovina un numero da 1 a 100 avendo " << tentativi << "\n\n\n";
Sleep(1100);
    
	do
	{
		cout << "Scrivi il tuo numero: ";
		cin >> numUtente;
		cout << endl;
        
  		if( numUtente == cas )
  		{
  			numTrovato = true;
  			system("CLS");
  			cout << "Complimenti,hai indovinato il numero :)\n";
   			break;
		}
		
  		if( numUtente != cas )
  		{
  			
  			tentativi--;
  			
   			if( numUtente > cas )
    		{
    			
    			if( tentativi == 0 )
    			{
    				break;
				}
				
      			cout << "\nIl tuo numero e' alto\n";
      			
      			if( tentativi == 1 )
      			{
      				cout << "Ti rimane un tentativo\n\n";
				}
      			else
				{
				cout << "Ti rimangono " << tentativi << " tentativi\n\n";
				}
      			
    		}
			else if( numUtente < cas )
    		{
    			
    			if( tentativi == 0 )
    			{
    				break;
				}
				
      			cout << "\nIl tuo numero e' basso\n";
      			
      			if( tentativi == 1 )
      			{
      				cout << "Ti rimane un tentativo\n\n";
				}
				else
				{
				cout << "Ti rimangono " << tentativi << " tentativi\n\n";
				}
				
   			}
   			
  		}
  		
	}while( tentativi > 0 );


	if( numTrovato == false )
	{
		
        Sleep(1000);
        
        	do
        	{
        		system("CLS");
        		cout << "Non hai indovinato il numero, vuoi sapere qual'era?\nScrivi X/Y: ";
        		cin >> scelta;
        	}while( scelta != 'X'  &&  scelta != 'Y' );
        	
        	if( scelta == 'Y' )
        	{
        		cout << "\nBene bene, il numero era " << cas << "\n";
        	}
        	
	}

fineProgramma();

return 0;
}
