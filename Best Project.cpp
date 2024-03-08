#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n[t];
    
    for(int z=0; z<t; z++)
     {
      cin>>n[z];
     }
    
    for(int i=0; i<t; i++)
    {
         if(n[i]%7==0){cout<<n[i]<<endl;}
         else
         {
          int c=n[i];
          while(n[i]%7!=0)
          {
            int a=n[i];
            n[i]+=1;
            if(n[i]%7==0)
            {
                int b=n[i];
                while(a%7!=0)
                {
                a-=1;
                if(a%7==0)
                {
                  break;
                }
                }
                if(a/10==c/10){cout<<a<<endl;}
                else if(b/10==c/10){cout<<b<<endl;}
                break;
            }
          }

          }
    }

}
