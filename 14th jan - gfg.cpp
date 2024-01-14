class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        
        set<vector<int>> s;
        
        vector<int> vec;
        
        for(int i=0;i<M;i++)
        {
            vector<int> that;
            
            that= matrix[i];
            
            int old_size= s.size();
            
            s.insert(that);
            
            if(s.size()==old_size)
            vec.push_back(i);
        }
        
        return vec;
        // Your code here
      
    } 
};
