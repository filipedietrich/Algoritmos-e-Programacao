/*

Determinar se um aluno está aprovado na disciplina de Algoritmos I
A média deve ser 7.

*/

#include <iostream>

using namespace std;

int main(){
  
  int m1 = 0;
  int m2 = 0;
  int m3 = 0;
  
  int media = (m1 + m2 + m3) / 3;
  
 cout << "Qual a nota da M1?: ";
 cin >> m1;
 
 cout << "Qual a nota da M2?: ";
 cin >> m2;
 
 cout << "Qual a nota da M3?: ";
 cin >> m3;
 
 media = (m1 + m2 + m3) / 3;
 
 if (media >= 7){
     cout << "Aprovado" << endl;
 } else {
     cout << "Reprovado" << endl;
 }
 
}