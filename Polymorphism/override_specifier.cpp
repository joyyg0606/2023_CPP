#include <iostream>

class Base
{
public:
    virtual void say_hello() const
    {
        std::cout << "Hello - I'm a base class object" << std::endl;
    }
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    virtual void say_hello() const override
    {
        std::cout << "Hello - im a derived class object" << std::endl;
    }
    virtual ~Derived() {}
};

void greetings(const Base &obj)
{
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main()
{
    Base *p1 = new Base();
    p1->say_hello();

    Derived *p2 = new Derived();
    p2->say_hello();

    Base *p3 = new Derived();
    p3->say_hello();

    return 0;
}