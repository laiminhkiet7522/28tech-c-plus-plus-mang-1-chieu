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
    int max=M[0];
    cout<<"Cac phan tu khong nho hon so cac phan tu dang truoc no la:\n";
    for(int i=0; i<n; i++)
    {
        if(M[i]>=max)
        {
            cout<<M[i]<<"\t";
        }
        if(M[i]>max)
        {
            max=M[i];
        }
    }
    cout<<endl;
}
