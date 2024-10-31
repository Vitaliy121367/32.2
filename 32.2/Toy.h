#pragma once
#include "Product.h"

namespace Products
{
	namespace Fun
	{
		class Toy : public Product
		{
		protected:
			string material;
		public:
			Toy();
			Toy(string name, float price, string manufacturer, string material, int age);

			void setMaterial(string material);
			string getMaterial()const;

			virtual void show()const override;
			virtual float calcPrice()const override;
		};
	}
}
