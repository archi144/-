#include "golf.h"
#include "stdio.h"
#include "string.h"
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
void setgolf(golf & g,const char*name,int hc)
{
    strcpy(g.fullname,name);
    g.handicap=hc;
}
int setgolf(golf & g)
{
    std::cout<<"Please , enter Your name and Your handicap:"<<" "<<std::endl;
    std::cin.getline(g.fullname,Len);                  //считывает до перевода на новую строку
    std::cin>>g.handicap;
    if (g.fullname[0]==0)                              //если строка пустая - возвращает 0
        return  0;
    else
        return  1;

}
void handicap(golf & g, int hc)
{
    g.handicap=hc;
}
void showgolf(const golf & g)
{
    std::cout<<"Name: "<<g.fullname<<std::endl;
    std::cout<<"Handicap: "<<g.handicap<<std::endl;
}
