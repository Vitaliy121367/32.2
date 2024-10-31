#include "Product.h"

Products::Product::Product()
{
    name = "undefined";
    price = 0;
    manufacturer = "undefined";
    age = 0;
}

Products::Product::Product(string name, float price, string manufacturer, int age)
{
    this->name = name;
    this->price = price;
    this->manufacturer = manufacturer;
    this->age = age;
}

Products::Product::~Product()
{
}

void Products::Product::setName(string name)
{
    this->name = name;
}

void Products::Product::setPrice(float price)
{
    this->price = price;
}

void Products::Product::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Products::Product::setAge(int age)
{
    this->age = age;
}

string Products::Product::getName() const
{
    return name;
}

float Products::Product::getPrice() const
{
    return price;
}

string Products::Product::getManufacturer() const
{
    return manufacturer;
}

int Products::Product::getAge() const
{
    return age;
}
