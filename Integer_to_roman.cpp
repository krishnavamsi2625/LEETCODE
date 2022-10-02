class Solution {
public:
    int romanToInt(string s) {
       
        map<char,int> db;
        db.insert(pair<char,int>('I',1));
        db.insert(pair<char,int>('V',5));
        db.insert(pair<char,int>('X',10));
        db.insert(pair<char,int>('L',50));
        db.insert(pair<char,int>('C',100));
        db.insert(pair<char,int>('D',500));
        db.insert(pair<char,int>('M',1000));
        int i=0,ans=0;;
        while(i<s.length())
        {
            
            cout<<db[s[i]]<<endl;
            if(db[s[i+1]]>db[s[i]])
            {   
                ans=ans-db[s[i]];
                
            }
            else
            {
                ans=ans+db[s[i]];
            }
            i++;
        }
        return ans;
        
    }
};