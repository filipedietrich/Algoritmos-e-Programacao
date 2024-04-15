#include <iostream>

using namespace std;

int main(){

// Dados lado esquerdo

	float peso_esquerdo = 0;
	float comprimento_esquerdo = 0;

// Dados lado direito

	float peso_direito = 0;
	float comprimento_direito = 0;

// Inserção de dados

	cout << "Qual o peso da criaça da esquerda?  ";
	cin >> peso_esquerdo;
	cout << "Qual o comprimento da gangorra do lado esquerdo?  ";
	cin >> comprimento_esquerdo;
	cout << "Qual o peso da criaça da direita?  ";
	cin >> peso_direito;
	cout << "Qual o comprimento da gangorra do lado direito?  ";
	cin >> comprimento_direito;

// Comparação dos lados

	float esquerda = peso_esquerdo * comprimento_esquerdo;
	float direita = peso_direito * comprimento_direito;

	if(esquerda == direita){
		cout << "A gangorra está equilibrada.";
	} else if(esquerda > direita) {
		cout << "A gangorra está desequilibrada e pendendo para esquerda.";
	} else {
		cout << "A gangorra está desequilibrada e pendendo para direita.";
	}

}