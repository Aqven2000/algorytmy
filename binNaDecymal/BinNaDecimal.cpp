#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main(){
    int dziesietna = 13;
    vector<int> bin;

    while (dziesietna>0)
    {
        int tep = dziesietna%2;
        dziesietna/=2;
        bin.push_back(tep);

    }

    for (int i = bin.size() - 1; i >= 0; i--)
    {
        cout<<bin[i];
    }
    
    
    
    return 0;
}