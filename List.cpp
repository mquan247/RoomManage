#include<iostream>
#include"List.h"
using namespace std;
void Swap(Phong&a,Phong&b)
{
       Phong temp=a; a=b;b=temp;
}
List::List()  //Ham dung mac dinh
{
       this->n=NULL;
       this->a= new Phong[0];
}
List::List(Phong* p, int N) //Ham dung
{
       this->n=N;
       this->a=new Phong[N];
       for(int i=0;i<N;i++)
       {
              *(this->a+i)=*(p+i);
       }
}
List::List(const List&p) //Ham dung sao chep
 {
       this->n=p.n;
       this->a=new Phong[p.n];
       for(int i=0;i<p.n;i++)
       {
              *(this->a+i)= *(p.a+i);
       }
}
List::~List() {} //Ham dung huy
void List::Set()
{
    cout<<"Nhap so luong phong : "; cin>>this->n;
    this->a=new Phong[this->n];
    for(int i=0;i<this->n;i++)
    {
           cout<<"Nhap thong tin so phong thu "<<i+1<<endl;
           this->a[i].Set();
    }
}

void List::Show()
{
       for(int i=0;i<this->n;i++)
       {
              this->a[i].Show();
       }
}
void List::Insert()
{
       int k;
       cout<<"Nhap vi tri phong can them: "; cin>>k;
       Phong x;
       --k;
       x.Set();
       Phong *b=new Phong[this->n+1];
       for(int i=0;i<k;i++)
       {
              *(b+i)=*(this->a+i);
       }
       for(int i=k;i<this->n;i++)
       {
              *(b+i+1)=*(this->a+i);
       }
       *(b+k)=x;
       ++this->n;
       this->a=new Phong[this->n];
       for(int i=0;i<n;i++)
       {
              *(this->a+i)= *(b+i);
              this->a[i].Show();
       }
       delete [] b;
}
void List::Upd()
{
       int k;
       cout<<"Nhap vi tri can cap nhat: ";
       cin>>k;
       Phong x;
       x.Set();
       for(int i=0;i<n;i++)
       {
              *(this->a+k-1)=x;
              this->a[i].Show();
       }
}
void List::Del()
{
       int k;
       cout<<"\nNhap vi tri can xoa: ";
       cin>>k;
       --k;
       Phong *c=new Phong[this->n-1];
       for(int i=k-1;i>=0;i--)
       {
              *(c+i)=*(this->a+i);
       }
       for(int i=k;i<this->n-1;i++)
       {
              *(c+i)=*(this->a+i+1);
       }
       --this->n;
       this->a=new Phong[this->n];
       for(int i=0;i<this->n;i++)
       {
              *(this->a+i)= *(c+i);
              this->a[i].Show();
       }
       delete [] c;
}

void List::Search() //Linear Search
{
       string b;
       cout<<"Nhap ma so phong can tim: ";
       cin>>b;
       for(int i=0;i<this->n;i++)
	{
		if(this->a[i].getID()==b)
              {
                     this->a[i].Show();
                     return ;
              }
	}
	cout<<"Khong tim thay ma phong ";
}
void List::Sort()
{
       for (int i=0;i<this->n;i++)
	{
		string minn=this->a[i].getID();
		int pos = i;
		for (int j=i; j<this->n; j++)
		{
			if (minn>this->a[j].getID())
                            {
                                   minn=this->a[j].getID(); pos = j;}
		}
		swap(this->a[i],this->a[pos]);
		this->a[i].Show();
	}
}
