#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

#include <iostream>

int main() {
	Animal* animals[4];

	for (int i = 0; i < 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = 2; i < 4; ++i) {
		animals[i] = new Cat();
	}

	for (int i = 0; i < 4; ++i) {
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}