#pragma once
#include "Product.h"


namespace Products
{
	namespace Sport
	{
		class Clothing : public Product
		{
			string type;
			unsigned short size;

		public:
			Clothing() : Product()
			{
				type = "undefined";
				size = 0;
			}
			Clothing(std::string name, float price, std::string manufacturer, int age, string type, unsigned short size)
				: Product(name, price, manufacturer, age)
			{
				this->type = type;
				this->size = size;
			}
			void setType(string type) { this->type = type; }
			void setSize(unsigned short size) { this->size = size; }

			string getType()const { return type; }
			unsigned short getSize()const { return size; }


			virtual void show()const override
			{
				cout << "\tClothing\n";
				cout << "Name: " << name << endl;
				cout << "Manufacturer: " << manufacturer << endl;
				cout << "Price: " << price << endl;
				cout << "Age: " << age << endl;
				cout << "Type: " << type << endl;
				cout << "Size: " << size << endl;
			}
			virtual float calcPrice()const override
			{
				double total = price;
				if (size > 40)
				{
					total += (size - 40) * 0.05 * total;
				}
				if (age < 10)
				{
					total += total * 0.1;
				}

				return total;
			}

		};
	}
}