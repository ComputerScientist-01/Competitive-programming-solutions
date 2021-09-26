class Solution {
public:
    void Fill(vector<vector<int>>& image, int sr, int sc, int newColor,int color){
        
        if(sr<0 || sc<0 || sr>=image.size() ||sc>=image[0].size() || image[sr][sc] != color){
            return;
        }
        
        image[sr][sc]=newColor;
        
        Fill(image,sr-1,sc,newColor,color);
        Fill(image,sr+1,sc,newColor,color);
        Fill(image,sr,sc-1,newColor,color);
        Fill(image,sr,sc+1,newColor,color);
    }
     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]== newColor)
        {
            return image;
        }
        Fill(image,sr,sc,newColor, image[sr][sc]);
        return image;
        
    }
};