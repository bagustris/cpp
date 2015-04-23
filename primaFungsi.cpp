#include <iostream>
#include <math.h>

using namespace std;

int isprima(int n)
{
int li;
    if (n == 2)
return 1;

if (n % 2 == 0 || n == 1)
return 0;
    for(li = 3;li <= sqrt(n);li+=2)
    {
        if (n%li==0)
    return 0;
    }
return 1;
}

int main(void)
{
int li, n, i=0;
cout<<"Bilangan prima 1 - ";
cin>>n;

for (li=1;li<=n;li++)
    if (isprima(li))
        cout<<li<<" ";
cout<<endl;
}

