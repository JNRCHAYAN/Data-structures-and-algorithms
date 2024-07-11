#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
     cout <<"Enter Your Array Size: ";
     cin>>n;
     int arr[n];
     cout  << "Enter Your Array : " ;
     for(i=0;i<n;i++)
     {
       cin>>arr[i];
     }
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-1;j++)
        {

            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
     for(i=0;i<n;i++)
     {
        cout << arr[i] << " ";
     }

}
