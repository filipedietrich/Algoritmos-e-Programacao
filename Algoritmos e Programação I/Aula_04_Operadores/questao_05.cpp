/*

Determinar se uma pessoa tem o benefício de desconto em uma farmácia. 
Para isto, a pessoa deve ser idosa ou tiver uma doença degenerativa.

*/

#include <iostream>

using namespace std;

int main(){
  
  int idade = 0;
  char doenca = '0';
  
  cout << "Qual a sua idade" << endl;
  cin >> idade;
  
  cout << "Possui doença degenerativa? (s ou n)" << endl;
  cin >> doenca;
  
  if (idade >= 65 || doenca == 's' ){
      cout << "Você tem direito ao deconto" << endl;
  } else { cout << "Você nâo tem direito ao desconto" << endl;
  }
  
  
}