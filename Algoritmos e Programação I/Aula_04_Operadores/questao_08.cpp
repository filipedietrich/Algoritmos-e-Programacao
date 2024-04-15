/*

Para acessar um recurso do sistema, o usuário deve ser administrador ou ter login com
autorização para isso. Determine se o usuário pode acessar o recurso.

*/

#include <iostream>

using namespace std;

int main(){
    
    string adm = "admin";
    int senha = 1234;
    
    cout << "Usuario: ";
    cin >> adm;
    
    cout << "Senha: ";
    cin >> senha;
    
    if (adm == "admin" || senha == 1234){
        cout << "Você está logado";
    } else {
        cout << "tente novamente";
    }
    
 
}