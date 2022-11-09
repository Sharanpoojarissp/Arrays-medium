class Solution{
public:	
	int search(int A[], int N){
	  
	int answer = 0;
	    
	    for(int i = 0; i<N ; i++){
	        answer = answer ^ A[i];

	    }
	    return answer;
	}
};
