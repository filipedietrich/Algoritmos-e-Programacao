/*

Elaborar um algoritmo que, dada a idade de um nadador, classificá-lo nas categorias: infantil
A (0 - 5 anos), infantil B (6 -10 anos), juvenil A (11 - 13 anos), juvenil B (14 -17 anos) e adulto
(maiores que 18 anos).

*/

#include <iostream>

using namespace std;

int main()
{
    int idade = 0;
    
    string categoria;
    
    cout << "digite a sua idade: " << endl;
    cin >> idade;
    
    if(idade <= 5){
        categoria = "Infantil A";
    } else if(idade >= 6 && idade <= 10){
        categoria = "Infantil B";
    } else if(idade >= 11 && idade <= 13){
        categoria = "Juvenil A";
    } else if (idade >= 14 && idade <=17){
        categoria = "Juvenil B";
    } else {
        categoria = "Adulto";
    }
    
    cout << " A categoria do nadador é " << categoria << endl;

}