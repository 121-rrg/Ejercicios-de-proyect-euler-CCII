#include <iostream>
using namespace std;

long long MCM(long long, long long);
long long ArrMCM(int, int);

int arr[20];

int main()
{
	for (int n = 0; n < 20; n++)
		arr[n] = n + 1;
	cout << ArrMCM(0, 19) << "\n";
    return 0;
}

long long MCM(long long a, long long b){
	int mayor;
    if(a>b)
        mayor=a;
    else
        mayor=b;
    int n=mayor;
    while((n%a !=0) || (n%b !=0)){
        n=n+1;
    }
    return (n);
}

long long ArrMCM(int izq, int der)
{
	if (der - izq <= 1)
		return MCM(arr[izq], arr[der]);
	int med = (izq + der) / 2;
	return MCM(ArrMCM(izq, med), ArrMCM(med + 1, der));
}