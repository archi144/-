#include <string>
#ifndef GOLF_H
#define GOLF_H
class Bank
{
private:
    std::string m_name;
    std::string m_number;
    long m_balance;
public:
  Bank(std::string name, std::string number, long balance=0): m_name(name),m_number(number),m_balance(balance)
  {}
  void showInfo();
  void addSum(long &g);
  void takeMoney(long &g);

};

#endif // GOLF_H
