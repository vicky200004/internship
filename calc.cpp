#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
        cout<<"Options"<<endl;
        cout<<"Addition         -> 1"<< endl;
        cout<<"Subtraction      -> 2"<< endl;
        cout<<"Multiplication   -> 3"<< endl;
        cout<<"Division         -> 4"<< endl;
        cout<<"Clear            -> 5"<< endl;
        cout<<"Enter option :";
        int option;
        cin>>option;
        cout<<"Enter two numbers :";
        int a,b;
        cin>>a>>b;
        switch(option)
        {
            case 1:
                cout<<"Addition of "<< a <<" and "<< b <<" is "<<a+b<<endl;
                break;
            case 2:
                if(a < b)
                {
                    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
                }
                else
                {
                    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<b-a<<endl;
                }
                break;
            case 3:
                cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
                break;
            case 4:
                if(b == 0)
                {
                    cout<<"Division not posssible"<<endl;
                }
                else
                {
                    cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
                }
                break;
            case 5:
                cout<<"Thank you"<<endl;
                return 0;
            default :
                cout<<"Enter a valid option"<<endl;
        }
    }
    return 0;
}
