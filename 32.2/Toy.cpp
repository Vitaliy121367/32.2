#include "Toy.h"

Products::Fun::Toy::Toy()
{
    material = "undefined";
}

Products::Fun::Toy::Toy(string name, float price, string manufacturer, string material, int age) :Product(name, price, manufacturer, age)
{
    this->material = material;
}

void Products::Fun::Toy::setMaterial(string material)
{
    this->material = material;
}

string Products::Fun::Toy::getMaterial() const
{
    return material;
}

void Products::Fun::Toy::show() const
{
    cout << "\t Toy\n";
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Material: " << material << endl;
    cout << "Age: " << age << endl;
}

float Products::Fun::Toy::calcPrice() const
{
    float total = price;
    if (material == "Wood" || material == "Ecological plastic")
    {
        total += total * 0.2;
    }
    if (age <= 3)
    {
        total += total * 0.1;
    }
    return total;
}
