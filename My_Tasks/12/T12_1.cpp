#include "T12_1.h"        
#include "cstring"

Cow::Cow()
{
    strcpy(name, "aaa");
    hobby = new char[4];
    strcpy(hobby, "bbb");
    weight = 999;
}

Cow::Cow(const char * m, const char * ho, double wt)
{
    strcpy(name, m);
    hobby = new char[strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;

    std::cout << "Object deleted \n";
}

Cow & Cow::operator=(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;

}