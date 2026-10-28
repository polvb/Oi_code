#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    int dd[n][m];
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> dd[i][j];
            if (j >= m)
            {
                i = 0;
            }
        }
    }
    
    
    
    
    return 0;
}
