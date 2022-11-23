#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_S = 100;

int main(){
double Stos[MAX_S];
int p = 0;
string in;
int v1,v2;
stringstream ss;

while (true)
{
    getline(cin,in);

    if(in == "=")
        break;
    
    ss.str("");
    ss.clear();
    ss << in;

    if (ss>>v1)
        Stos[p++] = v1;
    else
    {
        v1 = Stos[--p];
        v2 = Stos[--p];

        if(in[0] == '+')
            v1+=v2;
        else if(in[0] == '-')
            v1-=v2;
        else if(in[0] == '*')
            v1*=v2;
        else if(in[0] == '/')
            v1/=v2;

        Stos[p++] = v1;
    }
    
    
    
}
cout<<fixed<<Stos[--p]<<'\n';


}