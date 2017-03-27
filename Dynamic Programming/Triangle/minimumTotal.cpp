class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int s = triangle.size();
        int *d = new int[s];
        for(int i=0;i<s;i++)
            d[i] = triangle[s-1][i];
        for(int i=s-2;i>=0;i--)
            for(int j=0;j<=i;j++)
                d[j] = min(d[j],d[j+1]) + triangle[i][j];
        return d[0];
    }
};
