#include <iostream>
#include<random>
using namespace std;
int main()
{
   //number guessig game
    random_device rd;
    mt19937 gen(rd());
    int min_value = 1;
    int max_value = 25;
    uniform_int_distribution<> dis(min_value, max_value);
    int findnum = dis(gen);
    cout<<findnum;
    cout<<"Description:\n";
    cout<<"  This game is created to guess a number based on conditions(bigger or smaller). In this game the range of number start from 0 to 25\n\n";
    int flag = 1;
    while(flag)
    {
        cout<<"Enter a number: ";
        int a;
        cin>>a;
        if(findnum > a)
        {
            cout<<"The answer is too smaller\n";
        }
        else if(findnum < a)
        {
            cout<<"The answer is too larger\n";
        }
        else if(findnum == a)
        {
            cout<<"Wow ! Sharp guess. Congratulations\n";
            flag = 0;
        }
    }
    cout<<"Game ends";
    return 0;
}
