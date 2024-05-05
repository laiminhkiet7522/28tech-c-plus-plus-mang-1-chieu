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
    int soNhoNhat=M[0], soLonNhat=M[0];
    for(int i=0; i<n; i++)
    {
        if(soNhoNhat>M[i])
        {
            soNhoNhat=M[i];
        }
        if(soLonNhat<M[i])
        {
            soLonNhat=M[i];
        }
    }
    cout<<"So nho nhat trong mang la: "<<soNhoNhat<<endl;
    cout<<"So lon nhat trong mang la: "<<soLonNhat<<endl;
}
