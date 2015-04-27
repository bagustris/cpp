#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int *p;     // pointer to integer
    p = &i;
    *p = 5;
    j = i;
    cout<<i<<' '<<j<<' '<<*p<<'\n';
    return 0;
}
