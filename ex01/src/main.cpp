#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#include <iostream>

// int main()
// {
// 	Animal* cat = new Cat();
// 	Animal* cat2 = new Cat(*static_cast<Cat*>(cat));

// 	cat->setIdea(0, "I want to chase a mouse");
// 	std::cout << "Cat 1 idea: " << cat->getIdea(0) << std::endl;
// 	std::cout << "Cat 2 idea: " << cat2->getIdea(0) << std::endl;

// 	delete cat;
// 	delete cat2;
// }

// int main()
// {
// 	Cat cat;
// 	Cat cat2;

// 	cat.setIdea(0, "I want to chase a mouse");
// 	cat2 = cat;
// 	cat.setIdea(0, "I want to sleep");
// 	std::cout << "Cat idea: " << cat.getIdea(0) << std::endl;
// 	std::cout << "Cat2 idea: " << cat2.getIdea(0) << std::endl;
// }

int main()
{
	size_t n = 10;
	Animal* animals[n];
	for (size_t i = 0; i < n; ++i)
	{
		if (i < n / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (size_t i = 0; i < n; ++i)
	{
		animals[i]->makeSound();
		delete animals[i];
		std::cout << std::endl;
	}

	Cat cat1;
	Cat cat2;

	cat1.setIdea(0, "I want to chase a mouse");
	cat2 = cat1;
	std::cout << "Cat 1 idea: " << cat1.getIdea(0) << std::endl;
	std::cout << "Cat 2 idea: " << cat2.getIdea(0) << std::endl;

	cat1.setIdea(0, "I want to sleep");
	std::cout << "Cat 1 idea: " << cat1.getIdea(0) << std::endl;
	std::cout << "Cat 2 idea: " << cat2.getIdea(0) << std::endl;
}