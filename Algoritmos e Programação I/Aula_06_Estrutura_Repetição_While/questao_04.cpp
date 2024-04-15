/*

Determinar o total de multas de trânsito arrecadadas pelo Detran. leia o
número de multas e o valor de cada multa e, ao final, imprima o valor total das
multas.

*/

#include <iostream>

using namespace std;

int main(){
    int multas = 0;
    float valor = 0;
    
    cout << "Qual a quantidade de multas? ";
    cin >> multas;
    
    float total = 0;
    
    int i = 1;
    
    while (i <= multas){
       cout << "Qual o valor da multa " << i << ": ";
       cin >> valor;
       
       total = total + valor;
       
       i++;
    }
    
    cout << "O valor total das multas foi: " << total;
    return 0;
}