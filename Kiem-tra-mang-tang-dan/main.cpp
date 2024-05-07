#include <iostream>

using namespace std;

int kiemTraMangTangDan(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            return 0;
        }
    }
    return 1;
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
    int result=kiemTraMangTangDan(M,n);
    if(result)
    {
        cout<<"Mang ban vua nhap tang dan"<<endl;
    }
    else
    {
        cout<<"Mang ban vua nhap khong tang dan"<<endl;
    }
}
