#include <iostream>
#include<math.h> 

using namespace std;

int next_prime (int n) 
{
int p=1; 
	if(n==2) 
		p=2; 
	for (int i=sqrt(n);i>=2;i++) 
  	{ 
  	if  (n%i==0) 
   	{ 
		p=1; 
   		break;} 
   	else 
		p=n; 
   	}  
   	if (p==1) 
	{
	next_prime(n +1); 
	cout<<endl<<n +1;}  //while 
   	return p; 
   	} 
   
main() 
{ 
   int n, prime; 
   cout<<"please enter a natural number:"; 
   cin>>n;
   prime=next_prime(n); 
   	if (prime==n) 
   		cout<<n<<" is a prime number."<<endl;
   	else
	{
		cout<<n<<" is not a prime number"<<endl; 
		cout<<"the next prime number is "<<prime<<endl; 
	}
   return 0; 
} 
