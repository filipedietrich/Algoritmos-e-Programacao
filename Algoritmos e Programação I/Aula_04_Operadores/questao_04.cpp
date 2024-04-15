/*

Verificar se um empregado está qualificado para a aposentadoria. 
Para isto, é necessário que o empregado tenha no mínimo 65 anos 
e tenha trabalhado por no mínimo 25 anos. 

*/


#include <iostream>

using namespace std;

int main(){
  
  int idade = 0;
  int anos_trabalho = 0;
  
  cout << "Qual a sua idade?" << endl;
  cin >> idade;
  cout << "Quantos anos você trabalhou?" << endl;
  cin >> anos_trabalho;
  
  if (idade >= 65 && anos_trabalho >= 25){
      cout << "Você está apto a se aposentar" << endl;
  } else {
      cout << "Você não está apto para se aposentar" << endl;
  }
  
  
}