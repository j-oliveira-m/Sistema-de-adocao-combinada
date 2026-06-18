#include "SistemaAdocaoFacade.h"
#include "PetFactory.h"
#include "AdotanteFactory.h"
#include <iostream>
using namespace std;

SistemaAdocaoFacade::SistemaAdocaoFacade() {}

void SistemaAdocaoFacade::cadastrarPet() {
    Pet novoPet = PetFactory::criarPet(repoPets.proximoId());
    repoPets.adicionar(novoPet);
    cout << "Pet cadastrado com sucesso!\n";
}

void SistemaAdocaoFacade::listarPets() {
    repoPets.listarPets();
}

Pet SistemaAdocaoFacade::buscarPetPorId(int id) {
    return repoPets.buscarPorId(id);
}

void SistemaAdocaoFacade::cadastrarAdotante() {
    Adotante novoAdotante = AdotanteFactory::criarAdotante(repoAdotantes.proximoId());
    repoAdotantes.adicionar(novoAdotante);
    cout << "Adotante cadastrado com sucesso!\n";
}

void SistemaAdocaoFacade::listarAdotantes() {
    repoAdotantes.listarAdotantes();
}

Adotante SistemaAdocaoFacade::buscarAdotantePorId(int id) {
    return repoAdotantes.buscarPorId(id);
}
