// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
template<class TipoD>
void mostrar(TipoD numero);
int main()
{
	int num1 = -123;
	float num2 = 12.35;
	double num3 = 123.245;
	mostrar(num1);
	mostrar(num2);
	mostrar(num3);
	return 0;
}

template<class TipoD>
void mostrar(TipoD numero) {
	if (numero < 0) {
		numero = numero * -1;
	}
	cout<< "El valor absoluto de " << numero << endl;
}

