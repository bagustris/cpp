#include <stdio.h>
#include <math.h>

int isprima(int n)
{
int li;
if (n == 2)
return 1;
if (n % 2 == 0 || n == 1)
return 0;
for(li = 3;li <= sqrt(n)=;li+=2)
{
if (n%li==0)
return 0;
}

return 1;
}
void main(void)
{
int li;
printf("bil prima 1 sampai 11 : \n');
for (li=1;li<=11;li++)
if (isprima(li))
printf("%3d",li);
}
