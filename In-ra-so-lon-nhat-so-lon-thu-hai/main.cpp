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
        cout<<"Nhap phan tu thu "<<i<<": ";
        cin>>M[i];
    }
    int max1=-1e9-1, max2=-1e9-1;
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
    }
    cout<<"So lon nhat trong mang la: "<<max1<<endl;
    cout<<"So lon thu hai trong mang la: "<<max2<<endl;
}
