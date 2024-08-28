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

    cout << number[0] << endl;
    cout << number[1]<< endl;
    cout << number[2]<< endl;
}