#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string m_type;

public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	virtual void setIdea(int index, const std::string thought) = 0;
	virtual std::string getIdea(int index) const = 0;
};

#endif