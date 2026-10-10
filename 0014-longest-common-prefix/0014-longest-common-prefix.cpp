class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
        if (strs.size() == 0)
        {
            return answer;
        }
        for(int i=0;i<strs[0].length();i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (i >= strs[j].length() || strs[0][i] != strs[j][i])
                {
                    return answer;
                }
            }
            answer+=strs[0][i];
        }
        return answer;
    }
};