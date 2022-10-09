/*  #1. Define a class Complex with appropriate instance variables and member functions.
        Define following operators in the class:
    a. +
    b. -
    c. *
    d. ==                */

#include<iostream>
using namespace std;
class Complex
{
    int real,imagenary;
public:
    Complex(){}
    Complex(int a,int b)
    {
        real=a;
        imagenary=b;
    }
    Complex operator+(Complex a)
    {
        Complex temp;
        temp.real=real+a.real;
        temp.imagenary=imagenary+a.imagenary;
        return temp;
    }
    void setData()
    {
        int r,i;
        cout<<"Enter Real number : ";
        cin>>r;
        cout<<"Enter imagenary number : ";
        cin>>i;
        real=r;
        imagenary=i;
    }
    Complex operator=(Complex c)
    {
        Complex temp;
        temp.real=c.real;
        temp.imagenary=c.imagenary;
        return temp;
    }
    void display()
    {
        cout<<real<<" + "<<imagenary<<" i"<<endl;
    }
    Complex operator-(Complex a)
    {
        Complex temp;
        temp.real=real-a.real;
        temp.imagenary=imagenary-a.imagenary;
        return temp;
    }
    Complex operator*(Complex a)
    {
        Complex temp;
        temp.real=real*a.real;
        temp.imagenary=imagenary*a.imagenary;
        return temp;
    }
    bool operator==(Complex a)
    {
        if(real==a.real&&imagenary==a.imagenary)
            return 1;
        else
            return 0;
    }

};
int main()
{
    Complex c1(3,8) , c2(2,5) ;
    Complex c3=c1+c2;
    c3.display();
    Complex c4=c1-c2;
    c4.display();
    Complex c5=c3*c4;
    c5.display();
    Complex c(3,8);
    c.display();
    if(c==c1)
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    if(c1==c2)
        cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    return 0;
}









/*  #2. Write a C++ program to overload unary operators that is increment and decrement.           */

#include<iostream>
using namespace std;
class Overload
{
    int number;
public:
    Overload(){}
    Overload(int a){number=a;}

    void operator++(int a)
    {
        number ++;
    }

    void operator--(int a)
    {
        number --;
    }

    void display(){cout<<number<<endl;}
};
int main()
{
    Overload obj1(5),obj2(10);
    obj1.display();
    obj1++;
    obj1.display();
    obj2.display();
    obj2--;
    obj2.display();
    return 0;
}













/*  #3. Write a C++ program to add two complex numbers using operator overloaded by a
                        friend function.                */

#include<iostream>
using namespace std;
class Complex
{
    int real,imagenary;
public:
    Complex(){}

    Complex(int a,int b)
    {
        real=a;
        imagenary=b;
    }

    void display(){cout<<real<<" + "<<imagenary<<"i"<<endl;}

    friend Complex operator+(Complex, Complex);

    void operator=(Complex a)
    {
        real=a.real;
        imagenary=a.imagenary;
    }
};
Complex operator+(Complex a ,Complex b)
{
        Complex  temp;
        temp.real=a.real+b.real;
        temp.imagenary=a.imagenary+b.imagenary;
        return temp;
}
int main()
{
    Complex c1(2,5) , c2(3,5) , c3;
    c3=c1+c2;
    c3.display();
    return 0;
}














/*  #4. Create a class Time which contains:
        - Hours
        - Minutes
        - Seconds
        Write a C++ program using operator overloading for the following:
    1. = = : To check whether two Times are the same or not.
    2. >> : To accept the time.
    3. << : To display the time. -                */

#include<iostream>
using namespace std;
class Time
{
    int Hours,Minuts,Seconds;
public:

    friend void operator>>( istream &input,Time &t)
    {
        cout<<"Enter Hour         : "<<endl;
        input>>t.Hours;
        cout<<"Enter Minut        : "<<endl;
        input>>t.Minuts;
        cout<<"Enter Second       : "<<endl;
        input>>t.Seconds;
        if(t.Hours>24||t.Minuts>60||t.Seconds>60)
            {
                cout<<"Invalid time pelese try again ";
                return ;
            }
    }

