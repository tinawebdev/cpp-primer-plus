#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);   // is there a new customer?

int main()
{
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;

  std::srand(std::time(0));
  cout << "Case Study: Bank of Heather Automatic Teller\n";
  cout << "Enter the number of simulation hours: ";
  int hours;
  cin >> hours;
  double perhour = 60;
  double min_per_cust;
  min_per_cust = MIN_PER_HR / perhour;
  Item temp;
  long turnaways;
  long customers;
  long served;
  long sum_line;
  int wait_time;
  long line_wait;

  do
  {
    Queue line(hours * perhour);
    perhour = perhour--;
    turnaways = 0;
    customers = 0;
    served = 0;
    sum_line = 0;
    wait_time = 0;
    line_wait = 0;

    // running the simulation 
    for (int cycle = 0; cycle < perhour; cycle++)
    {
      if (newcustomer(min_per_cust))
      {
        if (line.isfull())
          turnaways++;
        else
        {
          customers++;
          temp.set(cycle);
          line.enqueue(temp);
        }
      }
      if (wait_time <= 0 && !line.isempty())
      {
        line.dequeue(temp); 
        wait_time = temp.ptime();
        line_wait += cycle - temp.when();
        served++;
      }
      if (wait_time > 0)
        wait_time--;
      sum_line += line.queuecount();
    }
  } while (double(line_wait) / served > 1.0);

  if (customers > 0)
  {
    cout << "customers accepted: " << customers << endl;
    cout << " customers served: " << served << endl;
    cout << " turnaways: " << turnaways << endl;
    cout << "average queue size: ";
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << (double)sum_line / perhour << endl;
    cout << " average wait time: " << (double)line_wait / served << " minutes\n";
  }
  else
    cout << "No customers!\n";
  cout << "\nThe average weight time is " << (double)line_wait / served << " minutes\n";
  cout << "when there are " << perhour << " customers per hour." << std::endl;
  return 0;
}

//  x = average time, in minutes, between customers 
//  return value is true if customer shows up this minute 
bool newcustomer(double x)
{
  return (std::rand() * x / RAND_MAX < 1);
}
