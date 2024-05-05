#include <iostream>

using namespace std;
bool kiemTraToanLe(int n)
{
    while(n!=0)
    {
        int temp=n%10;
        if(temp%2==0)
        {
            return false;
        }
        n=n/10;
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
        cout<<"Nhap phan tu thu "<<i<<": ";
        cin>>M[i];
    }
    int demLe=0;
    for(int i=0; i<n; i++)
    {
        if(kiemTraToanLe(M[i]))
        {
            demLe++;
        }
    }
    cout<<"So luong cac so toan le la: "<<demLe<<endl;
    cout<<"Cac so toan le la:\n";
    for(int i=0; i<n; i++)
    {
        if(kiemTraToanLe(M[i]))
        {
            cout<<M[i]<<"\t";
        }
    }
}
