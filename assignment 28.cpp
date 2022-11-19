/*   1. Define a class Complex with appropriate instance variables and member functions.
        Overload following operators
        a. << insertion operator
        b. >> extraction operator                                                       */

#include<iostream>
using namespace std;
class Complex
{
    int real , imagenary ;
public:
    void setData()
    {
        cout<<"enter real numer ";
        cin>>real;
        cout<<"enter imagnary part ";
        cin>>imagenary;
    }
    friend istream& operator >>(istream &input,Complex &c )
    {
        cout<<"enter real number ";
        input>>c.real;
        cout<<"enter imagenary number ";
        input>>c.imagenary;
        return input;

    }
    friend ostream& operator <<(ostream &output ,Complex &c)
    {
        output<<c.real<<" + "<<c.imagenary<<" i"<<endl;
        return output;
    }
};

int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<"-----------------"<<endl;
    cout<<c1<<c2;
    return 0;
}












/*   2. Define a class Complex with appropriate instance variables and member functions.
        One of the functions should be setData() to set the properties of the object. Make
        sure the names of formal arguments are the same as names of instance variables.                                                       */

#include<iostream>
using namespace std;
class Complex
{
    int real;
    int image;
public:
    void setdata(int real , int image)
    {
        this->real =real;
        this->image=image;
    }
    void display()
    {
        cout<<real<<" + "<<image<<" i "<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setdata(5,6);
    c1.display();
	return 0;
}










/*   3. Overload subscript operator [] that will be useful when we want to check for an index
        out of bound.
                                                                       */
#include<iostream>
using namespace std;
class index
{
    int arr[100];
    const int size =100;
public:
    void setdata(int n,int size)
    {
        if(size>=100)
            cout<<"sorry out of bound";
        arr[size]=n;
    }
    int operator [](int size )
    {
        if(size>=100)
            cout<<"out of bound ";
        return arr[size];
    }
};
int main()
{
    index i;
    i.setdata(25,5);
    cout<<i[5];
    return 0;
}



















/*   6. Create a complex class and overload assignment operator for that class.   */

#include<iostream>
using namespace std;
class complex
{
    int real,imegnary;
public:
    complex(){cout<<"cunstructor called"<<endl;}
    complex(int r,int i)
    {
        cout<<"pra constructor called"<<endl;
        real=r;imegnary=i;
    }
    void setdata()
    {cout<<"set data function called"<<endl;
        cout<<"enter real number: ";
        cin>>real;
        cout<<"enter img number : ";
        cin>>imegnary;
    }
    complex& operator =(complex &c)
    {cout<<"assign operator called"<<endl;
        this->real=c.real;
        this->imegnary=c.imegnary;
        return c;
    }
    void display()
    {
        cout<<real<<" + "<<imegnary<<" i "<<endl;
    }
};
int main()
{
    complex c1,c2(4,7),c3(2,6);
    c1=c2=c3;
    c1.display();
    return 0;
}












/*   7. Create an Integer class and overload logical not operator for that class.   */

#include<iostream>
using namespace std;
class integer
{
    int num;
public:
    void setata()
    {
        cout<<"enter a number :";
        cin>>num;
    }
    int  operator !()
    {
        return !num;
    }
    void display()
    {
        cout<<num<<endl;
    }
};
int main()
{
    integer i1;
    i1.setata();
   // i1.display();
    //i1.display();
    cout<<!i1;
    return 0;
}













/*   8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
        such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
        c3 are objects of 3D coordinate class.
*/

#include<iostream>
using namespace std;
class coord
{
    int x,y,z;
public:
    //coord(){}
    coord(int a=0,int b=0,int c=0){x=a;y=b;z=c;}
    coord&operator =(coord &c2)
    {
        x=c2.x;
        y=c2.y;
        z=c2.z;
        return c2;
    }
    coord&operator ,(coord &c2)
    {
        x=c2.x;
        y=c2.y;
        z=c2.z;
        return c2;
    }
    friend istream& operator>>(istream &in,coord &c)
    {
        cout<<"enter x,y,z values :";
        cin>>c.x>>c.y>>c.z;
        return cin;
    }
    friend ostream& operator<<(ostream &out,coord &c)
    {
        out<<"x = "<<c.x<<","<<"y = "<<c.y<<","<<"z = "<<c.z<<"\n";
        return out;
    }

};

int main()
{
    coord c1(5,6,8),c2,c3,c4;
    cin>>c2;
    //cout<<c1;
    //cout<<c2;
    c4=(c2,c1,c3);
    cout<<c4;

    return 0;
}










/*   9. Create an Integer class that contains int x as an instance variable and overloading 
        int() operator that will type cast your Integer class object to int data type.
*/

#include<iostream>
using namespace std;
class integer
{
    int x;
public:
    void setdata()
    {
        cout<<"enter a number :";
        cin>>x;
    }
    operator int()
    {
        return x;
    }

};
int main()
{
    integer i1;
    i1.setdata();
    cout<<i1;

    return 0;
}










/*  11. Create a class Marks that have one member variable marks and one member
        function that will print marks. We know that we can access member functions using
        (.) dot operator. Now you need to overload (->) arrow operator to access that
        function.

*/

#include<iostream>
using namespace std;
class Marks
{
    int marks;
public:
    Marks(){}
    Marks(int n){marks=n;}
    void printmarks()
    {
        cout<<marks<<endl;
    }
    Marks* operator ->()
    {
        return this;
    }
};
int main()
{
    Marks m1(80),*m2;
    //m1.printmarks();
    m1->printmarks();
    return 0;
}
