/*

Crie um jogo da adivinhação com modularização. As funções a serem
implementadas são:
• gerarNumeroAleatorio() -> retorna um número aleatório
• lerPalpite() -> retorna o palpite do jogador
• jogar() -> é onde ocorre a lógica do jogo. Dado um número máximo de
tentativas, retorna um valor booleano que indica se o jogador acertou ou
não o número aleatório.
• main() -> inicia a jogo e verifica se o jogador acertou ou não.

Sugestão:

• gerarNumeroAleatorio() pode ser implementado retornando, em um
primeiro momento, um valor qualquer.

Assim que o seu jogo estiver funcionando corretamente, você reimplementa
o método corretamente.

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int gerarNumeroAleatorio(){

    int segundos = time(0);
    srand(segundos);
    int numInicial = rand();

    int num = numInicial % 100;
    cout << "Tente adivinhar o número que estou pensando!\n\n";
    return num;
}

int lerPalpite(){
    int palpite;
    cout << "Digite o seu palpite: ";
    cin >> palpite;
    return palpite;
}

int jogar(){

    int num = gerarNumeroAleatorio();
    bool venceu = 0;
    int qtdTentativa = 5;
    
    for (int i = 1; i <= qtdTentativa; i++){
        cout << "Tentativa " << i << " de " << qtdTentativa << endl;

        int palpite = lerPalpite();

        if (palpite == num){
            venceu = 1;
            return venceu;
            break;
        }else if(i == qtdTentativa){
            cout << endl;
            break;
        }else{
            cout << "Você errou, tente novamente.\n\n";
            if(palpite > num){
                cout << "O Número digitado é MAIOR que o número que estou pensando \n\n";
            }else{
                cout << "O Número digitado é MENOR que o número que estou pensando \n\n";
            }
        }
    }

    return venceu;

}

int main(){

    int opcao;
    int num_secreto = gerarNumeroAleatorio();

    do{

        int jogo = jogar();

        if (jogo == true){
            cout << "Parabéns, você acertou!\n";
        }else{
            cout << "Você perdeu. Fim de jogo.\n\n";
            cout << "O número era: " << num_secreto << endl << endl; 
        }

        cout << "Deseja jogar novamente?\n";
        cout << "Digite 0 para não.\n";
        cout << "Digite 1 para sim.\n";
        cin >> opcao;
        
    }while(opcao == true);


    return 0;
}