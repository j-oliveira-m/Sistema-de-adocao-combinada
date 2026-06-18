#ifndef MATCHSTRATEGY_H
#define MATCHSTRATEGY_H

#include "Adotante.h"
#include "Pet.h"

    class MatchStrategy {
        public:
        // Retorna um valor de compatibilidade (0 a 100)
            static int calcularCompatibilidade(const Adotante& adotante, const Pet& pet);
};

#endif
