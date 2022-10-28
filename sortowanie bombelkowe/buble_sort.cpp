#include <iostream>
#include <vector>

using namespace std;



int main(){
vector<int> v;
int dlugosc;


cout<<"Podaj zakres tab: ";
cin>>dlugosc;
         
for (int i = 0; i < dlugosc; i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}


for (int i = 0; i < v.size(); i++)
{
    for (int j = 1; j < v.size()-i; j++)
    {
        if(v[j-1]>v[j])
            swap(v[j-1],v[j]);
    }
    
}

for (auto i : v)
{
    cout<<i<<" ";
}


    return 0;
}