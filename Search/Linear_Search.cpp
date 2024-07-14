#include<iostream>
using namespace std;

int main()
{
    int a[50];
    cout <<"Enter your Array Size" << endl;
    int n,i,v;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }


    cout << endl<< "** Find Array index **"<< endl;
    cout << "Enter the value : ";
    cin >> v;
    for (i=0;i<n;i++)

    {

        if(a[i]==v)
        {
            cout <<"Value find at this index : " ;
            cout << i;
        }

    }


}
