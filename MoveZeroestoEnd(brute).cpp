class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    vector<int> temp(n, 0);
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	            temp[k++]=arr[i];
	    }
	    long long tempsize;
	    for(int i=0;i<temp.size();i++)
	    {
	        arr[i]=temp[i];
	        tempsize++;
	    }
	    
	    for(int i=tempsize;i<n;i++)
	    {
	        arr[i]=0;
	    }
	    
	}
};
