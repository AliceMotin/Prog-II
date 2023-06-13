#include "kennel.hpp"

Kennel::Kennel() : pets(nullptr), capacity(0), count(0) {}

Kennel::Kennel(int capacity): pets(nullptr), capacity(capacity), count(0) {
    pets = new Pet*[capacity]; // Alocação dinâmica de memória para o array de animais de estimação

}

void Kennel::addPet(Pet* pet){
    if (count < capacity) {
        pets[count] = pet;
        count++;
    }
}

Kennel::~Kennel(){
    for (int i = 0; i < count; i++) {
        if (pets[i] != nullptr) {
            if (pets[i]->isCat()) {
                Cat* cat = static_cast<Cat*>(pets[i]);
                delete cat;

            } else {
                Dog* dog = static_cast<Dog*>(pets[i]);
                delete dog;

            }
            pets[i] = nullptr;
        }
    }
    delete[] pets;
}

void Kennel::printPetDetails()const{
    cout << "Kennel Inventory:" << endl;

    for (int i = 0; i < count; i++) {
        if (pets[i] != nullptr){
            pets[i]->printDetails();
        }
    }
}

int Kennel::operator-(const Kennel& other) const {
    return capacity - other.count; // Retorna a diferença entre a capacidade total e a quantidade de animais no pet shop passado como parâmetro
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
        if (pets[i]->isDog()) {
            Dog* dog = static_cast<Dog*>(pets[i]);
            if (dog->isLabrador()) {
                countSameBreed++;
            }
        }
    }

    return countSameBreed;
}

int Kennel::operator==(const string& color) const{
    int countGray = 0;

    for (int i = 0; i < count; i++) {
        if (pets[i]->isCat()) {
            Cat* cat = static_cast<Cat*>(pets[i]);
            if (cat->isGray()) {
               countGray++;
            }
        }
    }

    return countGray;
}
