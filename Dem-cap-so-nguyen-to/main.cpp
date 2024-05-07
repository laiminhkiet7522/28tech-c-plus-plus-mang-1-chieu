#include <iostream>

using namespace std;

/*
Cach 1:
int uocChungLonNhat(int a, int b)
{
    int soNho=a>b?b:a;
    for(int i=soNho; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
    return 1;
}
*/

//Cach 2
int uocChungLonNhat(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return uocChungLonNhat(b,a%b);
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
    int dem=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(uocChungLonNhat(M[i],M[j])==1)
            {
                dem++;
            }
        }
    }
    cout<<"Cac cap so nguyen to la: "<<dem<<endl;
}
