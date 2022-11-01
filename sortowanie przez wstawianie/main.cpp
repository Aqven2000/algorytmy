#include <iostream>

using namespace std;

#define dlugosc 10

int main(){
int tab[] = {1,5,3,7,8,4,10,9,2,6};

int pom, j;
     for(int i=1; i<dlugosc; i++)
     {
             //wstawienie elementu w odpowiednie miejsce
             pom = tab[i]; //ten element będzie wstawiony w odpowiednie miejsce
             j = i-1;
             
             //przesuwanie elementów większych od pom
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j]; //przesuwanie elementów
                        --j;
             }
             tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
     }

     for (auto i : tab)
     {
        cout<<i<<" ";
     }
          


    return 0;
}