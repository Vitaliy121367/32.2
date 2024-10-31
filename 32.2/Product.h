#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

namespace Products
{
	class Product
	{
	protected:
		string name;
		float price;
		string manufacturer;
		int age;
	public:
		Product();
		Product(string name, float price, string manufacturer, int age);
		virtual ~Product();

		void setName(string name);
		void setPrice(float price);
		void setManufacturer(string manufacturer);
		void setAge(int age);

		string getName()const;
		float getPrice()const;
		string getManufacturer()const;
		int getAge()const;

		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
	};
}

