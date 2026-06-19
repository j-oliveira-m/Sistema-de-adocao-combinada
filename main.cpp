#include "SistemaAdocaoFacade.h"
#include <iostream>
using namespace std;

int main() {

    SistemaAdocaoFacade sistema;
    int opcao;

    do {
        cout << "\n--- Sistema de Adoção ---\n";
        cout << "1. Cadastrar Adotante\n";
        cout << "2. Cadastrar Pet\n";
        cout << "3. Listar Adotantes\n";
        cout << "4. Listar Pets\n";
        cout << "5. Realizar Match\n";
        cout << "6. Relatório de Pets Disponíveis\n";
        cout << "7. Adotar Pet (remover do relatório)\n";
        cout << "8. editar cadastro do adotante \n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch(opcao) {
            case 1:
                sistema.cadastrarAdotante();
                break;
            case 2:
                sistema.cadastrarPet();
                break;
            case 3:
                sistema.listarAdotantes();
                break;
            case 4:
                sistema.listarPets();
                break;
            case 5: {
                int idAdotante;
                    cout << "Digite o ID do adotante: ";
                    cin >> idAdotante;
                sistema.realizarMatchAutomatico(idAdotante);
                break;
}

            case 6:
                sistema.relatorioPetsDisponiveis();
                break;
            case 7: {
                int idPet;
                cout << "Digite o ID do pet a ser adotado: ";
                cin >> idPet;
                sistema.removerPet(idPet);
                break;
            }
        
        }
    } while(opcao != 0);

    return 0;
}

