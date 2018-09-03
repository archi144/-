#include"bank.h"
#include<string>
#include<iostream>

void Bank::showInfo()
{
    std::cout<<"\t\t\t\tWelcome to the bank"<<std::endl;
    std::cout<<"\n\nName: "<<this->m_name<<std::endl;
    std::cout<<"Number: "<<this->m_number<<std::endl;
    std::cout<<"Balance: "<<this->m_balance<<std::endl;
}
void Bank::addSum(long &g)
{
    this->m_balance+=g;
}
void Bank::takeMoney(long &g)
{
    this->m_balance-=g;
}
