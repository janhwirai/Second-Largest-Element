#include<bits/stdc++.h>
using namespace std;


class Sol{
public:
    int lar2(int arr[],int n){
    int secLargest=-1;
	    int largest= -1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            largest = arr[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        // secondLargest < arr[i] < largest
	        if(arr[i]<largest && secLargest<arr[i])
	        {
	            secLargest = arr[i];
	        }
	    }
	    
	    return secLargest;
    }
};
int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"\nEnter number of elements:";
        cin>>n;
        int arr[n];
        cout<<"\nEnter array elements:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Sol s;
        cout<<"\nThe Second largest element of given array is " <<s.lar2(arr,n)<<"\n";
    }
    return 0;
}