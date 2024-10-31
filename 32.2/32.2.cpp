#include <iostream>
using std::cout;
using std::endl;
#include "Product.h"
#include "Book.h"
#include "Toy.h"
#include "Game.h"
#include "SportEquipment.h"
#include "Lottery.h"

int main()
{
    Products::Fun::Book book("451 degrees Fahrenheit","Ray Bradbury",170,"Educational book Bohdan","Dystopia",158,12);

    Products::Fun::Toy toy("Wooden puzzle Lion Mosaic", 279, "Wood Ukraine", "Wood", 3);

    Lottery ItStep;
    ItStep.addProdact(new Products::Fun::Book("451 degrees Fahrenheit", "Ray Bradbury", 170, "Educational book Bohdan", "Dystopia", 158, 12));
    ItStep.addProdact(new Products::Fun::Toy("Wooden puzzle Lion Mosaic", 279, "Wood Ukraine", "Wood", 3));
    ItStep.addProdact(new Products::Fun::Game("Monopoly",560,"Pusle",12,4));
    ItStep.addProdact(new Products::Sport::Clothing("Jacket", 650, "Ukraine", 30,"Overcoat", 52));
    ItStep.rndProdact();
    cout << "-----------------------------------------------\n\n";
    ItStep.showAll();

    return 0;
}
