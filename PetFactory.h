#ifndef PETFACTORY
#define PETFACTORY
#include "Pet.h"

    class PetFactory {
        public:
            static Pet criarPet(int id);
    };

#endif