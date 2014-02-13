#include <iostream>
using namespace std;



int main()
{
	int numeros[20];
	
	int x = 1;
	int i=0;
	int funcion(int x, int numeros[]);
	
	
	cout << "introduce los números" << endl;
	while (i <= 20) {
		cin >> numeros[i];
		if (numeros[i] < 1 || numeros[i] > 9) {
			cout << " ese numero no es valido tio" << endl;
		} else {
			i=i+1;
		}
	}
	i = 1;
	int a = 0;
	int b;
	int re;
	int ma;
	int j;
	while (x <= 9)
		{
//			while (i <= 20)
//			{
			re = funcion(x, numeros);
			if (re > a){
			a = re;
			x = ma;
			j = re;
			x++;
			}
			if (re < a){
			  x++;
			}
//			i++;
//			}
//			cout << "el numero" << x << "se repite" << re << "veces" << endl;
//		x++;
		}
		x--;
		cout << "el numero que mas se repite es el numero" << ma << endl;
		cout << "y se repite" << j << "veces" << endl;
}

int funcion(int x, int numeros[])
	{
	
	int i = 0;
	int alm[10];
	int b = 0;


		while(i <= 20)
			{
			if (x == numeros[i]){
			b++;
			}
			i++;
			
			}

	
	return b;
	
	}
