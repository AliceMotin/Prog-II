#include "kennel.hpp"

Kennel::Kennel(int capacity): capacity(capacity), count(0) {
    pets = new Pet*[capacity]; // Aloca��o din�mica de mem�ria para o array de animais de estima��o
    }

Kennel::~Kennel(){
    for (int i = 0; i < count; i++) {
        if (pets[i]->isCat()) {
            Cat* cat = static_cast<Cat*>(pets[i]);
            delete cat;
        } else {
            Dog* dog = static_cast<Dog*>(pets[i]);
            delete dog;
        }
    }
    delete[] pets;
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
    return capacity - kennel.count; // Retorna a diferen�a entre a capacidade total e a quantidade de animais no pet shop passado como par�metro
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
