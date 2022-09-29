/* #1. Define a class Complex to represent a complex number. Declare instance member
      variables to store real and imaginary part of a complex number, also define instance
      member functions to set values of complex number and print values of complex number      */
#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imagenary;
public:
    void setReal(int n){real=n;}
    void setImagenary(int n){imagenary=n;}
    int getreal(){return real;}
    int getimagenary(){return imagenary;}
};
int main()
{
    int r,i;
    Complex a ,b ;
    cout<<"Enter Real & Imagenary number : ";
    cin>>r>>i;
    a.setReal(r);
    a.setImagenary(i);
    cout<<endl<<a.getreal()<<"+"<<a.getimagenary()<<"i";
	return 0;
}










/* #2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
        number of instance member variables and also define instance member functions to
        set values for time and display values of time.      */
#include<iostream>
using namespace std;
class Time
{
private:
    int hh,mm,ss;
public:
    void setHour(int h){hh=h;}
    void setMinut(int m){mm=m;}
    void setSec(int s){ss=s;}
    int getHour(){return hh;}
    int getMinut(){return mm;}
    int getSecond(){return ss;}
};
int main()
{
    int hour,minut,second;
    Time t1;
    cout<<"Enter Time (Hour,minut,second) : ";
    cin>>hour>>minut>>second;
    t1.setHour(hour);
    t1.setMinut(minut);
    t1.setSec(second);
    cout<<endl<<t1.getHour()<<":"<<t1.getMinut()<<":"<<t1.getSecond();
    return 0;
}









/* #3. Define a class Factorial and define an instance member function to find the Factorial
        of a number using class.      */
#include<iostream>
using namespace std;
class Fectorial
{
    int num,fect,fectR;
public:
    void setNum(int n){num=n;}
    int getNum(){return num;}
    void calFect()
    {
        fect=1;
        for(int i=1;i<=num;i++)
            fect=fect*i;
        fectR=fect;
    }
    int getFect(){return fectR;}
};
int main()
{
    Fectorial f1;
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    f1.setNum(n);
    f1.calFect();
    cout<<"Fectorial of "<<f1.getNum()<<" is "<<f1.getFect();
    return 0;
}










/* #4. Define a class LargestNumber and define an instance member function to find the
        Largest of three Numbers using the class.      */
#include<iostream>
using namespace std;
class LargestNumber
{
    int num1,num2,num3,LargestNum;
public:
    void setNumber(int a,int b,int c){num1=a;num2=b;num3=c;}
    void findLargest()
    {
        if(num1>=num2&&num1>=num3)
            LargestNum=num1;
        else if(num2>=num1&&num2>=num3)
            LargestNum=num2;
        else if(num3>=num1&&num3>=num2)
            LargestNum=num3;
    }
    int getLargestNumber(){return LargestNum;}
};
int main()
{
    LargestNumber l1;
    int n1,n2,n3;
    cout<<"Enter three numbers : ";
    cin>>n1>>n2>>n3;
    l1.setNumber(n1,n2,n3);
    l1.findLargest();
    cout<<"Largest number is "<<l1.getLargestNumber();
    return 0;
}










/* #5. Define a class ReverseNumber and define an instance member function to find
        Reverse of a Number using class     */
#include<iostream>
using namespace std;
class ReverseNumber
{
    int num,revNum;
public:
    void setNumber(int n){num=n;}
    void ProcRev();
    int getRevnum(){return revNum;}
};
void ReverseNumber::ProcRev()
{
    if(num<0)
        num=-num;
    int r,a=0,b;
    while(num)
    {
        r=num%10;
        a=(a*10)+r;
        num=num/10;
    }
    revNum=a;
}
int main()
{
    ReverseNumber r1;
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    r1.setNumber(n);
    r1.ProcRev();
    cout<<"Reversed is "<<r1.getRevnum();
    return 0;
}









/* #6. Define a class Square to find the square of a number and write a C++ program to
        Count number of times a function is called.     */
