#include "SistemaAdocaoFacade.h"
#include <iostream>
using namespace std;

int main() {

    SistemaAdocaoFacade sistema;    // objeto que concentra todas as operações do sistema
    int opcao;

    do {    // Menu principal
        cout << "\n--- Sistema de Adoção ---\n";
        cout << "1. Cadastrar Adotante\n";
        cout << "2. Cadastrar Pet\n";
        cout << "3. Listar Adotantes\n";
        cout << "4. Listar Pets\n";
        cout << "5. Realizar Match\n";
        cout << "6. Relatório de Pets Disponíveis\n";
        cout << "7. Adotar Pet (remover do relatório)\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        switch(opcao) {    // Estrutura de decisão para cada opção
            case 1:
                sistema.cadastrarAdotante(); // chama cadastro de adotante
                break;
            case 2:
                sistema.cadastrarPet();  // chama cadastro de Pet
                break;
            case 3:
                sistema.listarAdotantes();  // mostra todos os adotantes
                break;
            case 4:
                sistema.listarPets();  // mostra todos os pets cadastrados
                break;
            case 5: {
                int idAdotante;
                    cout << "Digite o ID do adotante: ";
                    cin >> idAdotante;
                sistema.realizarMatchAutomatico(idAdotante);  // tenta encontrar pet compatível
                break;
}

            case 6:
                sistema.relatorioPetsDisponiveis(); // relatório de pets ainda não adotados
                break;
            case 7: {
                int idPet;
                cout << "Digite o ID do pet a ser adotado: ";
                cin >> idPet;
                sistema.removerPet(idPet); // remove pet do relatório caso seja adotado
                break;
            }
        
        }
    } while(opcao != 0); // repete até o usuário escolher sair

    return 0;
}

