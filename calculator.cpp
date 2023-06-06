#include <iostream>
#include <string>

class Owner {
private:
    std::string name;
public:
    Owner(const std::string& name) : name(name) {}
    
    std::string getName() {
        return this->name;
    }
};

class Car {
private:
    std::string brand;
    std::string model;
    Owner* owner;
public:
    Car(const std::string& brand, const std::string& model)
        : brand(brand), model(model), owner(nullptr) {}

    void setOwner(Owner* owner) {
        this->owner = owner;
    }

    Owner* getOwner() {
        return this->owner;
    }

    void setBrand(const std::string& brand) {
        this->brand = brand;
    }

    std::string getBrand() {
        return this->brand;
    }

    void setModel(const std::string& model) {
        this->model = model;
    }

    std::string getModel() {
        return this->model;
    }

    void printCarDetails() {
        std::cout << "Brand: " << this->brand << "\n";
        std::cout << "Model: " << this->model << "\n";
        if(this->owner != nullptr) {
            std::cout << "Owner: " << this->owner->getName() << "\n";
        } else {
            std::cout << "Owner: None\n";
        }
    }
};

int main() {
    Car car("Ford", "Mustang");
    car.printCarDetails();

    Owner owner("John");
    car.setOwner(&owner);

    car.printCarDetails();

    return 0;
}