#include<iostream>
using namespace std;
class Square
{
    int num,sq;
    static int f;
public:
    void setNum(int n){num=n;}
    int getNum(){return num;}
    void cl_sq(){sq=num*num;f++;}
    int getSqure(){return sq;}
    int getCount(){return f;}
};
int Square::f;
int main()
{
    Square s1;
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    s1.setNum(n);
    s1.cl_sq();
    cout<<"Squre of "<<s1.getNum()<<" is "<<s1.getSqure();
    cout<<endl<<"Function caling "<<s1.getCount()<<" times";
    return 0;
}












/* #7. Define a class Greatest and define instance member function to find Largest among
            3 numbers using classes.     */
#include<iostream>
using namespace std;
class Greatest
{
    int n1,n2,n3 ;
public:
    void setNumbers(int a,int b,int c){n1=a;n2=b;n3=c;}
    int getN1(){return n1;}
    int getN2(){return n2;}
    int getN3(){return n3;}
    int findGNumber()
    {
        if(n1>=n2&&n1>=n3)
            return n1;
        else if(n2>=n1&&n2>=n3)
            return n2;
        else if(n3>=n2&&n3>=n1)
             return n3;
    }
};
int main()
{
    Greatest g1,g2;
    g1.setNumbers(5,6,2);
    g2.setNumbers(7,8,3);
    cout<<"Greatest number is "<<g1.findGNumber()<<endl;
    cout<<"Greatest number is "<<g2.findGNumber()<<endl;
    return 0;
}












/* #8. Define a class Rectangle and define an instance member function to find the area of
        the rectangle.     */
#include<iostream>
using namespace std;
class Rectangle
{
    int lenght,breadth;
public:
    void setData(int l,int b){lenght=l;breadth=b;}
    int getL(){return lenght;}
    int getB(){return breadth;}
    int getArea(){return lenght*breadth;}
};
int main()
{
    Rectangle R1;
    cout<<"Enter Lenght & Breadth of Rectangle : ";
    int l,b;
    cin>>l>>b;
    R1.setData(l,b);
    cout<<endl<<"Length is- "<<R1.getL()<<endl<<"Breadth is- "<<R1.getB()<<endl<<"Area is- "<<R1.getArea();
    return 0;
}










/* #9. Define a class Circle and define an instance member function to find the area of the circle.     */
#include<iostream>
using namespace std;
class Circle
{
    int redius;
public:
    void setR(int r){redius=r;}
    int getR(){return redius;}
    float getArea(){return 3.14*redius*redius;}
};
int main()
{
    Circle c1;
    cout<<"Enter Radius of Circle : ";
    int r;
    cin>>r;
    c1.setR(r);
    cout<<endl<<"Area is- "<<c1.getArea();
    return 0;
}












/* #10. Define a class Area and define instance member functions to find the area of the
        different shapes like square, rectangle , circle etc     */
#include<iostream>
using namespace std;
class Area
{
    int redius;
    int lengthRect,breadthRect;
    int num;
public:
    void setR(float r){redius=r;}
    int getR(){return redius;}
    float getAreaCircle(){return 3.14*redius*redius;}
    void setRect(float l,float b){lengthRect=l;breadthRect=b;}
    float getL_Rect(){return lengthRect;}
    float getB_Rect(){return breadthRect;}
    float getAreaRect(){return lengthRect*breadthRect;}
    void setSqNum(float n){num=n;}
    float getSqNum(){return num;}
    float getAreaSq(){return num*num;}
};
int main()
{
    Area c1,s1,r1;
    cout<<"Enter Radius of Circle : ";
    float r;
    cin>>r;
    c1.setR(r);
    cout<<"Enter a number for squre : ";
    float n;
    cin>>n;
    s1.setSqNum(n);
    cout<<"Enter length & breadth of rectanglr : ";
    float l,b;
    cin>>l>>b;
    r1.setRect(l,b);
    cout<<endl<<"Area of circle is- "<<c1.getAreaCircle();
    cout<<endl<<"Squre of "<<s1.getSqNum()<<" is "<<s1.getAreaSq();
    cout<<endl<<"Area of Rectangle is "<<r1.getAreaRect();
    return 0;
}
