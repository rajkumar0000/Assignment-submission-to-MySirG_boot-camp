/* #1. Define a class Complex to represent a complex number with instance variables a and
       b to store real and imaginary parts. Also define following member functions
    a. void setData(int,int)
    b. void showData()
    c. Complex add(Complex)         */

#include<iostream>
using namespace std;
class Complex
{
    int rel,img;

public:
    void setdata(int a,int b){rel=a;img=b;}
    void showData(){cout<<"Real "<<rel<<" imagenary "<<img<<endl;}
    Complex add(Complex C)
    {
        Complex temp;
        temp.rel=rel+C.rel;
        temp.img=img+C.img;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(7,8);
    c3=c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}











/* #2. Define a class Time to represent a time with instance variables h,m and s to store
            hour, minute and second. Also define following member functions
    a. void setTime(int,int,int)
    b. void showTime()
    c. void normalize()
    d. Time add(Time)         */

#include<iostream>
using namespace std;
class Time
{
    int hh,mm,ss;
public:
    void setTime(int h,int m,int s){hh=h;mm=m;ss=s;}
    void showTime(){cout<<"The time is "<<hh<<":"<<mm<<":"<<ss<<endl;}
    void normalaize()
    {
        if(ss>60)
        {ss=ss-60;   mm++;  }
        if(mm>60)
        {mm=mm-60;   hh++;  }
        if(hh>24)
        {hh=hh-24;          }
    }
    Time add(Time T)
    {
        Time temp;
        temp.hh=hh+T.hh;
        temp.mm=mm+T.mm;
        temp.ss=ss+T.ss;
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(10,55,65);
    t2.setTime(14,25,30);
    t3=t1.add(t2);
    t1.normalaize();
    t2.normalaize();
    t3.normalaize();
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;
}









/* #3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.        */

#include<iostream>
using namespace std;
class Cube
{
    int side,volume;
public:
    Cube(){side=0;}
    void setCubeSide(int a){side=a;}
    void calVolume(){volume=side*side*side;}
    void getcCubeVolume(){cout<<"Volume of "<<side<<" is "<<volume<<endl;}
};
int main()
{
    Cube c1,c2;
    c1.setCubeSide(5);
    c2.setCubeSide(12);
    c1.calVolume();
    c2.calVolume();
    c1.getcCubeVolume();
    c2.getcCubeVolume();
    return 0;
}









/* #4. Define a class Counter and Write a program to Show Counter using Constructor.        */

#include<iostream>
using namespace std;
class Counter
{
    static int c;
public:
    Counter(){c++;}
    void getCount(){cout<<"Constructer called "<<c<<" times"<<endl;}
};
int Counter::c;
int main()
{
    Counter c1,c2,c3,c4;
    c1.getCount();
    return 0;
}












/*  #5. Define a class Date and write a program to Display Date and initialise date object
        using Constructors.        */

#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yy;
public:
    Date(){dd=0;mm=0;yy=0;}
    Date(int a,int b,int c){dd=a;mm=b;yy=c;}
    void setDate(int a,int b,int c){dd=a;mm=b;yy=c;}
    void showDate(){
        cout<<"*************************"<<endl;
        cout<<"Day "<<dd<<endl<<"Month "<<mm<<endl<<"Year "<<yy<<endl;}
};
int main()
{
    Date d1(30,9,2022),d2(10,1,2000),d3(25,12,2022);
    d1.showDate();
    d2.showDate();
    d3.showDate();
    return 0;
}










/*  #6. Define a class student and write a program to enter student details using constructor
        and define member function to display all the details.        */

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int roll;
    char name[20];
    char sub[20];
    char collegeName[20];
    static int collCode;
public:
    Student(){roll=0;strcpy(name,"NULL");strcpy(sub,"NULL");strcpy(collegeName,"NULL");collCode=210;}
    Student(int r,char n[],char s[],char c[])
    {
        roll=r;
        strcpy(name,n);
        strcpy(sub,s);
        strcpy(collegeName,c);
        collCode=120;
    }
    void setData(int r,char n[],char s[],char c[])
    {
        roll=r;
        strcpy(name,n);
        strcpy(sub,s);
        strcpy(collegeName,c);
        collCode=120;
    }
    void showData()
    {
        cout<<endl<<"--------------------------------------";
        cout<<endl<<"Student roll No. - "<<roll;
        cout<<endl<<"Student Name     - "<<name;
        cout<<endl<<"Student Subject  - "<<sub;
        cout<<endl<<"Student College  - "<<collegeName;
        cout<<endl<<"College Code     - "<<collCode;
    }
    void setDataByUser()
    {
        int r;char n[20],s[20],c[20];
        cout<<endl<<"Enter student roll No. : ";
        cin>>r;
        cin.sync();
        cout<<endl<<"Enter student Name : ";
        cin.getline(n,20);
        cin.sync();
        cout<<endl<<"Enter student subject : ";
        cin.getline(s,20);
        cin.sync();
        cout<<endl<<"Enter student college name : ";
        cin.getline(c,20);
        roll=r;
        strcpy(name,n);
        strcpy(sub,s);
        strcpy(collegeName,c);
    }
};
int Student::collCode;
int main()
{
    Student s[4];
    s[1].setData(5,"raj kumar","math","xyz");
    s[2].setData(10,"brajendra","science","Xyz");
    s[3].setDataByUser();
    for(int i=0;i<4;i++)
        s[i].showData();
    return 0;
}











