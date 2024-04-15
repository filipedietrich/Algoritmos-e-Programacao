/*

Calcular a média dos números digitados pelo usuário.

*/

#include <iostream>

using namespace std;

int main(){
    int quant = 0;
    float num;
    float total = 0;
    
    cout << " Qual a quantidades de numeros?\n";
    cin >> quant;
    
    int i = 1;
   
    while (i <= quant){
        cout << "Digite o numero " << i << endl;
        cin >> num;
        
        total = total + num;
        
        i++;
    }
    
    float media = total / quant;
    
    cout << "A Média é: " << media;
   

    return 0;
}