#include <iostream>
#include <cmath>

using namespace std;

#define dlugosc 100

int main(){
    int tab[dlugosc];
    bool czyPierwsza[dlugosc];

    for (int i = 2; i <= dlugosc; i++)
    {
        tab[i] = i;
        czyPierwsza[i] = true;
    }

    for (int i = 2; i <= sqrt(dlugosc); i++)
    {
            if(czyPierwsza[i]){
                int j=i;
                for ( j = i*j; j <= dlugosc; j+=i)
                {
                    czyPierwsza[j] = false;
                }
                
            }
    }

    for (int i = 2; i <=dlugosc; i++)
    {
        if(czyPierwsza[i] == true)
            cout<< i <<" ";
    }
    
    
    
    
    return 0;
}