// modulus.cpp : demo modulus untuk mengecek ganjil/genap
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    // num % 2 menghitung sisa bagi ketika dibagi 2
    if ( num % 2 == 0 )
    {
        cout << num << " adalah genap\n";
    }
    else
        cout << num << " adalah ganjil\n";
    return 0;
}
