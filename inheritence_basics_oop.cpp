#include <iostream>
#include <string>

class Animal {
public:
    virtual void make_sound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Animal destroyed" << std::endl;
    }
};

class Dog : public Animal {
public:
    void make_sound() const override {
        std::cout << "Woof!" << std::endl;
    }

    ~Dog() {
        std::cout << "Dog destroyed" << std::endl;
    }
};

class Cat : public Animal {
public:
    void make_sound() const override {
        std::cout << "Meow!" << std::endl;
    }

    ~Cat() {
        std::cout << "Cat destroyed" << std::endl;
    }
};

int main() {
    Animal* animal = nullptr;
    std::string choice;

    std::cout << "Enter the type of animal (dog or cat): ";
    std::cin >> choice;

    if (choice == "dog") {
        animal = new Dog();
    } else if (choice == "cat") {
        animal = new Cat();
    } else {
        std::cout << "Invalid choice." << std::endl;
        return 1; // Exit with an error code
    }

    animal->make_sound();

    delete animal;

    return 0;
}
