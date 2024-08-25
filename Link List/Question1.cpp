#include<iostream>
using namespace std;

void InserstPosition(int a[],int n){
    int p,v;
    cout<< endl << "** ADD  New Value **"<< endl;
    cout << endl<< "Enter the Position : " ;
    cin >> p ;
    cout << "Enter the value : ";
    cin  >> v;
    for (int i=n-1; i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=v;
    n++;
       for(int i=0; i<n;i++)
    {
        cout << a[i]  << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Your Array Size : ";
    cin >>n;

    int arr[n];
    cout << "Enter Your Array Value : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    InserstPosition(arr,n);
}
