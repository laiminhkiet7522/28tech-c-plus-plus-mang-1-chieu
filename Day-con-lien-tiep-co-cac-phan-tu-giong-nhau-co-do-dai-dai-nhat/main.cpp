#include <iostream>

using namespace std;
int soLonNhat(int a, int b)
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
    int res=0, dem=1;
    for(int i=1; i<n; i++)
    {
        if(M[i]==M[i-1])
        {
            dem++;
        }
        else
        {
            dem=1;
        }
        res = soLonNhat(res, dem);
    }
    cout<<"Day con lien tiep co cac phan tu giong nhau co do dai dai nhat la: "<<res<<endl;
}
