#include <iostream>
#include <string>
#include <vector>

/* Factory method design patterns are static method of a class that returns an obkect of the class type. It works different
   Than a constructor because the return could be a subclass instance. You cna also return that instance multiple times
   if you really wanted to.
*/
class Pizza {
   //Factory Method created
   public:

   static Pizza *makePizza(int choice);
   virtual void MadePizza() = 0;
};

class Pepperoni: public Pizza {
   void MadePizza()
   {
      std::cout << "Pepperoni Pizza" <<std::endl;
   }
};

class Combination: public Pizza {
   void MadePizza()
   {
      std::cout << "Combination Pizza" <<std::endl;
   }
};

class Hawaiian: public Pizza {
   void MadePizza()
   {
      std::cout << "Hawaiian Pizza" <<std::endl;
   }
};

Pizza *Pizza::makePizza(int choice) {
   if (choice == 1)
      return new Pepperoni;
   else if (choice == 2)
      return new Combination;
   else
      return new Hawaiian;

}

int main () {

   std::vector<Pizza*> pizzaNames;
   int choice;

   while (true)
   {
      std::cout << "Pepperoni(1), Combination(2), Hawaiian(3): " << std::endl;
      std::cin >> choice;

      if (choice == 0)
      break;
      pizzaNames.push_back(Pizza::makePizza(choice)); 

   for (int i = 0; i < pizzaNames.size(); i++)
      pizzaNames[i]->MadePizza();
      for (int i = 0; i < pizzaNames.size(); i++)
       pizzaNames[i];
   }

 return 0;
}