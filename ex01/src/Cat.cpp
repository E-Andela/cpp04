#include "../inc/Cat.hpp"

#include <iostream>

Cat::Cat() {
	std::cout << "\033[32m";
	std::cout << "Cat default constructor called";
	std::cout << "\033[0m" << std::endl;
	m_type = "Cat";
	m_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal{other} {
	std::cout << "\033[34m";
	std::cout << "Cat copy constructor called";
	std::cout << "\033[0m" << std::endl;
	m_brain = new Brain(*other.m_brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "\033[33m";
	std::cout << "Cat assignment operator called";
	std::cout << "\033[0m" << std::endl;
	if (this != &other) {
		m_type = other.m_type;
		delete m_brain;
		m_brain = new Brain(*other.m_brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "\033[31m";
	std::cout << "Cat destructor called";
	std::cout << "\033[0m" << std::endl;
	delete m_brain;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}

void Cat::setIdea(int index, const std::string thought) {
	if (index >= 0 && index < 100) {
		m_brain->setIdea(index, thought);
	}
}

std::string Cat::getIdea(int index) const {
	if (index >= 0 && index < 100) {
		return m_brain->getIdea(index);
	}
	return "I don't have any thoughts on that.";
}