/*   #7. Define a class Box and write a program to enter length, breadth and height and
         initialise objects using constructor also define member functions to calculate
         volume of the box.     */
#include<iostream>
using namespace std;
class Box
{
    double length,breadth,height,volume;
public:
    Box(){length=0;breadth=0;height=0;}
    Box(double l,double b,double h){length=l;breadth=b;height=h;}
    void setBoxData(double l,double b,double h){length=l;breadth=b;height=h;}
    void calVolBox(){volume= length*breadth*height;}
    double getVolOfBox(){return volume;}
    double getLen(){return length;}
    double getBre(){return breadth;}
    double getHei(){return height;}
    void setBoxDataByUser()
    {
        double l,b,h;
        cout<<"Enter Box length : ";
        cin>>l;
        cout<<"Enter breadth length : ";
        cin>>b;
        cout<<"Enter height length : ";
        cin>>h;
        length=l; breadth=b; height=h;
        calVolBox();
    }
    void showVolOfBox(){cout<<endl<<"volume is "<<volume;}
};
int main()
{
    Box b1(2,3,5),b2,b3;
    b1.calVolBox();
    b2.setBoxData(5,6,8);
    b2.calVolBox();
    b3.setBoxDataByUser();
    b1.showVolOfBox();
    b2.showVolOfBox();
    b3.showVolOfBox();
    return 0;
}












/*  #8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.                */

#include<iostream>
using namespace std;
class Bank
{
    long principal_amount;
    long rat_of_intrest;
    char name[20];
    int id_no;
    int Ac_number;
    int year;
public:
    Bank()
    {
        cout<<"Enter id : ";
        cin>>id_no;
        fflush(stdin);
        cout<<"Enter Acount Number : ";
        cin>>Ac_number;
        fflush(stdin);
        cout<<"Enter name          : ";
        cin.getline(name,20);
        fflush(stdin);
        cout<<"Enter Year          : ";
        cin>>year;
        fflush(stdin);
        cout<<"Enter amount        : ";
        cin>>principal_amount;
        rat_of_intrest=5;
    }
    void display()
    {
        int itr=checkIntrest();
        cout<<"Id        - "<<id_no<<endl;
        cout<<"Acount No.- "<<Ac_number<<endl;
        cout<<"name      - "<<name<<endl;
        cout<<"Pri.Amount- "<<principal_amount<<endl;
        cout<<"Intrest "<<year<<"to current is "<<itr<<endl;
    }
    int checkIntrest()
    {
        int cYear;
        cout<<"Enter current year  : ";
        cin>>cYear;
        return (cYear-year)*rat_of_intrest;
    }
};

int main()
{
    cout<<"Enter frist customer detail : "<<endl;
    Bank b1 ;
    b1.display();
    return 0;
}















/*  #9. Define a class Bill and define its member function get() to take detail of customer ,
        calculateBill() function to calculate electricity bill using below tariff :
        Upto 100 unit RS. 1.20 per unit
        From 100 to 200 unit RS. 2 per unit
        Above 200 units RS. 3 per unit.     */
#include<iostream>
using namespace std;
class Bill
{
    int consumer_number;
    char consumer_name[20];
    int billUnit;
public:
    void setData()
    {
        cout<<endl<<"Enter consumer number  : ";
        cin>>consumer_number;
        fflush(stdin);
        cout<<"Enter consumer Name : ";
        cin.getline(consumer_name,20);
        fflush(stdin);
        cout<<"Enter Meter Unit : ";
        cin>>billUnit;
        if(billUnit<0)
        {
            billUnit=-1;
            cout<<"Invalid unit "<<endl;
        }
    }
    int calculateBill()
    {
        if(billUnit>=0&&billUnit<=100)
            return billUnit*1.2;
        if(billUnit>100&&billUnit<=200)
            return 120 + ((billUnit-100)*2);
        if (billUnit>200)
            return 120 + 200 + ((billUnit-200)*3);
    }
    void  display()
    {
        cout<<"******************************************"<<endl;
        cout<<"Consumer number - "<<consumer_number<<endl;
        cout<<"Consumer Name - "<<consumer_name<<endl;
        cout<<"Consumer meter unit - "<<billUnit<<endl;
        billUnit>=0?cout<<"Total bill is - "<<calculateBill()<<endl:cout<<"Invalid entered unit"<<endl;
    }

};
int main()
{
    Bill b1,b2,b3;
    b1.setData();
    b2.setData();
    b3.setData();
    b1.display();
    b2.display();
    b3.display();
    return 0;
}











/*  #10. Define a class StaticCount and create a static variable. Increment this variable in a
        function and call this 3 times and display the result     */
#include<iostream>
using namespace std;
class StaticCount
{
    static int count;
public:
    void incrementCount(){count++;}
    void displayCount(){cout<<count;}
};
int StaticCount::count;
int main()
{
    StaticCount c1;
    c1.incrementCount();
    c1.incrementCount();
    c1.incrementCount();
    c1.displayCount();
    return 0;
}
