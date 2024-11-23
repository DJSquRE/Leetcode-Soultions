class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();

        vector<vector<char>> rotatedbox(n,vector<char>(m));

        for(int i=0;i<m;i++){
            int ptr2=0;
            for(int j=0;j<n;j++){
                if(box[i][j]=='.'){
                    if(box[i][ptr2]=='#'){
                        swap(box[i][ptr2],box[i][j]);
                    }
                    ptr2++;
                }
                else if(box[i][j]=='*'){
                    ptr2=j+1;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rotatedbox[j][m-i-1]=box[i][j];
            }
        }
        return rotatedbox;
    }
};