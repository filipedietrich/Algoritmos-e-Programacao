/*

Considerando um array de inteiros positivos, crie funções com sobrecarga para:
• Inserir um elemento no array. O elemento deve ser inserido na última posição livre do array.
Inicialmente, o array esta “vazio”. Para simular isso, insira -1 em todas as posições. Logo, uma
posição com -1 indica que ela está livre. Se o array estiver cheio, o valor não pode ser
inserido.
• Inserir um elemento no array em uma posição específica. Esta função é similar a anterior, se
a posição indicada estiver desocupada, então o elemento é inserido.
• Remover um elemento do array. Esta função recebe o elemento a ser removido. Remove a
primeira ocorrência do elemento. Se houverem outras, elas permanecem no array. Remover
significa torar a posição ocupada “vazia” (-1).
• Remover x ocorrências de um elemento no array. Esta função recebe o elemento a ser
removido e o número de ocorrências que devem ser removidas.

*/
#include <iostream>
using namespace std;

void criaArray(int a[], int tam){
    for(int i = 0; i < tam; i++){
        a[i] = -1;
    }
    cout << "Array criado com sucesso!\n\n";
}

void imprimeArray(int a[], int tam){
    for(int i = 0; i < tam; i++){
        if(a[i] == -1){
            cout<< "   ";
        }else{
            cout << a[i];
        }
    }
    cout << endl << endl;
}

void preencherArray(int a[], int num){
    for(int i = 0; i < 3; i++){
        if (a[i] == -1){
            a[i] = num;
            cout << num << " inserido no array!";
            break;
        } else{
            cout << "Não foi possível inserir" << num;
        }
    }
    cout << endl;
}

void preencherArray(int a[], int num, int pos){
    if(a[pos] == -1){
        a[pos] = num;
        cout << endl << num << " inserido na posição " << pos << " do array!";
    } else{
        cout << "Não foi possível inserir" << num;
    }
}

void removeArray(int a[], int num, int tam){
    for(int i = 0; i < tam; i++){
        if (a[i] == num){
            a[i] = -1;
            cout << num << " removido no array!";
            break;
        } else{
            cout << "Não foi possível remover" << num;
        }
    }
    cout << endl;
}

void removeArray(int a[], int num, int tam, int qtd){
    int s = 0;
    for(int i = 0; i < tam && s < qtd; i++){
        if (a[i] == num){
            a[i] = -1;
            cout << num << " removido no array!";
            s ++;
        } else{
            cout << "Não foi possível remover" << num;
        }
    }
    cout << endl;
}

int main(){
    int tam = 3;
    int a[tam];
    criaArray(a, tam);
    
    int num = 0;
    cout << "Digite o número que deseja inserir no array: \n";
    cin >> num;
    preencherArray(a, num, tam);
    cout << endl << endl;
    imprimeArray(a, tam);
    
    
    int pos = 0;
    cout << "Digite o número que deseja inserir no array: \n";
    cin >> num;
    cout << "Digite em que posição deseja inserir no array: \n";
    cin >> pos;
    preencherArray(a, num, pos);
    cout << endl << endl;
    imprimeArray(a, tam);
    
    cout << "Digite o número que deseja remover do array: \n";
    cin >> num;
    removeArray(a, num, tam);
    cout << endl << endl;
    imprimeArray(a, tam);
    
    int qtd = 0;
    cout << "Digite o número que deseja remover do array: \n";
    cin >> num;
    cout << "Quantas vezes ele deve ser removido? \n";
    cin >> qtd;
    removeArray(a, num, tam, qtd);
    cout << endl << endl;
    imprimeArray(a, tam);
    
    
    return 0;
}