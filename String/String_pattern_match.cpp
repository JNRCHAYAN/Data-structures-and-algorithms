#include<iostream>
using namespace std;
int main()
{
    string st, pt;
    getline(cin, st);
    getline(cin, pt);
    int m= st.length();
    int n= pt.length();

    for(int i=0;i<=m-n;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if(st[j+i]!=pt[j])
            {
                break;
            }
        }
        if(j==n)
        {
            cout << "Pattern match "<< i << endl;

        }
    }
}