#include <iostream>
#include "alunos.hpp"
using namespace std;

void adicionarAluno(TipoAluno alunos[], int &tamanho){
    string nome;
    int matricula;
    double M1, M2, M3, media;
    for(int i = 0; i < tamanho; i++){
        cout << "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite a M1: ";
        cin >> M1;
        cout << "Digite a M2: ";
        cin >> M2;
        cout << "Digite a M3: ";
        cin >> M3;
        cout << endl;
        
        media = (M1 + M2 + M3) / 3;
        
        TipoAluno aluno;
        aluno.nome = nome;
        aluno.matricula = i + 1;
        aluno.M1 = M1;
        aluno.M2 = M2;
        aluno.M3 = M3;
        aluno.media = media;
        
        alunos[i] = aluno;
    }
}

void imprimeAlunos(TipoAluno alunos[], int &tamanho, int &matricula){
    bool teste = false;
    for(int i = 0; i < tamanho; i++){
        if(alunos[i].matricula == matricula){
            cout << "Nome: " << alunos[i].nome << endl;
            cout << "Matricula: " << alunos[i].matricula << endl;
            cout << "M1: " << alunos[i].M1 << endl;
            cout << "M2: " << alunos[i].M2 << endl;
            cout << "M3: " << alunos[i].M3 << endl;
            teste = true;
            break;
        }
    }
    if(!teste){
        cout << "Matricula não encontrada. Tente novamente.\n";
    }
}


void imprimeAlunos(TipoAluno alunos[], int &tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "M1: " << alunos[i].M1 << endl;
        cout << "M2: " << alunos[i].M2 << endl;
        cout << "M3: " << alunos[i].M3 << endl;
        cout << endl << endl;
        
    }
}

double calculoMedia(TipoAluno alunos[], int &tamanho){
    double media;
    int qtdNotas;
    
    for(int i = 0; i < tamanho; i++){
        media += (alunos[i].M1 +  alunos[i].M2 + alunos[i].M3);
        qtdNotas += 3;
    }
    
    media = media / qtdNotas;
    
    return media;
}


void calculoMedia(TipoAluno alunos[], int &tamanho, int matricula){
    bool teste = false;
    for(int i = 0; i < tamanho; i++){
        if(alunos[i].matricula == matricula){
            cout << "Matricula: " << alunos[i].matricula << endl;
            cout << "Nome: " << alunos[i].nome << endl;
            cout << "Média: " << alunos[i].media << endl;
            teste = true;
            break;
        }
    }
    if(!teste){
        cout << "Matricula não encontrada. Tente novamente.\n";
    }
}


void aprovados(TipoAluno alunos[], int &tamanho){
    cout << "Lista de aprovados: ";
    for(int i = 0; i < tamanho; i++){
        if(alunos[i].media >= 6){
            cout << alunos[i].nome << " ";
        }
    }
    cout << endl;
}


void atualizarNota(TipoAluno alunos[], int &tamanho, int matricula){
    int opc, mat = matricula - 1, novaNota;
    
    do{
        cout << "Qual média você deseja alterar?\n";
        cout << "[1] - M1\n";
        cout << "[2] - M2\n";
        cout << "[3] - M3\n";
        cout << "Opção: ";
        cin >> opc;
        if(opc < 1 || opc > 3){
            cout << "Valor inválido. Tente novamente.\n\n";
        }
    }while(opc < 1 || opc > 3);
    
    cout << "Digite o valor da nova nota: ";
    cin >> novaNota;
    
    switch (opc){
        case 1:{
            alunos[mat].M1 = novaNota;
            break;
        }
        case 2:{
            alunos[mat].M2 = novaNota;
            break;
        }
        case 3:{
            alunos[mat].M3 = novaNota;
            break;
        }
        default:{
            cout << "Valor inválido. Tente novamente.\n\n";
        }
    } 
    
    alunos[mat].media = (alunos[mat].M1 + alunos[mat].M2 + alunos[mat].M3) / 3;
    
    cout << "Média alterada com sucesso!\n";
}


int imprimeMenu(int &opcao){
    cout << "[1] - Buscar Aluno\n";
    cout << "[2] - Listar Alunos\n";
    cout << "[3] - Calcular média da Turma\n";
    cout << "[4] - Calcular média do aluno\n";
    cout << "[5] - Mostrar aprovados\n";
    cout << "[6] - Atualizar nota\n";
    cout << "[7] - Encerrar\n";
    cout << "Opção desejada: ";
    cin >> opcao;
    
    return opcao;
}
