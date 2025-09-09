class Solution {
public:
    int minDistance(string word1, string word2) {
        int s1 = word1.size(),s2 = word2.size();
        vector<vector<int>> dp(s1+1,vector<int>(s2+1,0));
        for(int i=0;i<=word1.size();i++){
            dp[i][0] = i;
        }
        for(int i=0;i<=word2.size();i++){
            dp[0][i] = i;
        }
        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1],dp[i-1][j-1]});
                }
            }
        }
        return dp[word1.size()][word2.size()];
    }
};
