#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int numero = 6;
	//string palavra, palavra2;
	char palavra[100];
	int fim = 0, soma =0 ;

	cout << "digite palavra: ";
	cin >> palavra;
	while(palavra[fim] != '\0') { //vendo quantas letras tem a palavra 
		fim++;

	}
	fim--;
	int copiadofim = fim; //dps eu usarei a quantidade do fim

	for(int i = 0; copiadofim > i; i++) {//aqui serve para verificar se o numero e palindromo

		if(palavra[i] == palavra[copiadofim]) {//aqui vai verificar se a palavra[i](i == 0 e com o for ele vai aumentando) e igual a copiadofim[copiadofim](serve para ver o ultimo numero) e isso fica repitindo ate completa a palavra
			soma++;
			copiadofim--;
			if(soma >= fim/2) {
				cout << "é um palindromo";
				return 0;
			} 
		}
	}
	cout << "não é palindromo";

	return 0;
}
