#pragma once
#include "Product.h"
namespace Products {
	namespace Fun {
		class Game : public Product
		{
		protected:
			int players;
		public:
			Game();
			Game(std::string name,
				float price,
				std::string manufacturer,
				int age, int players);

			void setPlayers(int players);
			int getPlayers()const;

			virtual void show()const override;
			virtual float calcPrice()const override;
		};
	}
}