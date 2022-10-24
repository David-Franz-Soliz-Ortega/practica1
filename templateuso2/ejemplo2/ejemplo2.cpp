// ejemplo2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
template<class tipoD>
void comparar(tipoD dato1, tipoD dato2);

int main()
{
	int num1 = 12;
	float num2 = 5.23;
	comparar(num1,num2);
	return 0;
	
}

template<class tipoD>
void comparar(tipoD dato1, tipoD dato2) {
	int mayor;
	if (dato1 > dato2) {
		cout << "mayor " << dato1;
		cout << "menor " << dato2;
	}
	else {
		cout << "mayor " << dato2;
		cout << "menor " << dato1;
	}
	
}