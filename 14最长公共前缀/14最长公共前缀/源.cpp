#include<iostream>
#include<iomanip>
#include<vector>
#include<String>
using namespace std;


/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string res = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            int j;
            for (j = 0; j < strs[i].size(); j++)
            {
                if (j == res.size()) break;
                if (strs[i][j] != res[j]) break;
            }
            res.erase(j);
            if (res.empty()) break;
        }
        return res;
    }
};
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        int length = strs[0].size();
        int count = strs.size();
        string res;
        for (int i = 0; i < length; i++)
        {
            char c = strs[0][i];
            for (int j = 0; j < count; j++)
            {
                if (i == strs[j].size()|| c != strs[j][i]) return res;
            }
            res.append(string(1,c));
        }
        return res;
    }
};

int main()
{
    vector<string> strs;
    strs.push_back("c");
    strs.push_back("c");
    strs.push_back("c");
    
}