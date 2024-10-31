#pragma once
#include "Product.h"

namespace Products
{
	namespace Fun
	{
		class Book :public Product
		{
		protected:
			string author;
			string genre;
			int pages;
		public:
			Book();
			Book(string name, string author, float price, string manufacturer, string genre, int pages, int age);

			void setAuthor(string author);
			void setGenre(string genre);
			void setPages(int pages);

			string getAuthor()const;
			string getGenre()const;
			int getPages()const;

			virtual void show()const override;
			virtual float calcPrice()const override;
		};

	}
}
