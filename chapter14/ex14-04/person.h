#pragma once
#include <string>

class Person
{
private:
  std::string firstName;
  std::string lastName;
protected:
  virtual void Data() const;
  virtual void Get();
public:
  Person(const std::string& fn = "No first name",
         const std::string& ln = "No last name");
  virtual ~Person();
  virtual void Show() const;
  virtual void Set();
  const std::string FullName() const { return firstName + " " + lastName; }
};

class Gunslinger : public virtual Person
{
private:
  double drawTime;
  int notches;
protected:
  virtual void Data() const;
  virtual void Get();
public:
  Gunslinger(
    const std::string& fn = "No first name", 
    const std::string& ln = "No last name", 
    double dt = 0.0, 
    int n = 0);
  Gunslinger(const Person& p, double dt = 0.0, int n = 0);
  ~Gunslinger() {}
  double Draw() { return drawTime; }
  virtual void Show() const;
  virtual void Set();
};

class PokerPlayer : public virtual Person
{
private:
  int cardValue;
protected:
  int Draw() const;
  int CardValue() { return cardValue; }
public:
  PokerPlayer(const std::string& fn = "No first name",
              const std::string& ln = "No last name");
  ~PokerPlayer() {}
  virtual void Show() const;
  virtual void Set();
};


class BadDude : public Gunslinger, public PokerPlayer
{
private:
  void Data() const;
  void Get();
public:
  BadDude(
    const std::string& fn = "No first name",
    const std::string& ln = "No last name",
    double dt = 0.0,
    int n = 0);
  ~BadDude() {}
  double Gdraw() { return Gunslinger::Draw(); }
  int Cdraw() { return PokerPlayer::Draw(); }
  void Show() const;
  void Set();
};
