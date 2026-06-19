#include "RepositorioAdotantes.h"
#include <iostream>
using namespace std;

    // Adiciona um novo adotante ao repositório 
    void RepositorioAdotantes::adicionar(const Adotante& adotante) {
        adotantes.push_back(adotante);
}
    // Busca um adotante pelo ID
    Adotante RepositorioAdotantes::buscarPorId(int id) {
        for (auto& a : adotantes) {
            if (a.getId() == id) return a; // retorna se encontrar
    }
            cout << "Adotante nao encontrado!\n";
        return Adotante(); // usa o construtor vazio
}
        // Lista todos os adotantes cadastrados
    void RepositorioAdotantes::listarAdotantes() {
        for (auto& a : adotantes) {
            a.exibirAdotante();   // chama método para mostrar os dados
    }
}



