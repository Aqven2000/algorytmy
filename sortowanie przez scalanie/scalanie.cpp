#include <iostream>

using namespace std;

int *pom;

void scal(int tab[],int lewo,int srodek,int prawo){
    int i = lewo, j = srodek + 1;
 
  for(int i = lewo;i<=prawo; i++) 
    pom[i] = tab[i];  
  
  for(int k=lewo;k<=prawo;k++) 
    if(i<=srodek)
        if(j <= prawo)
            if(pom[j]<pom[i])
                tab[k] = pom[j++];
            else
                tab[k] = pom[i++];
            else
                tab[k] = pom[i++];
            else
                tab[k] = pom[j++];

}

void sortowanie_przez_scalanie(int tab[],int lewo,int prawo){

    if(prawo<=lewo)
        return;

    int srodek = (prawo+lewo)/2;

    sortowanie_przez_scalanie(tab,lewo,srodek);
    sortowanie_przez_scalanie(tab,srodek+1,prawo);

    scal(tab,lewo,srodek,prawo);
}

int main(){
    int *tab;
    int dlugosc = 10;
    tab = new int[dlugosc];
    pom = new int[dlugosc];

    for (int i = 0; i < dlugosc; i++)
    {
        cin>>tab[i];
    }
    

    sortowanie_przez_scalanie(tab,0,dlugosc-1);

    for (int i = 0; i < dlugosc; i++)
    {
        cout<<tab[i]<<" ";
    }
    

    return 0;
}