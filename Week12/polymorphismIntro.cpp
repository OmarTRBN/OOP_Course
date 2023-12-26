// This example is only to explain concepts.
// It is not in anyway useful

#include <iostream>

using namespace std;

class Human
{
public:
    virtual string talk()
    {
        return "Can't talk";
    }
};

class Turk : public::Human
{
public:
    virtual string talk() override
    {
        return "Merhaba";
    }
};

class Alman : public ::Human
{
public:
    virtual string talk() override
    {
        return "Halo";
    }
};

class Ingiliz : public ::Human
{
public:
    virtual string talk() override
    {
        return "Hello";
    }
};

int main(int argc, char const *argv[])
{
    Human dude;
    Alman germanDude;
    Ingiliz englishDude;
    Turk turkishDude;

    string germanPhrase = germanDude.talk();
    string englishPhrase = englishDude.talk();
    string turkishPhrase = turkishDude.talk();

    cout << germanPhrase << endl;
    cout << englishPhrase << endl;
    cout << turkishPhrase << endl;
    return 0;
}
