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
    for(int i=0; i<n; i++)
    {
        if(M[i]*M[i-1]<0)
        {
            dem++;
        }
        else
        {
            dem=1;
        }
        res = soLonNhat(res, dem);
    }
    if(res==1)
    {
        cout<<"Day con lien tiep co hai phan tu lien ke nhau trai dau co do dai dai nhat la: 0"<<endl;
    }
    else
    {
        cout<<"Day con lien tiep co hai phan tu lien ke nhau trai dau co do dai dai nhat la: "<<res<<endl;
    }
}
