#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> height = {1, 4, 7, 4, 8, 5};
    int n = height.size();
    int lp = 0, rp = n - 1;
    int ans = 0, maxwidth = 0;
    while (lp < rp)
    {
        int width = rp - lp;
        int currheight = min(height[lp], height[rp]);
        int currwidth = width * currheight;
        maxwidth = max(maxwidth, currwidth);
        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }
    cout << "max width is==>" << maxwidth;
}