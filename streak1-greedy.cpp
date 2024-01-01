class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count=0, i=0;
        while(count<g.size() && i<s.size()){
            if(s[i]>=g[count]){
                count++;
            }
            i++;
        }

        return count;
    }
};