    friend void operator<<(ostream &output,Time t)
    {
        output<<t.Hours<<":"<<t.Minuts<<":"<<t.Seconds<<endl;
    }

    int operator ==(Time t)
    {
        cout<<"call == operator "<<endl;
        int a=Hours*3600 + Minuts*60 + Seconds;
        int b=t.Hours*3600 + t.Minuts*60 + t.Seconds;
        if(a==b)
            return 1;
            return 0;
    }
};
int main()
{
    Time t1,t2;
    cout<<"Enter frist time : "<<endl;
    cin>>t1;
    cout<<"Enter second time : "<<endl;
    cin>>t2;
    cout<<t1;
    cout<<t2;
    if(t1==t2)
        cout<<"Both time is same "<<endl;
    else
        cout<<"Both time is not same "<<endl;
    return 0;
}















/*  #5. Consider following class Numbers
    class Numbers
        {
            int x,y,z;
        public:
            // methods
        };
    Overload the operator unary minus (-) to negate the numbers.                */

#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
public:
    void input()
    {
        cout<<"Enter Frist number : ";
        cin>>x;
        cout<<"Enter Second number : ";
        cin>>y;
        cout<<"Enter Thered number : ";
        cin>>z;
    }

    void operator-()
    {
        x=-x; y=-y; z=-z;
    }

    void output()
    {
        cout<<x<<"     "<<y<<"     "<<z;
    }
};
int main()
{
    Numbers n1;
    n1.input();
    -n1;
    cout<<"Negated umber is"<<endl;
    n1.output();
    return 0;
}











/*  #6. Create a class CString to represent a string.
        a) Overload the + operator to concatenate two strings.
        b) == to compare 2 strings.                */

#include<iostream>
#include<cstring>
using namespace std;
class CSstring
{
    char str[20];
public:
    void setString()
    {
        cout<<"Enter string : ";
        cin.getline(str,20);
    }

    char* operator+(CSstring s)
    {   return strcat(str,s.str);   }

    int operator==(CSstring s)
    {
        cout<<"call == operator"<<endl;
        int i=0 ;
        while(str[i]!='\0'&&s.str[i]!='\0')
        {
            if(str[i]!=s.str[i])
                return 0;
            i++;
        }
        return 1;
    }
};

int main()
{
    CSstring s1,s2;
    cout<<"frist string "<<endl;
    s1.setString();
    cout<<"second string"<<endl;
    s2.setString();
    cout<<"*****************************"<<endl;
    cout<<"Concatinat string "<<endl;
    cout<<s1+s2<<endl;
    cout<<"*****************************"<<endl;
    if(s1==s2)
        cout<<"Both string are same "<<endl;
    else
        cout<<"Both string are not same "<<endl;
    return 0;
}











/*  #7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
    a) Unary ++ (pre and post both)
    b) Overload as friend functions: operators << and >>.Output-    */

#include<iostream>
using namespace std;
class Frection
{
    long numerator, denominator;
public:
    Frection(){cout<<"call defalt cunstructor"<<endl;numerator=0,denominator=0;}
    void setDta()
    {cout<<"call set data"<<endl;
        cout<<"Enter numerator: ";
        cin>>numerator;
        cout<<"Enter denominator : ";
        cin>>denominator;
    }
    friend void operator++(Frection &,int useless);      //post increment

    friend void operator++(Frection&) ;       //pre increment

    void display()
    {cout<<"call display"<<endl;
        cout<<numerator<<"/"<<denominator<<endl;
    }

    friend void operator>>(istream &input,Frection &f)  //exertion decleration
    {cout<<"call exsertion operator"<<endl;
        cout<<"Enter numerator: ";
        input>>f.numerator;
        cout<<"Enter denominator : ";
        input>>f.denominator;
    }

