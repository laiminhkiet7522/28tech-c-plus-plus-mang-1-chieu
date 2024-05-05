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
    int demLe=0, demChan=0;
    for(int i=0;i<n;i++)
    {
        if(M[i]%2==0)
        {
            demChan++;
        }
        else
        {
            demLe++;
        }
    }
    cout<<"So chan co trong mang la: "<<demChan<<endl;
    cout<<"So le co trong mang la: "<<demLe<<endl;
}
