#include <iostream> //Incluindo biblioteca externa
using namespace std; //Incluindo Biblioteca padrão

int main() { //Abrindo o bloco de comando
    int *ptr = new int; //definindo e criando um novo ponteiro
    *ptr = 7; //indicando um valor para o poteiro
    
    cout << *ptr <<endl; //Mostrando o valor para o usuario com *
    cout << ptr <<endl; //Mostrando a alocação para o usuario
    
    
    delete ptr;//Deletando o valor do ponteiro
    ptr = nullptr; // deletando a alocação
    
    cout << *ptr <<endl;//tentando pedir o valor
    cout << ptr <<endl; //tentando pedir a alocação
    
    return 0;
}