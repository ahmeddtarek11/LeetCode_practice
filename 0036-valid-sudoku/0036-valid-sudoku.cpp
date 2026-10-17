class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = true;
        unordered_map<string,vector<char>> mp;


        for(int i=0;i<9;i++){
            string rowkey = std::format("row{}" , i);
            
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    auto where = find(mp[rowkey].begin() ,mp[rowkey].end() , board[i][j] );
                    if(where != mp[rowkey].end()) return ans == false;
                    mp[rowkey].push_back(board[i][j]);

                }
            }
        }

        for(int j=0;j<9;j++){
            string colkey = std::format("col{}" , j);
             for(int i=0;i<9;i++){
                 if(board[i][j] != '.'){
                    auto where = find(mp[colkey].begin() ,mp[colkey].end() , board[i][j] );
                    if(where != mp[colkey].end()) return ans == false;
                    mp[colkey].push_back(board[i][j]);
                 }
             }

        }
        for(int sq=0;sq<9;sq++){
            int startRow = (sq / 3) * 3;
            int startCol = (sq % 3) * 3;
            string sqkey = std::format("sqkey{}" , sq);
            for(int i = startRow; i < startRow + 3; i++){
                for(int j = startCol; j < startCol + 3; j++){
                     if(board[i][j] != '.'){
                    auto where = find(mp[sqkey].begin() ,mp[sqkey].end() , board[i][j] );
                    if(where != mp[sqkey].end()) return ans == false;
                    mp[sqkey].push_back(board[i][j]);
                 }
                    
                }
            }
        }


        return ans;


    }
};