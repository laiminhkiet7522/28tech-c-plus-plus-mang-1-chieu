#include <iostream>

using namespace std;
int kiemTra(int n)
{
    int c1=0, c9=0;
    while(n!=0)
    {
        int temp=n%10;
        if(temp==1)
        {
            c1=1;
        }
        if(temp==9)
        {
            c9=1;
        }
        n/=10;
    }
    return c1&&c9;
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
    int result=0;
    cout<<"Cac so dep co trong mang la:\n";
    for(int i=0;i<n;i++)
    {
        if(kiemTra(M[i]))
        {
            cout<<M[i]<<"\t";
            result=1;
        }
    }
    if(!result)
    {
        cout<<"-1 (Khong ton tai so dep)"<<endl;
    }
}
