  class Solution{ 
   public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
 
 bool find3Numbers(int arr[], int n, int X)
    {
    
        //Your Code Here
        sort(arr, arr+n);
        for(int i=0; i<n-2; i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                long long int sum = arr[i] + arr[j] + arr[k];
                if(sum == X)
                {
                    return true;
                }
                else if(sum < X)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return false;
    }
};