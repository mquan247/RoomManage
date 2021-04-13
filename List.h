#pragma once
#include<string>
#include"Date.h"
#include"Phong.h"
using namespace std;
class List
{
       Phong *a;
       int n;
public :
        List();
        List(Phong*,int);
        List(const List&);
        ~List();
        void Set();
        void Show();
        void Insert();
        void Upd();
        void Del();
        void Search();
        void Sort();
};

