#include <iostream>
using namespace std;

int main()
{
	int x;
	int& foo = x;
	foo = 56;
	cout << x <<endl;
}
