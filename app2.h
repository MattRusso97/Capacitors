#include <iostream>
using namespace std;


class Capacitor{  //Capacitor object constructor
 public:
  Capacitor(double C);
  ~Capacitor();

  //Getters
  double Get_C() const;
  double Get_e0() const;
  double Get_er() const; 

  //Setters
  void Set_C(double C); 
  void Set_er(double Er); 
  
  void print() const; //Print method

  //Operator '+' overloading 
  Capacitor operator+(const Capacitor& rhs) const;

  //Operator '||' overloading 
  Capacitor operator||(const Capacitor& rhs) const;

private:
  double C_; //Capacitance of the Capacitor (in Farad, [F])
  double e0; //Vacuum dielectric constant (in [F]/[m])
  double er; //Relative dielectric constant  
};
