#include <iostream> //Incluindo biblioteca externa
using namespace std; //Incluindo Biblioteca padrão

int main() { //Abrindo o bloco de comando
    int var = 3; //Definindo variavel e o valor
    int* pVar; //Definindo o ponteiro
    pVar = &var; //Recebendo o valor (com o & comercial) da variavel
    
    cout << var << endl; //Mostrando o valor para o usuario
    cout << *pVar << endl; //Mostrando o valor apontado para o usuario
    cout << pVar << endl; //Mostrando a alocação de memória para o usuario
    return 0;
}