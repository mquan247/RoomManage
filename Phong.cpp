#include<iostream>
#include<string>
#include "Phong.h"
using namespace std;
Phong::Phong()
{
       this->id="1000";
       this->sn=0;
       this->stt=0;
       this->pr=100000;
}
Phong::Phong(string a,int b, bool c, Date d, Date e, double f)
{
       this->id=a;
       this->sn=b;
       this->stt=c;
       this->nn=d;
       this->nt=e;
       this->pr=f;
}
Phong::Phong(const Phong& p)
{
       this->id=p.id;
       this->sn=p.sn;
       this->stt=p.stt;
       this->nn=p.nn;
       this->nt=p.nt;
       this->pr=p.pr;
}
Phong::~Phong() {}

void Phong::Set() //Nhap danh sach phong
{
       string a; int b;
       cout<<"Nhap ma phong : "; cin>>a;
       this->id=a;
       do
       {
              cout<<"Nhap so nguoi trong phong (1->4) : ";cin>>b;
       }
       while(b<0||b>4);
       this->sn=b;
       if(b>0) this->stt=1;
       else this->stt=0;
       Date d,e ;
       if(this->stt==0)
       {
              cout<<"Ngay nhan phong : ";d.Set();this->nn=d;
              cout<<"Ngay tra phong : "; e.Set();this->nt=e;
       }
       double f;
       cout<<"Gia phong : "; cin>>f;
       this->pr=f;
}
void Phong::Show() //Hien thi danh sach phong
{
       cout<<"\nMa phong: "<<this->id;
       cout<<"\nTang : "<<this->id[0]<<" Phong : "<<this->id[1]<<this->id[2]<<this->id[3];
       cout<<"\nSo nguoi trong phong: "<<this->sn<<"\n";
       cout<<"Tinh trang phong : "<<(this->stt?"dang co nguoi thue":"trong ");
       cout<<"\nNgay nhan phong : ";
       (this->nn).Show();
       cout<<"\nNgay tra phong : ";
       (this->nt).Show();
       cout<<"\nGia phong : "<<this->pr<<endl;
}

string Phong::getID()
{
       return this->id;
}
