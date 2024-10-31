#include "Game.h"

Products::Fun::Game::Game()
{
    players = 0;
}

Products::Fun::Game::Game(std::string name, float price,
    std::string manufacturer,
    int age,
    int players) : Product(name, price, manufacturer, age)
{
    this->players = players;
}

void Products::Fun::Game::setPlayers(int players)
{
    this->players = players;
}

int Products::Fun::Game::getPlayers() const
{
    return players;
}

void Products::Fun::Game::show() const
{
    cout << "--Players\n";
    cout << "Name: " << name << endl;
    cout << "Players: " << players << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "Manafacturer: " << manufacturer << endl;
}

float Products::Fun::Game::calcPrice() const
{
    float total = price;
    if (players >= 2)
    {
        total += total * 0.05 * (players - 2);
    }
    return total;
}