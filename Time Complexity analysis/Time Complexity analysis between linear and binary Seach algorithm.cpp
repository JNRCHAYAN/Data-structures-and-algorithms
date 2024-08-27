#include<iostream>
using namespace std;

int countar1 =0, countar2 =0;
void binary_search(int arr[],int n, int item)
{
   int  l = 0;
    int u = n - 1;
    int middle = (l+u)/2;
   while (l <= u)
    {
     countar2++;
    if (arr[middle] < item)
    {
            l = middle + 1;
    }
    else if (arr[middle] == item)
        {
            break;
        }
        else
        u = middle - 1;
        middle = (l + u)/2;
    }
}

void linear_serach(int arr[],int n, int item)
{
    for(int i=0;i<n;i++)
    {
        countar1++;
        if(arr[i]==item)
        {
            return;
        }

    }
}

int main()
{
   int arr[] = {1,4,5,8,10,12,14,16,18,19,20,21};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout  << "Our Array : "<< "1, 4, 5, 8, 10, 12, 14, 16, 18, 19, 20, 21" << endl <<endl;

    int item_to_search = 1;
    cout << "** Best Case ** "<<endl;
    cout << "Search Item : "<<item_to_search << endl;
    binary_search(arr,n,item_to_search);
    linear_serach(arr,n,item_to_search);
    cout <<"Linear Search Track : "<< countar1 << endl;
    cout <<"Binary Search Track : "<< countar2 << endl;
    countar1 =0, countar2 =0;
    cout << endl;
    cout << endl;

    cout << "** Avgarage Case ** "<<endl;
    item_to_search = 12;
    cout << "Search Item : "<<item_to_search << endl;
    binary_search(arr,n,item_to_search);
    linear_serach(arr,n,item_to_search);
    cout <<"Linear Search Track : "<< countar1 << endl;
    cout <<"Binary Search Track : "<< countar2 << endl;
    countar1 =0, countar2 =0;
    cout << endl;
    cout << endl;


    cout << "** Worst Case ** "<<endl;
    item_to_search = 21;
    cout << "Search Item : "<<item_to_search << endl;
    binary_search(arr,n,item_to_search);
    linear_serach(arr,n,item_to_search);
    cout <<"Linear Search Track : "<< countar1 << endl;
    cout <<"Binary Search Track : "<< countar2 << endl;
    countar1 =0, countar2 =0;
    cout << endl;
    cout << endl;

}
