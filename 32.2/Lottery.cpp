#include "Lottery.h"

Lottery::~Lottery()
{
	for (auto item : lottery)
	{
		delete item;
	}
}

void Lottery::addProdact(Products::Product* obj)
{
	lottery.push_back(obj);
}

void Lottery::rndProdact()
{
	if (lottery.size()>1)
	{
		int user = rand() % lottery.size();
		lottery[user]->show();
		cout << "Price: " << lottery[user]->calcPrice() << endl;
		delete lottery[user];
		lottery.erase(lottery.begin() + user);
	}
	else
	{
		cout << "Lottery emty" << endl;
	}
}

void Lottery::showAll() const
{
	for (auto item : lottery)
	{
		item->show();
	}
}
