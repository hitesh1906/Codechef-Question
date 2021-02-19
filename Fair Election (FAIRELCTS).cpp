/* Click or copy the link below to view question */
/* Do login into codechef before opening the link below */

//Problem statement https://www.codechef.com/JAN21C/problems/FAIRELCT



#include <iostream>
#include<algorithm>
using namespace std;

int election(long int arr1[],long int arr2[],long int sum1,long int sum2,int M,int N )
{
    int count=0;
    if(sum1>sum2)
        return 0;
    else
    { 
        int k=1;
         bool imp=false;
           while(sum1<=sum2)
           {

              if(k==N+1)
            {
                imp=true;
                break;
            }
            long int g=arr2[M-k];
            long int u=arr1[k-1];
            swap(arr1[k-1],arr2[M-k]);
            count++;
    
            sum1=sum1+g-u;
            sum2=sum2-g+u;
            k++;
          } 
        if(imp==true)
            return -1;
        else
            return count;
        
    }
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        long int sum1=0,sum2=0;
        long int arr1[N],arr2[M];
        for(int i=0;i<N;i++)
        {
            cin>>arr1[i];
            sum1=sum1+arr1[i];
        }


        for(int j=0;j<M;j++)
        {
            cin>>arr2[j];
            sum2=sum2+arr2[j];
        }

        sort(arr1,arr1+N);
        sort(arr2,arr2+M);

        //cout<<"sum1="<<sum1<<"sum2="<<sum2;
        int z=election(arr1,arr2,sum1,sum2,M,N);
        cout<<z<<endl;

    }
    return 0;
}
