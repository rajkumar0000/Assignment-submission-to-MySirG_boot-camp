//  #1. Write a C++ program to print Hello MySirG on the screen.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello MySirG";
    return 0;
}










//  #2. Write a C++ program to print Hello on the first line and MySirG on the second line using endl.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello"<<endl<< "MySirG";
    return 0;
}









//  #3. Write a C++ program to calculate the sum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int n1=3 , n2=5;
    cout<<n1+n2;
    return 0;
}









//  #4. Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
int main()
{
    int redius;
    cout<<"Enter Redius of circle : ";
    cin>>redius;
    cout<<"Area is - "<<(2*3.14)*redius;
    return 0;
}











//  #5. Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int l,b,h;
    cout<<"Enter Length of cuboid : ";
    cin>>l;
    cout<<"Enter Breadth of cuboid : ";
    cin>>b;
    cout<<"Enter Hight of cuboid : ";
    cin>>h;
    cout<<"Volume of cuboid is - "<<l*b*h<<"cubic meter";
    return 0;
}









//  #6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    float n1,n2,n3;
    cout<<"Enter Three numbers for calculat Avg. : ";
    cin>>n1>>n2>>n3;
    cout<<"Avg. is - "<<(n1+n2+n3)/3;
    return 0;
}












//  #7. Write a C++ program to calculate the square of a number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Squre is - "<<n*n;
    return 0;
}










//  #8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int n1=5,n2=10;
    cout<<"Before sweping"<<endl<<"number 1 :"<<n1<<endl<<"number 2 :"<<n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<endl<<endl<<"After Sweping"<<endl;
    cout<<"number 1 - "<<n1<<endl<<"number 2- "<<n2;
    return 0;
}








//  #9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    if(a>b)
        cout<<"Max number is - "<<a;
    else
        cout<<"Max number is - "<<b;
    return 0;
}










//  #10. Write a C++ program to add all the numbers of an array of size 10

#include<iostream>
using namespace std;
int main()
{
    int a[10]={5,6,7,8,9,10,11,12,13,14}  , add=0;
    for(int i=0;i<10;i++)
        add=add+*(a+i);
    cout<<"Addition of all elements is - "<<add;
    return 0;
}
