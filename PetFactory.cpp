#include "PetFactory.h"

    Pet PetFactory::criarPet(int id) {
        Pet novoPet(id, "", "", 0, "", false, false, false, false, false, false, "", false);
            novoPet.cadastrarPet();
            
    return novoPet;
}
