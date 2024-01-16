class RandomizedSet {
public:

    set<int> s;
    RandomizedSet() {

        set<int> s;
        
    }
    
    bool insert(int val) {
        int flag=0;

        if(s.find(val)==s.end())
        flag=1;

        s.insert(val);

        if(flag==1)
        return true;

        return false;

        
    }
    
    bool remove(int val) {
        if(s.find(val)==s.end())
        return false;

        auto find = s.find(val);

        s.erase(find);

        return true;
        
    }
    
    int getRandom() {
        
        int number = rand() % s.size();

        return *s.begin()+number;
    }
};
