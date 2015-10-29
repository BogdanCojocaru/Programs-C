#include <iostream>
#include <math.h>
using namespace std;


int main() {
int a[1001];
int nr = 0, n, i, j;
cout << "Numerele pana la: ";
cin >> n;
for (i = 2; i <= n; i++)
a[i] = 1
for (i = 2; i <= sqrt(n); i++)
if (a[i]!=0)
for (j = 2; j <= n / i; j++)
a[i*j] = 0;
cout << "Numerele prime pana la " << n << " sunt: ";
for (i = 2; i <= n; i++)
if (a[i] == 1)
cout << i << "\t";
return 0;
}
