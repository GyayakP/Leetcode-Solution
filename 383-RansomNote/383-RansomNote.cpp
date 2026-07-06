// Last updated: 7/6/2026, 6:49:38 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size())
        {
            return false;
        }
        int f[26]={0};
        for(int i=0;i<magazine.size(); i++)
        {
            f[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size(); i++)
        {
            if(f[ransomNote[i]-'a']==0)
                return false;
            else if(f[ransomNote[i]-'a']>0)
            {
                f[ransomNote[i]-'a']--;
            }
        }
        return true;

    }
};