#include "kennel.hpp"

Kennel::Kennel() : pets(nullptr), capacity(0), count(0){}

Kennel::Kennel(int capacity): pets(nullptr), capacity(capacity), count(0) {
    pets = new Pet*[capacity]; // Alocação dinâmica de memória para o array de animais de estimação

}

Kennel::~Kennel() {
    for (int i = 0; i < count; i++) {
        if(pets[i] != nullptr){
            delete pets[i]; // Desaloca o objeto Cat ou Dog na posição i
            pets[i] = nullptr;
        }
    }
    delete[] pets; // Desaloca o vetor de ponteiros
}

void Kennel::addPet(Pet* pet){
    if (count < capacity) {
        pets[count] = pet;
        count++;
    }
}

void Kennel::printPetDetails(){
    cout << "Kennel Inventory:" << endl;

    for (int i = 0; i < count; i++) {
        if (pets[i] != nullptr){
            pets[i]->printDetails();
        }
    }
}

int Kennel::operator-(const Kennel& other){
    return capacity - other.count;
}

int Kennel::operator++() {
    int countElderly = 0;

    for (int i = 0; i < count; i++) {
        if (pets[i]->getAge() > 7) {
            countElderly++;
        }
    }

    return countElderly;
}

int Kennel::operator+(const string& name){
    int countName = 0;

    for(int i=0; i < count; i++){
        if (pets[i]->getName() == name) {
            countName++;
        }
    }

    return countName;
}

int Kennel::operator&&(const string& breed){
    int countSameBreed = 0;

    for (int i = 0; i < count; i++) {
        if (pets[i]->isDog()) {
            Dog* dog = dynamic_cast<Dog*>(pets[i]);
            if (dog != nullptr && dog->isLabrador()) {
                countSameBreed++;
            }
        }
    }

    return countSameBreed;
}

int Kennel::operator==(const string& color){
    int countGray = 0;

    for (int i = 0; i < count; i++) {
        if (pets[i]->isCat()) {
            Cat* cat = dynamic_cast<Cat*>(pets[i]);
            if (cat != nullptr && cat->isGray()) {
                countGray++;
            }
        }
    }

    return countGray;
}
