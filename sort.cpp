#include <iostream>
using namespace std;
#define MAX 20

void insertion(int arr[],int n)
{ 
    int j,k,i;
    /*Insertion sort*/
    for(j=1;j<n;j++)
    {   
        k=arr[j]; /*k is to be inserted at proper place*/
        for(i=j-1;i>=0 && k<arr[i];i--)
        {   
            arr[i+1]=arr[i];
        }
        arr[i+1]=k;
    }
}

int main()
{
    int arr[MAX],i,n;
    cout<<"Enter the number of elements :";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cout<<"Enter elements :",i+1;
        cin>>arr[i];
    }

    cout<<"Unsorted list is :\n";
    for (i = 0; i < n; i++)
        cout<<arr[i]<<"\n";
        cout<<"\n";         
     
    insertion(arr,n);
    
    cout<<"Sorted list is :\n";
    for (i = 0; i < n; i++)
        cout<<arr[i]<<"\n";
        cout<<"\n";
    
    return 0;
}/*End of main()*/