#include <string>

class Golf 
{ 
  private:
    std::string fullname; 
    int handicap;
  public:
    Golf() { fullname = "No Name"; handicap = 0; }
    void setgolf(int i);
    void showgolf();
};
