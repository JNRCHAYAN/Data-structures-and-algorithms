#include<iostream>
using namespace std;
 int main()
 {

     int n,i,j,temp;
     cout <<"Enter Your Array Size: ";
     cin>>n;
     int arr[n];
     cout  << "Enter Your Array : " ;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(i=1;i<n;i++) 
     {
         temp=arr[i];
         j=i-1;
         while(j>=0&&arr[j]>temp)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=temp;

     }
     cout << "After Sorting This Array : ";
     for(i=0;i<n;i++)
     {
        cout << arr[i] << " ";
     }
 }
