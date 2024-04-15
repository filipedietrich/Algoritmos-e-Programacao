/* 

imagine o sistema de votação atual no Brasil. Ele é realizado de acordo com a idade das
pessoas. As regras de votação são: a) Menores de 16 anos não podem votar; b) De 16 anos
até 17 anos, o voto é facultativo; c) De 18 anos até 69 anos, o voto é obrigatório; d) Maiores
que 70 anos, o voto é facultativo.

*/

#include <iostream>

using namespace std;

int main()
{
    int idade = 0;
    
    cout << "Qual a sua idade? " << endl;
    cin >> idade;
    
    if(idade < 16){
        cout << "Você não pode votar" << endl;
    } else{
        if(idade >= 16 && idade <= 17){
            cout << "seu voto é facultativo" << endl;
        } else{
            if(idade >= 18 && idade <= 69){
                cout << "Seu voto é obrigatório" << endl;
            } else {
                cout << "para maiores de 70 anos o voto é facultativo" << endl;
            }
        }
    }

    return 0;
}