  vector<int> ar;
        int i=0,j=0,curr_sum=0, n = arr.size();
        
        while(j<n){
           curr_sum+=arr[j];
           if(curr_sum>= target){
               while(curr_sum>= target && j>=i){
                if(curr_sum== target){
                    // System.out.println((i+1)+" "+(j+1));
                    ar.push_back(i+1);
                    ar.push_back(j+1);
                  return ar;
               }else{
                   curr_sum-=arr[i];
                   i++;
               }
               
               }
           }
           j++;
        }
        ar.push_back(-1);
        return ar;