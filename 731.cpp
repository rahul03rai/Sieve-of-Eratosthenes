class MyCalendarTwo {
public:
    
    map<int, int> mp;
    
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        
        // increment the value of start 
        
        mp[start]++;
        
        // decrement the value of end
        
        mp[end]--;
        
        // traverse over map, if at any any moment we get count > 2, then we have found a triple booking
        
        int count = 0;
        
        for(auto x : mp)
        {
            count += x.second;
            
            if(count > 2)
                break;
        }
        
        // remove the inserted interval from map
        
        if(count > 2)
        {
            mp[start]--;
            
            mp[end]++;
            
            return false;
        }
        
        return true;
    }
};
/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */