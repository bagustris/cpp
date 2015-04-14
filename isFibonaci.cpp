/* isFibonaci.cpp
 * fibonacco.cpp : cek apakah fibonaci
 * 04/10/2015
 * bagustris, bagustris@yahoo.com
 */

#include <iostream>
#include <math.h>

using namespace std;

bool isPerfectSquare(int x)
{
  int s = sqrt(x);
  return (s*s == x);
}

bool isFibonacci(int n)
{
  // n is fibonacci if one of 5*n*n + 4 or - or both
  // is perfect square
  return isPerfectSquare(5*n*n + 4) ||
         isPerfectSquare(5*n*n - 4);
}

int main()
{
  int i;
  cout<<"Masukkan bilangan N: ";
  cin>>i;
    isFibonacci(i)? cout << i << " adalah bilangan Fibonacci\n":
                    cout << i << " bukan bilangan Fibonacci\n";
  return 0;
}
