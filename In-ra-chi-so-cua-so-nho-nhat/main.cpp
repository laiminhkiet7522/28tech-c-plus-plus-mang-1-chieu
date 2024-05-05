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
    int soNhoNhat = M[0];
    int chiSo;
    for(int i=1; i<n; i++)
    {
        //Neu muon lay chi so cuoi khi co nhieu gia tri nho bang nhau thi dieu kien la (soNhoNhat>=M[i])
        if(soNhoNhat>M[i])
        {
            soNhoNhat=M[i];
            chiSo=i;
        }
    }
    cout<<"So nho nhat trong mang la: "<<soNhoNhat<<endl;
    cout<<"Chi so dau tien cua so nho nhat la: "<<chiSo<<endl;
}
