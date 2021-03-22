#include "emp.h"

// abstr_emp methods

abstr_emp::abstr_emp()
  : fname("Undefined"), lname("Undefined"), job("Undefined")
{
}

abstr_emp::abstr_emp(const std::string& fn, 
  const std::string& ln, const std::string& j)
  : fname(fn), lname(ln), job(j)
{
}

abstr_emp::~abstr_emp()
{
}

void abstr_emp::ShowAll() const
{
  std::cout << "First name: " << fname << std::endl;
  std::cout << "Last name: " << lname << std::endl;
  std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
  std::cout << "Enter the employee's first name: ";
  std::cin >> fname;

  std::cout << "Enter the employee's last name: ";
  std::cin >> lname;

  while (std::cin.get() != '\n')
  {
    continue;
  }

  std::cout << "Enter the employee's job title: ";
  getline(std::cin, job);
}

std::ostream & operator<< (std::ostream& os, const abstr_emp& e)
{
  os << e.fname << " " << e.lname;
  return os;
}

// employee methods

employee::employee()
  : abstr_emp()
{
}

employee::employee(const std::string& fn,
  const std::string& ln, const std::string& j)
  : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
  std::cout << "Category: Employee" << std::endl;
  abstr_emp::ShowAll();
}

void employee::SetAll()
{
  abstr_emp::SetAll();
}

// manager methods

manager::manager()
  : abstr_emp(), inchargeof(0)
{
}

manager::manager(const std::string& fn, const std::string& ln,
  const std::string& j, int ico)
  : abstr_emp(fn, ln, j), inchargeof(ico)
{
  if (inchargeof < 0)
  {
    std::cout << "Ivalid value. Value set to 0." << std::endl;
    inchargeof = 0;
  }
}

manager::manager(const abstr_emp& e, int ico)
  : abstr_emp(e), inchargeof(ico)
{
  if (inchargeof < 0)
  {
    std::cout << "Ivalid value. Value set to 0." << std::endl;
    inchargeof = 0;
  }
}

manager::manager(const manager& m)
  : abstr_emp(m), inchargeof(m.inchargeof)
{
}

void manager::ShowAll() const
{
  std::cout << "Category: Manager" << std::endl;
  abstr_emp::ShowAll();
  std::cout << "In charge of " << inchargeof << " people." << std::endl;
}

void manager::SetAll()
{
  abstr_emp::SetAll();
  std::cout << "Enter the number of people is in charge of: ";
  std::cin >> inchargeof;

  while (inchargeof < 0)
  {
    std::cout << "Please enter a valid number of people : " << std::endl;
    std::cin >> inchargeof;
  }
}

// fink methods

fink::fink()
  : abstr_emp(), reportsto("Undefined")
{
}

fink::fink(const std::string& fn, const std::string& ln,
  const std::string& j, const std::string& rpo)
  : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp& e, const std::string& rpo)
  : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink& e)
  : abstr_emp(e), reportsto(e.reportsto)
{
}

void fink::ShowAll() const
{
  std::cout << "Category: Fink" << std::endl;
  abstr_emp::ShowAll();
  std::cout << *this << " reports to " << reportsto << "." << std::endl;
}

void fink::SetAll()
{
  abstr_emp::SetAll();
  std::cout << "Enter the person's name " << *this << " reports to: ";
  getline(std::cin, reportsto);
}

// highfink methods

highfink::highfink()
  : abstr_emp(), manager(), fink()
{
}

highfink::highfink(const std::string& fn, const std::string& ln,
  const std::string& j, const std::string& rpo, int ico)
  : abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico)
{
}

highfink::highfink(const abstr_emp& e, const std::string& rpo, int ico)
  : abstr_emp(e), fink(e, rpo), manager(e, ico)
{
}

highfink::highfink(const fink& f, int ico)
  : abstr_emp(f), fink(f), manager(f, ico)
{
}

highfink::highfink(const manager& m, const std::string& rpo)
  : abstr_emp(m), fink(m, rpo), manager(m)
{
}

highfink::highfink(const highfink& h)
  : abstr_emp(h), fink(h), manager(h)
{
}

void highfink::ShowAll() const
{
  std::cout << "Category: Highfink" << std::endl;
  abstr_emp::ShowAll();
  std::cout << *this << " reports to " << ReportsTo() << "." << std::endl;
  std::cout << "In charge of " << InChargeOf() << " people." << std::endl;
}

void highfink::SetAll()
{
  abstr_emp::SetAll();

  std::cout << "Reports to: ";
  getline(std::cin, ReportsTo());  

  std::cout << "The number of people is in charge of: ";
  std::cin >> InChargeOf();

  while (InChargeOf() < 0)
  {
    std::cout << "Please enter a valid number of people : " << std::endl;
    std::cin >> InChargeOf();
  }
}
