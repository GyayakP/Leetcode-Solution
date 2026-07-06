// Last updated: 7/6/2026, 6:49:10 PM
class Solution {
public:
    int maxNumberOfBalloons(string t) {
        int f[26]={0};

        for(int i=0;i<t.size();i++)
        {
            f[t[i]-'a']++;
        }
        return min({
            f['b' - 'a'],
            f['a' - 'a'],
            f['l' - 'a'] / 2,
            f['o' - 'a'] / 2,
            f['n' - 'a']
        });
    }
};