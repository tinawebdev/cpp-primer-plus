#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"

int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(0));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  unsigned int trialsInput;
  unsigned int highest, lowest;
  unsigned int sumSteps = 0;

  cout << "Enter the number of trials: ";
  cin >> trialsInput;
  cout << "Enter target distance (q to quit): ";
  cin >> target;
  cout << "Enter step length: ";
  cin >> dstep;

  for (int i = 0; i < trialsInput; i++) {
    while (result.magval() < target) {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
    }

    if (i == 0)
      highest = lowest = steps;
    else if (steps > highest)
      highest = steps;
    else if (steps < lowest)
      lowest = steps;
    sumSteps += steps;

    cout << "Trial " << i + 1 << ": After " << steps << " steps, the subject has the following location:\n";
    cout << result << endl;
    result.polar_mode();
    cout << " or\n" << result << endl;
    cout << "Average outward distance per step = "
         << result.magval() / steps << endl;
    steps = 0;
    result.reset(0.0, 0.0);
    cout << endl;
  }

  cout << "Results after " << trialsInput << " trials:" << endl;
  cout << "Highest number of steps: " << highest << endl;
  cout << "Lowest number of steps: " << lowest << endl;
  cout << "Average number of steps: " << (sumSteps / trialsInput) << endl;

  cout << "Bye!\n";
  return 0;
}
