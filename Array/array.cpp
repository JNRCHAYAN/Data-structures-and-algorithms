#include<iostream>
using namespace std;
int main()
{
    int a[50],n;
    int i,p,v;
    cout << "** Print Array Value **"<< endl;
    cout << "Enter Array Size" << endl;
    cin >> n ;
    cout << "Enter Array Value" << endl;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "Your Array" << " ";
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }

   // Update Position value and old value remove

    cout<< endl << "** Update Position value **"<< endl;
    cout<< endl << "Enter the Position :  " << " ";
    cin >> p ;
    cout << "Enter the value : " << " ";
    cin >> v;
    a[p-1]=v;
    for(i=0; i<n;i++)
    {
        cout << a[i]  << " ";
    }

    // ADD  New Value
    cout<< endl << "** ADD  New Value **"<< endl;
    cout << endl<< "Enter the Position : " ;
    cin >> p ;
    cout << "Enter the value : ";
    cin  >> v;
    for (i=n-1; i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=v;
    n++;
       for(i=0; i<n;i++)
    {
        cout << a[i]  << " ";
    }

 // Delete position value

    cout<< endl << "** Delete position value **"<< endl;
    cout << endl << "Enter the position :";
    cin >> p;
    for (i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
       for(i=0; i<n;i++)
    {
        cout << a[i]  << " ";
    }


     cout << endl<< "** Find Array index **"<< endl;
    cout << "Enter the value : ";
    cin >> v;
    for (i=0;i<n;i++)
    {
        if(a[i]==v)
        {
            cout <<"Value fount at this index : " ;
            cout << i;

        }
    }






}
