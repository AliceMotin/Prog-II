#ifndef KENNEL_HPP_INCLUDED
#define KENNEL_HPP_INCLUDED
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"


// Classe PetShop para gerenciar os animais de estima��o no pet shop
class Kennel {
private:
    Pet** pets; // Array de ponteiros para animais de estima��o
    int capacity; // Capacidade m�xima do pet shop
    int count; // Contador de animais de estima��o atualmente no pet shop

public:

    Kennel();
    // Construtor do PetShop
    Kennel(int capacity);

    // Destrutor do PetShop
    ~Kennel();

    // Adiciona um animal de estima��o ao pet shop
    void addPet(Pet* pet);

    // Imprime os detalhes de todos os animais de estima��o no pet shop
    void printPetDetails() const;
    int operator-(const Kennel& kennel) const;
    int operator++() const;
    int operator+(const string& name) const;
    int operator&&(const string& breed) const;
    int operator==(const string& color) const;

};


#endif // KENNEL_HPP_INCLUDED
