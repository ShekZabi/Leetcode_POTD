class Solution {
public:
    int count(string s)
    {
        int vowels=0;

        for(int i=0;i<s.size();i++)
        {
            char ch = tolower(s[i]);

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
        }

        return vowels;
    }
    bool halvesAreAlike(string s) {


        string first,second;

        for(int i=0;i<s.size()/2;i++)
        first.push_back(s[i]);

        for(int i=s.size()/2;i<s.size();i++)
        second.push_back(s[i]);

        int vowels1=0;

        vowels1=count(first);

        int vowels2=0;

        vowels2=count(second);


        return vowels1==vowels2;




        
    }
};
