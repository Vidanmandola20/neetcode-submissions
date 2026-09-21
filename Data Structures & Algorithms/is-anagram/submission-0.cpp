class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> first(26,0);
        vector<int> second(26,0);
        int n = s.length();
        int m = t.length();

        for(int i=0;i<n;i++)
        {
            first[s[i] - 'a']++;
        }


        for(int j=0;j<m;j++)
        {
            second[t[j] - 'a']++;
        }



        for(int k=0;k<26;k++)
        {
            if(first[k] != second[k])
            {
                return false;
            }
        }


        return true;
    }
};
