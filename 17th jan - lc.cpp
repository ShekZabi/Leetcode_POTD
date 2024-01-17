class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> m;

        int i;

        for(i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }

        set<int> s;

        for(auto& it:m)
        {
            int size = s.size();

            s.insert(it.second);

            if(size==s.size())
            return false;
        }

        return true;


        
    }
};
