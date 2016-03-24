// biseksi.c need to be simplified
#include <iostream>
using namespace std;

int main() 
{
   int val;
   cout << "Enter the number: ";
   cin >> val;

	if ( val< 0) 
	{
		cout<< "According to my maths its not possible." << endl;
   	} 
	else 
	{
      float low = 0, high = val;
      float mid = (low  + high)/2;
      int c = 0;

		while (c != 1) 
		{
		if (mid * mid == val) 
		{
            cout << "Square root is: " << mid <<endl;
            c = 1;					//break
	    } 
		else 
		{
            if (mid * mid > val) 
			{
               high = mid;
               mid = (low + high)/2;
            } 
			else 
			{
               low = mid;
               mid = (low + high)/2;
            }
        }
      	}
   	}
	return 0;
}
