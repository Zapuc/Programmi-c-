				/*
										Programma fatto da: Hulboceanu Francesco Lorenzo
										Data: 9/12/2020
										Scopo: Compito
														*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void inizialize (int v[],int l){
    for(int i=0;i<l;i++) v[i]=0;
}

long long sh(int v[10][10], int riga, int colonna)
{
	
	
	
}

void show (int v[], int l){
    for(int i=0;i<l;i++){
        switch(v[i]){
            case 0:
                cout<<" O ";break;
            case 1:
                cout<<" X ";break;
            case 2:
                cout<<" - ";break;
            case 3:
                cout<<" * ";
    }
    }
    cout<<endl;
}
void arrange(int v[],int l){
    srand(time(NULL));
    int n=rand()%(l-1);
    v[n]=1;
    v[n+1]=1;
}
void launch(int v[],int l){
    int p=-1;
    while(p<1||p>l){
        cout<<"inserire le coordinate in cui sganciare la bomba (1.."<<l<<"):";
        cin>>p;
    }
    p--;
    if(v[p]==0) v[p]=2;
    if(v[p]==1) v[p]=3;
}

bool weWon(int v[], int l){
        for(int i=0;i<l;i++){
        if(v[i]==1)return false;
}
return true;

}

int main()
{

    int num_bomb=0;
    const int MAPLENGTH=10;
    int map[MAPLENGTH];
    inizialize(map,MAPLENGTH);
    arrange(map,MAPLENGTH);
    show(map,MAPLENGTH);

    while(true){
        num_bomb++;
        launch(map,MAPLENGTH);
        show(map,MAPLENGTH);
        if(weWon(map,MAPLENGTH))break;
    }

    if(num_bomb<=3)
    {
        cout<<"\nComplimenti, sei stato ottimo\n";
    }else if(num_bomb>3&&num_bomb<5)
    {
        cout<<"\nComplimenti, sei stato bravo\n";
    }

    return 0;
}
