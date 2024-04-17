#include <iostream>
#include "alunos.hpp"
using namespace std;

int main(){
    int tamanho, matricula, opcao;
    cout << "Digite a quantidade de alunos: ";
    cin >> tamanho;
    
    TipoAluno alunos[tamanho];
    adicionarAluno(alunos, tamanho);
    
    
    do{
        opcao = imprimeMenu(opcao);
        switch (opcao){
            case 1:{
                cout << "[1] - Buscar Aluno\n";
                cout << "Digite a matricula do aluno buscado: ";
                cin >> matricula;
                imprimeAlunos(alunos, tamanho, matricula);
                break;
            }
            case 2:{
                cout << "[2] - Listar Alunos\n";
                imprimeAlunos(alunos, tamanho);
                break;
            }
            case 3:{
                cout << "[3] - Calcular média da Turma\n";
                double mediaTurma = calculoMedia(alunos, tamanho);
                cout << "A méida da turma foi: " << mediaTurma << endl << endl;
                break;
            }
            case 4:{
                cout << "[4] - Calcular média do aluno\n";
                cout << "Digite a matricula do aluno buscado: ";
                cin >> matricula;
                calculoMedia(alunos, tamanho, matricula);
                break;
            }
            case 5:{
                cout << "[5] - Mostrar aprovados\n";
                aprovados(alunos, tamanho);
                break;
            }
            case 6:{
                cout << "[6] - Atualizar nota\n";
                cout << "Digite a matricula do aluno buscado: ";
                cin >> matricula;
                atualizarNota(alunos, tamanho, matricula);
                break;
            }
            case 7:{
                cout << "[7] - Encerrar\n";
                cout << "Programa encerrado com sucesso!\n";
                break;
            }
        }
        
    }while(opcao != 7);

    return 0;
}