#include <iostream>
using namespace std;

void Modify(int p, int *q, int *o)
{
    p = 27; // passed by value - only the local parameter is modified
    *q = 27; // passed by value or reference, check call site to determine which
    *o = 27; // passed by value or reference, check call site to determine which
}

int main()
{
    int a = 1;
    int b = 1;
    int x = 1;
    int *c = &x;
    cout<<a<<' '<<b<<' '<<c<<' '<<x<<'\n';
    Modify(a, &b, c);   // a is passed by value, b is passed by reference by creating a pointer,
                        // c is a pointer passed by value
    // b and x are changed
    cout<<a<<' '<<b<<' '<<c<<' '<<x<<'\n';
    return(0);
}

