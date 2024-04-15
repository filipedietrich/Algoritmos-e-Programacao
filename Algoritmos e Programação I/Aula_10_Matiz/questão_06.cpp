/*

06. Uma lanchonete prepara três tipos de salgados utilizando diferentes tipos
de ingredientes, conforme as listas abaixo abaixo. Qual o preço de custo de
cada salgado?

Ingredientes dos salgados:
Pastel - 3 ovos, 6 farinha, 1 açúcar, 3 carne
Empada - 4 ovos, 4 farinha, 2 açúcar, 2 carne
Quibe  - 1 ovos, 1 farinha, 1 açúcar, 6 carne


Valor dos ingredientes:
Ovos    - 0.20
Farinha - 0.30
Açúcar  - 0.50
Carne   - 0.80

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Calculando o prço dos produtos " << endl;
    int produtos[3][4]{
        {3,6,1,3},
        {4,4,2,2},
        {1,1,1,6}
    };
    
    float valores[4][1]{
        {0.20},
        {0.30},
        {0.50},
        {0.80}
    };
    
    for(int i = 0; i < 3; i++){
        float preco = 0;
        for(int j = 0; j < 4; j ++){
            preco += produtos[i][j] * valores [j][0];
        }
        cout << "O preço do produto " << i << " é " << preco << endl; 
    }

    return 0;
}