#include <iostream>
using namespace std;

void by_val(int arg) { 
    arg += 2; 
}
void by_ref(int &arg) { 
    arg += 2; 
}

int main()
{
    int x = 0;
    by_val(x); 
    cout << x << endl;  // prints 0
    by_ref(x); 
    cout << x << endl;  // prints 2

    int y = 0;
    by_ref(y); 
    cout << y << endl;  // prints 2
    by_val(y); 
    cout << y << endl;  // prints 2
}
