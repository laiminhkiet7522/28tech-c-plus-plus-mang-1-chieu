#include <iostream>

using namespace std;
int kiemTraDoiXung(int a[], int n)
{
    int l=0, r=n-1;
    while(l<r)
    {
        if(a[l]!=a[r])
        {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
/*
Cach 2:
int kiemTraDoiXung(int a[], int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
*/
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
    int ketQua=kiemTraDoiXung(M,n);
    if(ketQua)
    {
        cout<<"Mang doi xung!"<<endl;
    }
    else
    {
        cout<<"Mang khong doi xung!"<<endl;
    }
}
