/*

Dentre dois números, determinar o maior

*/

#include <iostream>

using namespace std;

int main(){
  
  int numero_1 = 0;
  int numero_2 = 0;
  
 cout << "Digite um numero: ";
 cin >> numero_1;
 
 cout << "Digite outro numero: ";
 cin >> numero_2;
  
  if (numero_1 > numero_2){
      cout << numero_1 << " é maior que " << numero_2 << endl;
  } else {
      cout << numero_2 << " é maior que " << numero_1<< endl;
  }
}