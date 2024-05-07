#include <iostream>

using namespace std;
long long tichLonNhat(long long a, long long b)
{
    return a>b?a:b;
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
    int max1=-1e9-1, max2=-1e9-1, min1=1e9+1, min2=1e9+1;
    for(int i=0; i<n; i++)
    {
        if(M[i]>max1)
        {
            max2=max1;
            max1=M[i];
        }
        else if(M[i]>max2)
        {
            max2=M[i];
        }
        if(M[i]<min1)
        {
            min2=min1;
            min1=M[i];
        }
        else if(M[i]<min2)
        {
            min2=M[i];
        }
    }
    long long res = tichLonNhat(max1*max2, min1*min2);
    cout<<"Tich hai so lon nhat la: "<<res<<endl;
    return 0;
}
