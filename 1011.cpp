class Solution {

public:

bool isPossible(vector<int>wt, int maxw, int days)

{

    int d=1, curr=0;



    for(auto w: wt){

        if(w+curr<=maxw)

            curr+=w;

        else{

            d++;

            curr=w;

        }

    }



    if(d<=days)

        return true;

    return false;

}



 int shipWithinDays(vector<int>& weights, int days) {

     int low=0,  high=0;



     for(auto w: weights){

        low=max(low, w);

        high+=w;

     }   



    int ans;



    while(low<=high)

    {

        int mid=(low+high)/2;



        if(isPossible(weights, mid, days)){

            ans=mid;

            high=mid-1;

        }

        else    

            low=mid+1;

    }

    return low;

    }

};