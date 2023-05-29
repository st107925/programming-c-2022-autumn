#include <iostream>
#include <string>

struct Animal
{
    std::string type;
    std::string name;
    int age;

    Animal(std::string type = "sobaka", std::string name = "topology", int age = 3)
    {
        this->type = type;
        this->name = name;
        this->age = age;
    }

    Animal(const Animal& creature)
    {
        this->type = creature.type;
        this->name = creature.name;
        this->age = creature.age;
    }

    ~Animal()
    {
    }
};

void printAnimal(Animal animal)
{
    std::cout << "It\'s name is " << animal.name << '.' << std::endl;
    std::cout << animal.name << " is " << animal.type << '.' << std::endl;
    std::cout << "It is " << animal.age << " years old." << std::endl;
}

void ElderAnimal(Animal& animal)
{
    animal.age += 1;
}

int main(int argc, char* argv[])
{
    Animal check;
    ElderAnimal(check);
    printAnimal(check);
    Animal a;
    a.age = 5;
    a.name = "angem";
    a.type = "pain";
    printAnimal(a);
    return EXIT_SUCCESS;
}