    friend void operator<<(ostream &output,Frection f)
    {
        output<<f.numerator;
        output<<"/";
        output<<f.denominator<<endl;
    }
};

void operator++(Frection &f)
{cout<<"call preincrement"<<endl;
    f.numerator=++f.numerator;
    f.denominator=++f.denominator;
}
void operator++(Frection &f,int useless)      //post increment
{cout<<"call post increment"<<endl;
    f.numerator=f.numerator++;
    f.denominator=f.denominator++;
}
int main()
{
    Frection f1;
    cin>>f1;
    cout<<f1;
    f1++;
    cout<<f1;
    ++f1;
    cout<<f1;
    return 0;
};












/*  #8. Consider a class Matrix
    Class Matrix
    {
        int a[3][3];
    Public:
        //methods;
    };
    Overload the - (Unary) should negate the numbers stored in the object.
    Output -                */

#include<iostream>
using namespace std;
class matrix
{
    int mtx[3][3];
public:
    void setmatrix()
    {
        cout<<"Enter 3X3 matrix Elements"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mtx[i][j];
            }
        }
    }
    friend void operator-(matrix &m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                m.mtx[i][j]=-m.mtx[i][j];
            }
        }
    }
    void display()
    {
        cout<<"----------------"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mtx[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix m1;
    m1.setmatrix();
    m1.display();
    -m1;
    m1.display();
    return 0;
}












/*  #9. Consider the following class mystring
Class mystring
{
    char str [100];
Public:
    // methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).                                    */

#include<iostream>
#include<cstring>
using namespace std;
class mystring
{
    char str[100];
public:
    void setSting()
    {cout<<"call setString"<<endl;
        cout<<"Enter string : ";
        cin.getline(str,100);
        cout<<endl;
    }
    friend mystring operator!(const mystring &s)
    {cout<<"call ! operator"<<endl;
        mystring a ;
        for(int i=0;s.str[i];i++)
        {
            if(s.str[i]>=65&&s.str[i]<=90)
                a.str[i]=s.str[i]+32;
            else if(s.str[i]>=97&&s.str[i]<=122)
                a.str[i]=s.str[i]-32;
            else
                a.str[i]=s.str[i];
        }
        return a;
    }

    friend void display(mystring s)
    {cout<<"call friend display"<<endl;
        cout<<s.str<<endl;
    }

    void display()
    {cout<<"call display"<<endl;
        cout<<str<<endl;
    }
    friend void operator<<(ostream &output,mystring s)
    {cout<<"call << operator"<<endl;
        output<<s.str;
        output<<endl;
    }

    void operator=(mystring s)
    {
        strcpy(str,s.str);
    }
};

int main()
{
    mystring s1 ,s2 ;
    s1.setSting();
    s1.display();
    s2=!s1;
    s2.display();
    display(!s2);
    cout<<(!s1);
    return 0;
}












/*  #10.Class Matrix
        {
            int a[3][3];
        Public:
            //methods;
        };
    Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
    overloading).                                                       */

#include<iostream>
#include<cstring>
using namespace std;
class matrix
{
    int mtx[3][3];
public:
    void setData()
    {
        cout<<"Enter 3X3 matrix elements :"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>mtx[i][j];
            }
        }
    }
    matrix operator+(matrix m)
    {
        matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.mtx[i][j]=mtx[i][j]+m.mtx[i][j];
            }
        }
        return temp;
    }
    void operator=(matrix m)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                mtx[i][j]=m.mtx[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mtx[i][j]<<"      ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix m1,m2,m3;
    cout<<"Enter frist matrix :"<<endl;
    m1.setData();
    cout<<"Enter second matrix : "<<endl;
    m2.setData();
    m3=m1+m2;
    cout<<"Addition of frist & second matrix - "<<endl<<"---------------------"<<endl;
    m3.display();
    return 0;
}
