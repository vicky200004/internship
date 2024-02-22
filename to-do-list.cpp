#include<iostream>
#include <string>
#include <vector>
using namespace std;

void add();
void show();
void erase();

vector<string> list;

int main()
{
    while(true)
    {
        cout<<endl<<"Add an task      -> 1"<<endl;
        cout<<"Display list     -> 2"<<endl;
        cout<<"Remove a task    -> 3"<<endl;
        cout<<"Enter an option :";
        int option;
        cin>> option;
        switch(option)
        {
            case 1:
                add();
                break;
            case 2:
                show();
                break;
            case 3:
                erase();
                break;
            default :
                cout<<endl<<"Invalid option";
                break;
        }
    }
}

void add()
{
    cout<<endl<<"Enter the task to be added :";
    string eve;
    cin >> eve;
    list.push_back(eve);
    cout<<endl<<"Event added"<<endl;
}

void show()
{
    if(list.size() == 0)
    {
        cout<<endl<<"List is empty"<<endl;
    }
    else
    {
        cout<<endl<<"Events in the list :";
        for(int i=0;i < list.size() ;i++)
        {
           cout<<endl<<list[i];
        }
    }
}

void erase()
{
    cout<<endl<<"Enter the event to be removed:";
    string del_eve;
    cin >> del_eve;
    int i=0;
    while(i < list.size())
    {
        if(list[i] == del_eve)
        {
            list.erase(list.begin() + i);
            cout<<endl<<"Successfully removed";
            return;
        }
        i++;
    }
    cout<<endl<<" Event not found !";
}
