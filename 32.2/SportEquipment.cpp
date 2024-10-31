#include "SportEquipment.h"

Products::Sport::SportEquipment::SportEquipment()
{
    sport = "undefined";
    weight = 0;
}

Products::Sport::SportEquipment::SportEquipment(string name, float price, string manufacturer,
    int age, string sport, float weight) : Product(name, price, manufacturer, age)
{
    this->sport = sport;
    this->weight = weight;
}

void Products::Sport::SportEquipment::setSport(string sport)
{
    this->sport = sport;
}

void Products::Sport::SportEquipment::setWeight(float weight)
{
    this->weight = weight;
}

string Products::Sport::SportEquipment::getSport() const
{
    return sport;
}

float Products::Sport::SportEquipment::getWeight() const
{
    return weight;
}

void Products::Sport::SportEquipment::show() const
{
    cout << "---------------------------------------------------------\n";
    cout << "\tSPORT EQUIPMENT\n";
    cout << "---------------------------------------------------------\n";
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Age: " << age << endl;
    cout << "Sport: " << sport << endl;
    cout << "Weight: " << weight << endl;
}

float Products::Sport::SportEquipment::calcPrice() const
{
    float total = price;
    if (weight >= 100)
    {
        total += total * ((weight / 100 * 5)) / 100.0;
    }

    if (age < 18)
    {
        total += total * 0.1;
    }
    return total;
}