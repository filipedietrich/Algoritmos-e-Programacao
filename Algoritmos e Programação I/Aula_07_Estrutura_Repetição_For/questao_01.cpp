/*

Pergunte a idade de n pessoas e mostre a quantidade de pessoas adultas.

*/

#include <iostream>

using namespace std;

int main(){
    int num, idade, total;
    
    
    cout << "Qual a quantidade de pessoas? ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        cout << "Qual a idade da pessoa " << i << "? ";
        cin >> idade;
        if (idade >= 18){
            total ++;
        }
    }
    
    cout << "O total de adultos é: " << total;
    return 0;
}
    