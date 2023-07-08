class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int first_occurence(int arr[],int n,int x){
		    int l=0;
		    int r=n-1;
		    int ans=0;
		    while(l<=r){
		       int mid=(l+r)/2;
		        
		        if(arr[mid]==x){
		            ans=mid;
		            r=mid-1;
		        }
		        else if(arr[mid]<x){
		            l=mid+1;
		        }
		        else{
		            r=mid-1;
		        }
		        
		    }
		    return ans;
		}
			int last_occurence(int arr[],int n,int x){
		    int l=0;
		    int r=n-1;
		    int ans=-1;
		    while(l<=r){
		      int  mid=(l+r)/2;
		        
		        if(arr[mid]==x){
		            ans=mid;
		            l=mid+1;
		        }
		        else if(arr[mid]<x){
		            l=mid+1;
		        }
		        else{
		            r=mid-1;
		        }
		        
		    }
		    return ans;
		}
	int count(int arr[], int n, int x) {
int first=first_occurence(arr,n,x);
int last=last_occurence(arr,n,x);
return last-first+1;
	}
};

