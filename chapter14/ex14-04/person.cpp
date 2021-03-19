#include "person.h"
#include <iostream>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

// Person methods

Person::~Person() {}

Person::Person(const std::string& fn, const std::string& ln) 
    : firstName(fn), lastName(ln)
{
}

void Person::Data() const
{
  cout << "First name: " << firstName  << endl;
  cout << "Last name: " << lastName << endl;
}

void Person::Get()
{
  cout << "First name: " << endl;
  getline(cin, firstName);
  cout << "Last name: " << endl;
  getline(cin, lastName);
}

void Person::Show() const
{
  cout << "Category: PERSON" << endl;
  Data();
}

void Person::Set()
{
  cout << "Enter the person's information:" << endl;
  Get();
}

// Gunslinger methods

Gunslinger::Gunslinger(const std::string& fn, const std::string& ln, double dt, int n)
    : Person(fn, ln), drawTime(dt), notches(n)
{
}

Gunslinger::Gunslinger(const Person& p, double dt, int n)
    : Person(p), drawTime(dt), notches(n)
{
}

void Gunslinger::Data() const
{
  cout << Person::FullName() << "'s draw time: " << drawTime << endl;
  cout << "Notches on " << Person::FullName() << "'s gun: " << notches << endl;
}

void Gunslinger::Get()
{
  cout << "Enter " << Person::FullName() << "'s draw time: ";
  cin >> drawTime;
  cout << "Enter the number of notches on " << Person::FullName() << "'s gun: ";
  cin >> notches;
}

void Gunslinger::Show() const
{
  cout << "Category: GUNSLINGER" << endl;
  Person::Data();
  Data();
}

void Gunslinger::Set()
{
  cout << "Enter the gunslinger's information:" << endl;
  Person::Get();
  Get();
}

// PokerPlayer methods
PokerPlayer::PokerPlayer(const std::string& fn, const std::string& ln)
    : Person(fn, ln)
{
  cardValue = Draw();
}

int PokerPlayer::Draw() const
{
  return rand() % 52 + 1;
}

void PokerPlayer::Show() const
{
  cout << "Category: POKER PLAYER" << endl;
  Person::Data();
}

void PokerPlayer::Set()
{
  cout << "Enter the poker player's information:" << endl;
  Person::Get();
}

// BadDude methods

BadDude::BadDude(const std::string& fn, const std::string& ln, double dt, int n)
    : Person(fn, ln), Gunslinger(fn, ln, dt, n), PokerPlayer(fn, ln)
{
  Cdraw();
}

void BadDude::Data() const
{
  Person::Data();
  Gunslinger::Data();
}

void BadDude::Get()
{
  Gunslinger::Get();
}

void BadDude::Show() const
{
  cout << "Category: BAD DUDE" << endl;
  Data();
}

void BadDude::Set()
{
  cout << "Enter the bad dude's information:" << endl;
  Person::Get();
  Get();
}
