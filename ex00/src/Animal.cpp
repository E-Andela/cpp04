#include "../inc/Animal.hpp"
#include <iostream>

Animal::Animal() : m_type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : m_type(other.m_type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other) {
		m_type = other.m_type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Base animal has no sound" << std::endl;
}