/*
 * union.c: demonstrated union
 * source : https://en.wikipedia.org/wiki/Union_type
 * 03/17/2016 04:06:29 PM
 * bagustris, bagustris@yahoo.com
 *
 * Institut Teknologi Sepuluh Nopember
 */
#include <iostream>

using namespace std;

int main() {
   union {
      int d;
      char f;
   };

   d = 4;
   cout << d << endl;

   f = 'i';
   cout << f << endl;
}

