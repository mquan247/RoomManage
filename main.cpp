#include<iostream>
#include"Date.h"
#include"Phong.h"
#include"List.h"
using namespace std;
int main()
{
    List a;
    int s;
    a.Set();
    cout<<"\n\n		Menu		" ;
	cout<<"\n1.Hien thi danh sach phong";
	cout<<"\n2.Them phong";
	cout<<"\n3.Cap nhat thong tin phong";
	cout<<"\n4.Xoa phong";
	cout<<"\n5.Tim kiem phong";
	cout<<"\n6.Sap xep phong";
	cout<<"\n7.Thoat";
       do{
       cout << "\nNhap cau lenh can thuc hien: " ;
	cin >> s ;
	while (s<1||s>7) {cout<<"Nhap lai lua chon: "; cin>>s;}
	switch (s)
       {
		case 1 : a.Show() ; break;
		case 2 : a.Insert() ; break;
		case 3 : a.Upd(); break;
		case 4 : a.Del(); break;
		case 5 : a.Search(); break;
		case 6 : a.Sort();break;
		case 7 : break;
              }
       }
       while(s<7);
	cout <<"\nThoat chuong trinh ";
	return 0;
}
