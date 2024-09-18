#include <iostream>
class Animal {
public:
   virtual std::string makeSound() = 0;
};

class Dog : public Animal {
public:
    std::string makeSound() override {
        return "Woof!";
    }
};

class Cat : public Animal {
public:
    std::string makeSound() override {
        return "Meow!";
    }
};
int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    
    std::cout << "Dog sound: " << dog->makeSound() << std::endl; 
    std::cout << "Cat sound: " << cat->makeSound() << std::endl; 

    delete dog;
    delete cat;

    return 0;
}
