/*  1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
    integer and string using multiple catch blocks.

*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter 2 numbers for divide : ";
    int num1,num2,result;
    cin>>num1>>num2;
    try
    {
        if(num2==0)
            throw num2;
        if (num2 == 1)
            throw "sorry you entered number is 1 ";
        result=num1/num2;
    }
    catch(int a)
    {
        cout<<"you second element is 0 "<<endl;
    }
    catch(const char* ch)
    {
        cout<<ch<<endl;
    }
    cout<<result;
    return 0;
}














/*  2. Write a C++ program to demonstrate try, throw and catch statements.      */
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter 2 numbers for divide : ";
    int num1,num2,result;
    cin>>num1>>num2;
    try
    {
        if(num2==0)
            throw num2;
        result=num1/num2;
    }
    catch(int a)
    {
        cout<<"you second element is "<<a<<endl;
    }
    cout<<result;
    return 0;
}













/*  3. Write a C++ program to perform arithmetic operations on two numbers and throw an
        exception if the dividend is zero or does not contain an operator.      */
#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , result ;
    char Operator;
    cout<<"enter 1st number : ";
    cin>>num1;
    cout<<"enter operator or action : ";
    cin>>Operator;
    cout<<"enter 2nd number : ";
    cin>>num2;
    try
    {
        switch(Operator)
        {
        case '/' :
            if(num2==0)
                throw "sorry! Invalid operation because divident is zero( 0 )";
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        case '*' :
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '+' :
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-' :
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        default :throw 0;
        }
    }
    catch(const char ch[100])
    {
        cout<<ch;
    }
    catch(...){cout<<"Invalid operaton ";}
    return 0;
}











/*  4. Write a C++ program to accept an email address and throw an exception if it does not
        contain @ symbol.       */
#include<iostream>
using namespace std;
int chack(char str[])
{
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='@')
            return 1;
    }
    return 0;
}
int main()
{
    char email[30];
    cout<<"enter a email address : ";
    cin.getline(email,30);
    try
    {
        if(chack(email)!=1)
            throw email;
        else if(chack(email)==1)
            cout<<"valid"<<endl;

    }
    catch(const char ch[])
    {
        cout<<ch<<" Is Invalid email ";
    }

    return 0;
}













/*  5. Write a C++ program to accept a mobile number and throw an exception if it does not
        contain 10 digits.     */
#include<iostream>
using namespace std;
int chack(double num)
{
    if(num>=1000000000&&num<=9999999999)
        return 1;
    else
        return 0;
}
int main()
{
    double mobile_number;
    cout<<"enter a mobile number : ";
    cin>>mobile_number;
    try
    {
        if(chack(mobile_number)!=1)
            throw mobile_number;
        else if(chack(mobile_number)==1)
            cout<<"valid"<<endl;

    }
    catch(double num)
    {
        cout<<num<<" Is Invalid mobile number ";
    }

    return 0;
}












/*  6. Write a C++ program to accept area pin code and throw an exception if it does not
        contain 6 digits.     */
#include<iostream>
using namespace std;
int main()
{
    int pin;
    cout<<"enter pincode : ";
    cin>>pin;
    //cout<<sizeof(pin)<<endl;
    try
    {
        if(pin>=100000&&pin<=999999)
            cout<<"valid"<<endl;
        else
            throw pin;
    }
    catch(int pi)
    {
        cout<<pi<<" Is Invalid pin ";
    }

    return 0;
}













/*  7. Write a C++ program to accept a username if the username has less than 6 characters
        or does contain any digit or special symbol.        */
#include<iostream>
using namespace std;
int check_username(string str)
{
    int charecter =0, number =0, special=0 ;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z')
            charecter++;
        if(str[i]>='0'&&str[i]<='9')
            number++;
        if(str[i]=='@'||str[i]=='#')
            special++;
    }
    //cout<<charecter<<" " <<number<<" "<<special<<endl;        // for debug
    if(charecter==6&&number==4&&special==1)
        return 1;
    else
        return 0;
}
int main()
{
    string username;
    try
    {
        cout<<"hint :- 6 charecters than spacial charecter [@,#] than 4 numbers\n";
        cout<<"enter username : ";
        cin>>username;
        int chk = check_username(username);
       // cout<<endl<<chk<<endl;                // for debug
        if(chk!=1)
            throw username;
        if(chk==1)
            throw 1;
    }
    catch(const int n)
    {
         cout<<n<<" valid ";
    }
    catch(const string st)
        {
            cout<<st<<" Invalid username  pelese check hint in top";
        }
    return 0;
}











/*  8. Write a C++ program to accept a password and throw an exception if the password has 
        less than 6 characters or does not contain a digit or does not contain any special 
        character or does not contain any capital letterl.        */
#include<iostream>
using namespace std;
int check_username(string str)
{
    int charecter =0, number =0, special=0 ;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z' || str[i]>='a'&&str[i]<='z')
            charecter++;
        if(str[i]>='0'&&str[i]<='9')
            number++;
        if(str[i]=='@'||str[i]=='#')
            special++;
    }
    //cout<<charecter<<" " <<number<<" "<<special<<endl;        // for debug
    if(charecter==6&&number==4&&special==1)
        return 1;
    else
        return 0;
}
int main()
{
    string username;
    try
    {
        cout<<"hint :- 6 charecters than spacial charecter [@,#] than 4 numbers\n";
        cout<<"enter username : ";
        cin>>username;
        int chk = check_username(username);
       // cout<<endl<<chk<<endl;                // for debug
        if(chk!=1)
            throw username;
        if(chk==1)
            throw 1;
    }
    catch(const int n)
    {
         cout<<n<<" valid ";
    }
    catch(const string st)
        {
            cout<<st<<" Invalid username  pelese check hint in top";
        }
    return 0;
}













/*  9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
    contain @ and gmail.com.        */
#include<iostream>
#include<string.h>
using namespace std;
int check_mail(string email)
{
    char st[10];
    int flag=0, addtha ,  i=0;
    for(int i=0;email[i]!='\0';i++)
    {
        if(email[i]=='@')
            flag++;
            addtha=i;
    }
    for(int j=0,i=addtha+1;email[i]!='\0';i++)
    {
        st[j]=email[i];
        i++;
        j++;
    }
    if(flag&& strcmp(st,"gmail.com")==-1 )
        return 1;
    else
        return 0;

}
int main()
{
    string email;
    try
    {
        cout<<"Enter email address : ";
        cin>>email;
        int r=check_mail(email);
        if(r!=1)
            throw  email;
        if(r==1)
            throw 1;
    }
    catch(const int f)
    {
        if(f==1)
            cout<<"valid email";
    }
    catch(const string str)
    {
        cout<<str<<" Invalid email address ";
    }

    return 0;
}













/*      10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
    characters or does contain a digit or special symbol or space       */
#include<iostream>
using namespace std;
int check_nickname(string st)
{
    int charecter=0 , irrilevent_item=0;
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]>='a'&&st[i]<='z' )
            charecter++;
        else
            irrilevent_item++;
    }
    if(charecter<=8&&irrilevent_item==0)
        return 1;
    else
        return 0;
}

int main()
{
    string nickname;
    cout<<"enter nickname : ";
    cin>>nickname;
    try
    {
        int f=check_nickname(nickname);
        if(f==1)
            throw 1;
        if(f!=1)
            throw nickname;
    }
    catch(const int n)
    {
        cout<<"Valid nickname ";
    }
    catch(const string str)
    {
        cout<<str<<" Is Invalid nickname";
    }
    return 0;
}
