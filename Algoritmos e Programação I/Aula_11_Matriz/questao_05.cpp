/*

05. Considere uma matriz de 5 linhas e 3 colunas 
contendo as seguintes informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
• Primeira coluna: número de matrícula
• Segunda coluna: média de provas
• Terceira coluna: média de trabalhos

Elabore algoritmos para:
I -imprimir as matrículas.
II - calcular a média final de cada aluno (media trabalhos *0,3 + media provas * 0,7).
III - determinar o aluno com a maior média final.
IV - calcular a média das médias dos trabalhos.

*/

#include <iostream>

using namespace std;

int main(){

    int m[5][3];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                cout << "Digite o numero da matricula do " << i+1 << "º aluno: ";
                cin >> m[i][j];
            }else if(j == 1){
                cout << "Digite a média das provas do " << i+1 << "º aluno: ";
                cin >> m[i][j];
            }else if(j == 2){
                cout << "Digite a média dos trabalhos do " << i+1 << "º aluno: ";
                cin >> m[i][j];
            }
        }
    }

    cout << "\nA matriz digitada foi: \n";
    for(int i =0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nI - Imprimir as matrículas: \n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                cout << m[i][j] << " ";
            }
        }
    }

    cout << "\n\nII - Calcular a média final de cada aluno: \n";
    int maior, aluno;
    for(int i = 0; i < 5; i++){
        float mt = 0, mp = 0, mf = 0;
        for(int j = 0; j < 3; j++){
            if(j == 1){
                mt = m[i][j] * 0.7;
            }else if(j == 2){
                mp = m[i][j] * 0.3;
            }
        }
        mf = mt + mp;
        cout << "A média final do " << i+1 << "º aluno foi: " << mf << endl ;

        if(i == 0){
            maior = mf;
            aluno = i+1;
        }else if(mf > maior){
            maior = mf;
            aluno = i+1;
        }

        
    }

    cout << "\nIII - Determinar o aluno com a maior média final: \n";
    cout << "A maior média final foi do " << aluno << "º aluno\n";

    cout << "\nIV - Calcular a média das médias dos trabalhos: \n";
    float mmt = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                mmt += m[i][j];
            }
        }
    }
    cout << "A média das médias dos trabalhos é igual a: " << mmt/5;
    return 0;
}