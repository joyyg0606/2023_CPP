#include <iostream>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    void say_hello() const {
        std::cout << "Hello - im a derived class object" << std::endl;
    }
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main() {
    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base *ptr = new Derived();
    ptr->say_hello();

    // std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    // ptr1->say_hello();

    return 0;
}