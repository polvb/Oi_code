#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    char dd[n][m];
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> dd[i][j];
        }
    }
    
    
    int isLine = 0;
    int lines = 0;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (dd[i][j] == '-')
            {
                isLine++;
                if (isLine == 2)
                {
                    lines++;
                }
            } else if (dd[i][j] != '-')
            {
                isLine = 0;
            }
        }
    }
    
    cout << lines;
    
    return 0;
}
