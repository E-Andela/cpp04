#include "../inc/Animal.hpp"
#include <iostream>

Animal::Animal() : m_type{"Animal"} {
	std::cout << "\033[32m";
	std::cout << "Animal default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Animal::Animal(const Animal& other) : m_type{other.m_type} {
	std::cout << "\033[34m";
	std::cout << "Animal copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "\033[33m";
	std::cout << "Animal assignment operator called";
	std::cout << "\033[0m" << std::endl;
	if (this != &other) {
		m_type = other.m_type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "\033[31m";
	std::cout << "Animal destructor called";
	std::cout << "\033[0m" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Base animal has no sound" << std::endl;
}