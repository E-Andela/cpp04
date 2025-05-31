#include "../inc/WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : m_type{"WrongAnimal"} {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : m_type{other.m_type} {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other) {
		m_type = other.m_type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes no sound" << std::endl;
}
