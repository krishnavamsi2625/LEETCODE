class TimeMap {
public:
    unordered_map<string,map<int,string, greater<int> >> db;
    TimeMap() 
    {
            
    }
    
    void set(string key, string value, int timestamp) 
    {
        db[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) 
    {   
        // for (auto [key, value] : db) {
        //     cout<<key<<"##";
        //     for (auto [key2, value2] : value) {
        //         cout << key2 << " ";
        //     }
        //     cout << endl;
        // }
        // int temp = timestamp;
        // while (temp) {
        //     if (db[key].find(temp) != db[key].end()) {
        //         return db[key][temp];
        //     }
        //     temp --;
        // }
        for(auto x: db[key])
        {   
            if(x.first<=timestamp)
            {
                //cout<<x.first<<"||"<<x.second;
                return x.second;
            }
                
         }
        
        return "";

    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */