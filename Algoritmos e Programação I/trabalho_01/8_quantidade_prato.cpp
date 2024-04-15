/*****************************************************************************************


Para comemorar um feito anual, reúnem-se na casa de dona Chica os convidados A, B e C. 
Para a comemoração, é feito um prato X cuja porção é diferente para cada convidado. 

As porções são as seguintes:
O convidado A come 300g
O convidado B come 1500g
O convidado C come 600g


**********************************************************************************************/

#include <iostream>

using namespace std;

int main(){

// Declaração de variáveis

	string convidado_a;
	string convidado_b;
	string convidado_c;

// Inserção dos dados

	cout << "O convidado A irá comparecer?" << endl;
	cin >> convidado_a;
	cout << "O convidado B irá comparecer?" << endl;
	cin >> convidado_b;
	cout << "O convidado C irá comparecer?" << endl;
	cin >> convidado_c;

// Cálculo da quantidade de comida a ser feita

	int quantidade_prato = 0;

	if(convidado_a == "Sim" || convidado_a == "sim"){
		quantidade_prato = quantidade_prato + 300;
	}
	if(convidado_b == "Sim" || convidado_b == "sim"){
		quantidade_prato = quantidade_prato + 1500;
	}
	if(convidado_c == "Sim" || convidado_c == "sim"){
		quantidade_prato = quantidade_prato + 600;
	}

	cout << "Precisará ser preparado " << quantidade_prato << "g do prato" << endl;


}