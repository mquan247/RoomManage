#include "Date.h"
#include <iostream>
using namespace std;
Date::Date()
{
       this->day=NULL;
       this->month=NULL;
       this->year=NULL;
}
Date::Date(int a,int b,int c)
{
       this->day=a;
       this->month=b;
       this->year=c;
}
Date ::Date(const Date& p)
{
       this->day=p.day;
       this->month=p.month;
       this->year=p.year;
}
Date::~Date() {}
void Date::Set()
{
       int ngay,thang,nam;
       cout<<"Nhap ngay : ";cin>>ngay;
       cout<<"Nhap thang : " ; cin>>thang;
       cout<<"Nhap nam : " ;cin>>nam;
       this->day=ngay;
       this->month=thang;
       this->year=nam;
}
void Date::Show()
{
       cout<<this->day<<"/"<<this->month<<"/"<<this->year;
}
