#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Nhap n la so phan tu mang (n>0): ";
        cin>>n;
    }
    while(n<=0);
    int M[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<": ";
        cin>>M[i];
    }
    cout<<"Cac phan tu lien ke trai dau la:\n";
    for(int i=0; i<n; i++)
    {
        if(i==0 && M[0]*M[1]<0)
        {
            cout<<M[i]<<"\t";
        }
        else if(i==n-1 && M[n-1]*M[n-2]<0)
        {
            cout<<M[i]<<"\t";
        }
        else if(M[i]*M[i-1]<0 || M[i]*M[i+1]<0)
        {
            cout<<M[i]<<"\t";
        }
    }
}
