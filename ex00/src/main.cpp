#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#include <iostream>

int main() {
	
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	WrongAnimal* wrongAnimal = new WrongCat();

	wrongAnimal->makeSound();

	delete dog;
	delete cat;
	delete wrongAnimal;

	return 0;
}