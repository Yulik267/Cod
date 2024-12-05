

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int a,b ,r;
   cin>>a>>b;
   r=a%b;
   while(r!=0)
   {
       a=b;
       b=r;
       r=a%b;
   }
   cout<<b;

    return 0;
}