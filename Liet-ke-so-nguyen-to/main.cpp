#include <iostream>

using namespace std;
bool kiemTraSoNguyenTo(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
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
    cout<<"Cac so nguyen to trong mang la:\n";
    for(int i=0; i<n; i++)
    {
        if(kiemTraSoNguyenTo(M[i]))
        {
            cout<<M[i]<<"\t";
        }
    }
}
