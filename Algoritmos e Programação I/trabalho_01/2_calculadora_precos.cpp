#include <iostream>

using namespace std;

int main(){

// Declaração de variaveis

	float preco = 0;
	int opcao_de_pagamento = 0;

// Inserção de dados

	cout << "Qual o preço do produto? R$:";
	cin >> preco;

	cout << "Escolha uma forma de pagamento" << endl;
	cout << "1 - À vista em dinheiro ou cheque, recebe desconto de 10%" << endl;
	cout << "2 - À vista no cartão de crédito, recebe desconto de 15%" << endl;
	cout << "3 - Em duas vezes, preço normal de etiqueta sem juros" << endl;
	cout << "4 - Em duas vezes, preço normal de etiqueta mais juros de 10%" << endl;
	cout << "Opção: ";
	cin >> opcao_de_pagamento;

// Cálculo do desconto

	if(opcao_de_pagamento == 1){
		cout << "O preço final é R$:" << preco * 0.90;
	} else if(opcao_de_pagamento == 2){
		cout << "O preço final é R$:" << preco * 0.85;
	}else if(opcao_de_pagamento == 3){
		cout << "O preço final é 2x de R$:" << preco / 2 << " totalizando R$:" << preco;
	}else if(opcao_de_pagamento == 4){
		cout << "O preço final é 2x de R$:" << (preco * 1.10) / 2 << " totalizando R$:" << preco * 1.10;
	} else {
		cout << "Opção inválida.";
	}

}

