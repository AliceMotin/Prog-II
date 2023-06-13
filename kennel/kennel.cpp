#include "kennel.hpp"

Kennel::Kennel(int capacity): capacity(capacity), count(0) {
    pets = new Pet*[capacity]; // Alocação dinâmica de memória para o array de animais de estimação
    }

Kennel::~Kennel(){
    if (pets != nullptr) {
        for (int i = 0; i < count; i++) {
            if (pets[i] != nullptr) {
                delete pets[i]; // Deleta cada animal de estimação
                pets[i] = nullptr; // Define o ponteiro como nullptr para evitar problemas de duplicação de exclusão
            }
        }
        delete[] pets; // Deleta o array de ponteiros
        pets = nullptr; // Define o ponteiro como nullptr para evitar problemas de duplicação de exclusão
    }

}

void Kennel::addPet(Pet* pet){
    if (count < capacity) {
        pets[count] = pet;
        count++;
    }
}

void Kennel::printPetDetails()const{
    cout << "Kennel Inventory:" << endl;
    for (int i = 0; i < count; i++) {
        pets[i]->printDetails();
    }
}

int Kennel::operator-(const Kennel& kennel) const {
    return capacity - kennel.count; // Retorna a diferença entre a capacidade total e a quantidade de animais no pet shop passado como parâmetro
}

int Kennel::operator++() const {
    int countElderly = 0;

    for (int i = 0; i < count; i++) {
        if (pets[i]->getAge() > 7) {
            countElderly++;
        }
    }

    return countElderly;
}

int Kennel::operator+(const string& name) const {
    int countName = 0;

    for(int i=0; i < count; i++){
        if (pets[i]->getName() == name) {
            countName++;
        }
    }

    return countName;
}

int Kennel::operator&&(const string& breed) const{
    int countSameBreed = 0;

    for (int i = 0; i < count; i++) {
        Dog* dog = dynamic_cast<Dog*>(pets[i]);
            if (dog != nullptr && dog->isLabrador()) {
                countSameBreed++;
            }
    }

    return countSameBreed;
}

int Kennel::operator==(const string& color) const{
    int countGray = 0;

    for (int i = 0; i < count; i++) {
        Cat* cat = dynamic_cast<Cat*>(pets[i]);
            if (cat != nullptr && cat->isGray()) {
                countGray++;
            }
    }

    return countGray;
}
