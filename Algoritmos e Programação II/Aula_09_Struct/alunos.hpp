#ifndef ALUNOS_HPP
#define ALUNOS_HPP
using namespace std;

struct TipoAluno{
    string nome;
    int matricula;
    double M1;
    double M2;
    double M3;;
    double media;
};

void adicionarAluno(TipoAluno alunos[], int &tamanho);
void imprimeAlunos(TipoAluno alunos[], int &tamanho);
void imprimeAlunos(TipoAluno alunos[], int &tamanho, int &matricula);
double calculoMedia(TipoAluno alunos[], int &tamanho);
void calculoMedia(TipoAluno alunos[], int &tamanho, int matricula);
void aprovados(TipoAluno alunos[], int &tamanho);
void atualizarNota(TipoAluno alunos[], int &tamanho, int matricula);
int imprimeMenu(int &opcao);

#endif