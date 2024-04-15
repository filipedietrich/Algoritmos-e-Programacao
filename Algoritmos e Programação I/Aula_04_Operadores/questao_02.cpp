/*

Determinar se um número é par.

*/

#include <iostream>

using namespace std;

int main(){
  
  int numero = 0;
  
  int verificador = numero % 2;
  
  cout<< "Digite um numero:" << endl;
  cin >> numero;
  
  verificador = numero % 2;
  
  if (verificador == 0){
      cout << numero << " é par" << endl;
  }else{
      cout << numero << " é impar" << endl;
  }
  
  
}