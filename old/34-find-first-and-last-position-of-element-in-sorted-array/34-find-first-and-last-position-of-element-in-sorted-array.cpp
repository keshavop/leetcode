class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int n=a.size();
        int low=0,hig=n-1,mid;
        bool f= true;
        vector<int>v;
        
        while(low<=hig){
            mid=(low+hig)/2;
            if(a[mid]==target){
                if(mid==0){
                    v.push_back(0);
                    f=false;
                    break;
                }
                else if(a[mid]!=a[mid-1]){
                    v.push_back(mid);//here we are first checking for first occurence
                    f= false;
                    break;
                }
                else hig=mid-1;// there exist another elemnt equal to target on  the right side 
            }
            else if(a[mid]>target) hig=mid-1;
            else low=low+1;
        }
        
        if(f){
            v.push_back(-1);v.push_back(-1);
            return v;
        }
        
        // now lets check for the last occurence if you understood the first occurence you will 
        // understand this one wthout any problem
        
        low=0,hig=n-1;   // reassigning the values
        
            while(low<=hig){
                mid=(low+hig)/2;
                if(a[mid]==target){
                    if(mid==n-1){
                        v.push_back(n-1);
                        break;
                    }
                    else if(a[mid]!=a[mid+1]){
                        v.push_back(mid);//here we check for last occurence
                        break;
                    }
                    else low=mid+1;// there exist another elemnt equal to target on  the left side 
                }
                else if(a[mid]>target) hig=mid-1;
                else low=low+1;
            }
        return v;
    }
};