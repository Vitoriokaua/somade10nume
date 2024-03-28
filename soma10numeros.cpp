#include <iostream>

using namespace std;
//exercicio soma de 10 numeros

int main() {
	int const tam = 10;
	int vetor[tam];
	int soma{ 0 };


	for (int i = 0; i < tam; i++)
	{
		cout << "informe os numeros: ";
		cin >> vetor[i];
		soma += vetor[i];
	}

	cout << "a soma dos " << tam << " numeros e: " << soma;


}