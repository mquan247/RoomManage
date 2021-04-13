#pragma once
class Date
{
       int day,month,year;
public:
       Date();
       Date(int,int,int);
       Date(const Date&);
       ~Date();
       void Set();
       void Show();
};
