#include <iostream>
#include <map>

using namespace std;
#define dlugosc 14

int main(){
    map<int,int> liczby;
    // int tab[] = {1,5,3,7,8,4,10,9,2,6};
    int tab[] = {2,6,4,3,8,7,2,5,7,9,3,5,2,6};

    for (int i = 0; i < dlugosc; i++)
    {
        ++liczby[tab[i]];
    }

    for (auto i = liczby.begin(); i != liczby.end(); i++)
    {
       for (int j = 0; j < i-> second; j++)
       {
            cout<<i -> first<<" ";
       }
    }

    return 0;
}