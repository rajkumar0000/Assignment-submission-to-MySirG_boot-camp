
/*  1. Write a C++ program to convert Primitive type to Complex type.
        Example -
        int main()
        {
        Complex c1;
        Int x=5;
        c1=x;
        return 0;
        }
*/

#include<iostream>
using namespace std;
class Complex
{
    int real,imagnary;
public:
    void operator = (int n)
    {
        real=n;
        imagnary=n;
    }
    void display()
    {
        cout<<real<<" + "<<imagnary<<" i "<<endl;
    }
};
int main()
{
    Complex c1,c2;
    int x=5;
    c1=x;
    c1.display();
   // c2=c1;
   // c2.display();
    return 0;
}










/*  2. Write a C++ program to convert Complex type to Primitive type.
        Example -
        int main()
        {
        Complex c1;
        c1.setData(3,4);
        int x;
        x=c1;
        return 0;
}

*/

#include<iostream>
using namespace std;
class Complex
{
    int real,imagnary;
public:
    Complex(){}
    Complex (int a,int b)
    {
        real=a;
        imagnary=b;
    }
    void display()
    {
        cout<<real<<" + "<<imagnary<<" i "<<endl;
    }
    operator int()
    {
        return real+imagnary;
    }
};
int main()
{
    Complex c1(5,6);
    c1.display();
    int a;
    a=c1;
    cout<<a;
    return 0;
}









/*  3. Create a Product class and convert Product type to Item type using constructor    */
#include<iostream>
using namespace std;
class Item;
class Product;

class Item
{
    int i;
public:
    Item(){}
    Item(int n){i=n;}
    void display()
    {
        cout<<"Item i = "<<i<<endl;
    }
    int geti(){return i;}
};

class Product
{
    int p;
public:
    Product(int a)
    {
        p=a;
    }
    void display()
    {
        cout<<"Product p = "<<p<<endl;
    }
    int getp(){return p;}
    Product(Item it)
    {
        p=it.geti();
    }
    operator Item()
    {
        return p;
    }
};
int main()
{
    Product p1(5);
    Item i1(7);
    //p1.display();
    //i1.display();
    //i1=p1;
    //i1.display();
    p1=i1;
    p1.display();
    return 0;
}












/*  4. Create Product class and convert Product type to Item type using casting operator
int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 return 0;
}    */
#include<iostream>
using namespace std;

class Item
{
    int i;
public:
    Item(){}
    Item(int a){i=a;}
    void display(){cout<<"item i is = "<<i;}
    int getI(){return i;}
    void setI(int a){i=a;}
};

class Product
{
    int a,b;
public:
    void setdata()
    {
        cout<<"enter 2 numbers : ";
        cin>>a>>b;
    }
    operator Item()
    {
        return a+b;
    }
};

int main()
{
    Item i1,i2;
    Product p1;
    p1.setdata();
    i1=p1;
    i1.display();
    return 0;
}










/* 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
    functions to support Invent1 to float and Invent1 to Invent2 type.
    Example -
    int main()
    {
        Invent1 s1=(4,5);
        Invent2 d1;
        float tv;
        tv=s1;
        d1=s1;
        return 0;
    }
*/
#include<iostream>
using namespace std;
class Invent1
{
    int x,y;
public:
    Invent1(){}
    Invent1(int n1,int n2)
    {
        x=n1;y=n2;
    }
    void display()
    {
        cout<<"x is "<<x<<" y is "<<y<<" of invent1"<<endl;
    }
    operator float()
    {
        return x+y;
    }
    int getX(){return x;}
    int getY(){return y;}
};
class Invent2
{
    int x,y;
public:
    Invent2(){}
    Invent2(int n1,int n2)
    {
        x=n1;y=n2;
    }
    operator float()
    {
        return x+y;
    }
    void display()
    {
        cout<<"x is "<<x<<" y is "<<y<<" of invent2"<<endl;
    }
    Invent2(Invent1 i)
    {
        this->x=i.getX();
        this->y=i.getY();
    }
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    cout<<"float is - "<<tv<<endl;
    d1=s1;
    d1.display();
    return 0;
}












/*  6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.  Example
 int main()
{
 int duration;
 cout<<”Enter time duration in minutes”;
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}
    */
#include<iostream>
using namespace std;

class Time
{
    int hh,mm;
public:
    Time(){}
    Time(int h,int m){hh=h;mm=m;}
    Time(int s)
    {
        hh=s/60;
        mm=s%60;

    }
    
    void display()
    {
        cout<<"time is - "<<hh<<" : "<<mm<<endl;
    }
};
int main()
{
    int sec=625;
    Time t;
    t=sec;
    t.display();
    return 0;
}












/* 7. Create two class Time and Minute and add required getter and setter including constructors.
    Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
    Example -
    int main()
    {
        Time t1(2,30);
        t1.display();
        Minute m1;
        m1.display();
        m1=t1 // Fetch minute from time
        t1.display();
        m1.display();
        return 0;
    }
*/
#include<iostream>
using namespace std;
class Minut;
class Time
{
    int hh,mm;
public:
    Time(){};
    Time(int h,int m){hh=h;mm=m;}
    void display()
    {
        cout<<hh<<" : "<<mm<<endl;
    }

    int getH(){return hh;}
    int getM(){return mm;}
};

class Minut
{
    int m;
public:
    Minut(){}
    Minut(int m):m(m){}
    void display()
    {
        cout<<"minut is - "<<m<<endl;
    }
    Minut(Time t)
    {
        this->m=t.getH()*60+t.getM();
    }
};

int main()
    {
        Time t1(2,30);
        t1.display();
        Minut m1;
        m1.display();
        m1=t1; // Fetch minute from time
        t1.display();
        m1.display();
        return 0;
    }











/* 8. Create a Rupee class and convert it into int. And Display it.
Example
int main()
{
 Rupee r = 10;
 int x = r;
cout<<x;
 return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
    int rupe;
public:
    Rupee(){}
    Rupee(int r){rupe=r;}
    void display()
    {
        cout<<"rupee is "<<rupe<<endl;
    }
    operator int()
    {
        return rupe;
    }
};
int main()
{
    Rupee r(50);
    r.display();
    int x=r;
    cout<<"rupee convert in to int is - "<<x;
    return 0;
}











/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
Example
int main()
{
 int x = 50;
Dollar d;
d = x;
d.display();
 return 0;
}

*/
#include<iostream>
using namespace std;
class Dollar
{
    int dol;
public:
    Dollar(){}
    Dollar(int n){dol=n;}
    void display()
    {
        cout<<"doller is - "<<dol<<endl;
    }
};
int main()
{
    Dollar d;
    int x=10;
    cout<<"integer is - "<<x<<endl;
    d=x;
    d.display();
    return 0;
}















/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example
int main()
{
 Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}

*/
#include<iostream>
using namespace std;
class Dollar
{
    int dol;
public:
    Dollar(){}
    Dollar(int n){dol=n;}
    void display()
    {
        cout<<"doller is - "<<dol<<endl;
    }
    int getDoller()
    {
        return dol;
    }
};
class Rupee
{
    int rupe;
public:
    Rupee(){}
    Rupee(int n){rupe=n;}
    Rupee(Dollar d)
    {
        rupe=d.getDoller();
    }

    operator Dollar()
    {
        return rupe;
    }
    void display()
    {
        cout<<"rupee is - "<<rupe<<endl;
    }
};
int main()
{
    Rupee r = 20;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
