#include <iostream>
#include <cstdlib>    // rand(), srand() prototypes
#include <ctime>      // time() prototype
#include "vect.h"
#include <fstream>

using namespace std;
using VECTOR::Vector;
const unsigned int SIZE = 64;

void printResult(std::ostream &os, const unsigned int &steps, Vector &result);

int main() {
  srand(time(0));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;

  char filename[SIZE];
  ofstream fout;

  cout << "Enter the name of a text file: ";
  cin.getline(filename, SIZE);

  fout.open(filename);
  if (!fout.is_open()) {
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating." << endl;
    exit(EXIT_FAILURE);
  }

  fout << "\t\t\"RandWalk\"" << endl;

  cout << "Enter target distance (q to quit): ";
  while (cin >> target) {
    cout << "Enter step length: ";
    if (!(cin >> dstep))
      break;
    fout << "\nTarget Distance: " << target << ", Step Size: " << dstep << endl;
    fout << steps << ": " << result << endl;

    while (result.magval() < target) {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      fout << (steps + 1) << ": " << result << endl;
      steps++;
    }

    printResult(cout, steps, result);
    cout << "More information in:  \"" << filename << "\"" << endl;
    printResult(fout, steps, result);

    steps = 0;
    result.reset(0.0, 0.0);

    cout << "\nEnter target distance (q to quit): ";
  }

  fout.close();
  cout << "Bye!\n";
  cin.clear();
  while (cin.get() != '\n')
    continue;

  return 0;
}

void printResult(std::ostream &os, const unsigned int &steps, Vector &result) {
  os << "\nAfter " << steps << " steps, the subject has the following location:" << endl;
  os << result << endl;
  result.polar_mode();
  os << "\t\tor" << endl;
  os << result << endl;
  os << "Average outward distance per step = " << result.magval() / steps << endl;

  result.rect_mode();
}
