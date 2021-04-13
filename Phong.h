#pragma once
#include <string>
#include "Date.h"
using namespace std;
class Phong
{
       string id;
       int sn;
       bool stt;
       Date nn,nt;
       double pr;
public :
       Phong();
       Phong(string, int,bool, Date,Date,double);
       Phong(const Phong&);
       ~Phong();
       void Set();
       void Show();
       string getID();
};
