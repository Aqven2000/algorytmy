#include <iostream>

using namespace std;

int NWD(int a, int b)
{
	int pom;

  	while(b!=0)
	{
    	pom = b;
    	b = a%b;
    	a = pom;  
  	}
    return a;
}

int main(){
   int a,b;
   cin>>a>>b;

   cout<<NWD(a, b)<<endl;
   
    return 0;
}