#include <iostream>
using namespace std;
int main()
{int a[20][20],b[20][20],c[20][20],i,j,m,n;
   cout <<"n=";cin >>n;
   cout<<"m=";cin>>m;
   for(i=1;i<=n;i++)
      for(j=1;j<=m;j++)
         {
          cout<<"a["<<i<<"]["<<j<<"]=";cin>>a[i][j];
          }
   for(i=1;i<=n;i++)
      for(j=1;j<=m;j++)
         {
          cout<<"b["<<i<<"]["<<j<<"]=";cin>>b[i][j];
         } 
  for(i=1;i<=n;i++)
     for(j=1;j<=m;j++)
        c[i][j]=a[i][j]+b[i][j];
   for(i=1;i<=n;i++)
      {
        for(j=1;j<=m;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
       }
   
   getchar("x");
   return 0;

  }