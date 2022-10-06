class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp=s;
        while(true)
        {   
            cout<<temp<<endl;
            char t=temp[0];
            for(int i=0;i<temp.length()-1;i++)
            {
                temp[i]=temp[i+1];
            }
            temp[temp.length()-1]=t;
            if(temp==goal)
            {
                return 1;
            }
            if(temp==s)
            {   
                break;
            }
            
        }
        return 0;
    }
};