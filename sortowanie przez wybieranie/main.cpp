#include <iostream>

using namespace std;

#define dlugosc 10



int main()
{
   int tab[] = {1,5,3,7,8,4,10,9,2,6};
   
   int i, j, k;
   for(i=0; i<dlugosc; i++){
      k=i;
      for(j=i+1; j<dlugosc; j++) 
        if(tab[j]<tab[k]) 
            k=j;
      swap(tab[k], tab[i]);
   }
   
   for (auto i : tab)
   {
    cout<<i<<" ";
   }
   
   return 0;
}

