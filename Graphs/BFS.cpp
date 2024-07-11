#include<iostream>
using namespace std;
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v)
{
 visited[v]=1;
 for(i=0;i<n;i++)
 {
     if(a[v][i] && ! visited[i])
     {
       
         q[++r]=i;
        
     }
 }
 if(f<=r)
 {
    bfs(q[f++]);
 }
}

int main()
{
    int v;
    cout<<endl<<"Enter the number of vertices :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    cout<<endl<<"Enter graph data in matrix from :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"Enter the string vertex :";
    cin>>v;
    bfs(v);
    cout<<endl<<"THE node which are rechable are :"<<endl;
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            cout<<i << " ";
        }
         else {
        cout<<endl<<"BFS/DFS is not possible. Not all are reachable ";
        break;

    }

    }
}
