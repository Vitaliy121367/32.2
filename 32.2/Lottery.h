#pragma once
#include <iostream>
using std::cout;
using std::endl;
#include "Product.h"
#include "Book.h"
#include "Toy.h"
#include "Game.h"
#include "SportEquipment.h"
#include <vector>
class Lottery
{
	std::vector<Products::Product*>lottery;
public:
	~Lottery();

	void addProdact(Products::Product* obj);

	void rndProdact();

	void showAll()const;
};