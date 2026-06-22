
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int area,mins,maxs,maxarea=0;
        mins=0;
        maxs=heights.size()-1;
        while(mins<maxs)
        {
            area=min(heights[mins],heights[maxs])*(maxs-mins);
            maxarea=max(area,maxarea);
            if(heights[mins]<heights[maxs])
            {
                mins++;
            }
            else
            {
                maxs--;
            }
        }
        return maxarea;
    }
};
