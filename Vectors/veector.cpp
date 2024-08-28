// Verctor is as like as a array but it's dynamic 
// vector <object_type vector_name(size - not requried)

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> number;
    number.push_back(2);
    number.push_back(3);
    number.push_back(4);
    number.push_back(4);
    number.push_back(4);

    cout << "Size Of numbers : " << number.size() << endl;
    cout << "Capacity Of numbers : " << number.capacity()<< endl;
 
    vector<int> numbers(10,5);
    for(int i=0;i<numbers.size();i++)
    {
        cout << numbers[i] << endl;
    }
}