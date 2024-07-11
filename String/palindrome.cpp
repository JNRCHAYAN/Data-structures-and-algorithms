#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter your String : ";
    cin >> str;
    int i,e=str.length()-1;
    bool test = true;
    for(i=0;i<e;i++)
    {
        if(str[i] != str[e])
        {
            test = false;
            break;
        }
        e--;
    }
    if (test)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    
}