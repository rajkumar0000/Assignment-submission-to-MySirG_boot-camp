//   #1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime_number(int );
prime_number(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if((n%i)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int retu_num=prime_number(num);
    retu_num==1?cout<<"This is Prime number":cout<<"This is Not Prime number";
    return 0;
}












//  #2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int hinum=0, rem;
    while(num)
    {
        rem=num%10;
        if(rem>hinum)
            hinum=rem;
        num=num/10;
    }
    cout<<"Highest number is "<<hinum;
    return 0;
}












//  #3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter Power : ";
    int pow , num_hold=1;
    cin>>pow;
    for(int i=0;i<pow;i++)
        num_hold=(num_hold*num);
    cout<<num<<" to the power "<<pow<<" is > "<<num_hold;
    return 0;
}









//  #4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fect(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
        num=num*i;
    return num;
}
int com(int n,int  r)
{
    return fect(n)/(fect(r)*fect(n-r));
}
int main()
{
    int n;
    cout<<"Enter lines of pascal triangle : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
            cout<<"  ";
        for(int j=0;j<=i;j++)
            printf("%4d",com(i,j));
        cout<<"\n";
    }
    return 0;
}












/*  #5. Define a function to check whether a given number is a term in a Fibonacci series or not   */
#include<iostream>
using namespace std;
int feb(int n)
{
    if(n<=1)
        return n;
    return feb(n-1)+feb(n-2);
}
int main()
{
    int num,f=0;
    cout<<"Enter a number : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    //  cout<<feb(i)<<" ";      // optional
        if(feb(i)==num)
        {
            cout<<endl<<"yes";
            f++;
            break;
        }
        if(feb(i)>=num)
            break;
    }
    if(f==0)
    cout<<endl<<"No";
    return 0;
}













//  #6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swep(int &n1,int &n2)
{
    int hold=n1;
    n1=n2;
    n2=hold;
}
int main()
{
    int a=5,b=7;
    cout<<"a="<<a<<"\nb="<<b;
    cout<<"\nafter swep\n";
    swep(a,b);
    cout<<"a="<<a<<"\nb="<<b;
    return 0;
}












//  #7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
void add(int a,int b,int c=0)
{
    cout<<"addition is - "<<a+b+c;
}
int main()
{
    int n1,n2,n3;
    cout<<"Enter frist & second number : ";
    cin>>n1>>n2;
    add(n1,n2);
    cout<<"\nEnter frist & second & third number : ";
    cin>>n1>>n2>>n3;
    add(n1,n2,n3);
    return 0;
}











//  #8. Define overloaded functions to calculate area of circle, area of rectangle and area oftriangle
#include<iostream>
using namespace std;
void cal(int r)
{
    cout<<"\nArea of circle - "<<3.14*r*r;
}
void cal(int l,int b,int h)
{
    cout<<"\nArea of rectengle - "<<l*b*h;
}
int main()
{
    int redius;
    cout<<"Enter redius of a circle : ";
    cin>>redius;
    cout<<"\nEnter lenth, birdth, hight of rectengle : ";
    int len,bir,hig;
    cin>>len>>bir>>hig;
    cal(redius);
    cal(len,bir,hig);
    return 0;
}











/*  #9.Write functions using function overloading to find a maximum of two numbers and
      both the numbers can be integer or real.   */
#include<iostream>
using namespace std;
int find(int x,int y)
{
    return x>y?x:y;
}
float find(float x,float y)
{
    return x>y?x:y;
}
int main()
{
    int a,b;
    cout<<"Enter numbers in a,b : ";
    cin>>a>>b;
    cout<<"Enter foated number in c,d : ";
    float c,d;
    cin>>c>>d;
    cout<<endl<<"greater number is - "<<find(a,b)<<" between a & b";
    cout<<endl<<"greater number is - "<<find(c,d)<<" between c & d";
    return 0;
}












/*  #10. Write functions using function overloading to add two numbers having different data types.   */
#include<iostream>
using namespace std;
int find(int x,int y)
{
    return x>y?x:y;
}
float find(double x,double y)
{
    return x>y?x:y;
}
int main()
{
    char a,b;
    cout<<"Enter int numbers in a,b : ";
    cin>>a>>b;
    cout<<"Enter foated number in c,d : ";
    float c,d;
    cin>>c>>d;
    cout<<endl<<"greater number is - "<<find(a,b)<<" between a & b";
    cout<<endl<<"greater number is - "<<find(c,d)<<" between c & d";
    return 0;
}
