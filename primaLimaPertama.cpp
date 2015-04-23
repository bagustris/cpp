/* primaLimaPertama.cpp
 * print lima bilangan prima pertama
 * 04/19/2015
 * bagustris, bagustris@yahoo.com
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int bPerP, n, c, b=2;
  cout<<"Masukkan N: ";
  cin>>n;
  cout<<"Bilangan prima : ";
  if (n>=0)
  {
    for(c=0; c < n; c++)
    {
    int p=1; cp=1;
    p=p+1;
    bPerP=b%p;
    if(bPerP==0)
    {
      cp=cp+1;
      b=p;
    }
        if (cp==2)
            cout<<cp<<" ";
    }
  }
  else
    cout<<"Input salah";
  cout<<"\n";
}


