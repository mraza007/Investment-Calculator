#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
int days = 0;
float investment = 0;
float a ;
float r = 0.05;
  cout << "Welcome to our investment bank that helps your grow your money at rate of 5%" << endl;
  cout << "Are you here to invest your saving then you have come to the right place" << endl;
  cout << "How much are you will to invest ? "<< endl;
  cin >> investment;
  cout << " Please Specify the amount of days you will like to keep your money in the bank " << endl;
  cin >> days;
  cout << "Here's a detailed summary of account " << endl;
  for(int day=1; day<=days; day++){
    a = investment* pow(1+r, day);
    std::cout << day << "----" << std::fixed << a <<std::endl;
  }






   }
