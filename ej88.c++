#include <iostream>
using namespace std;

int countTypes(int numCX, int numPX, int numCY, int numPY, int numG, int numM);

int main()
{
    int numCapsX;
    int numPotesX;
    int numCapsY;
    int numPotesY;
    int numGorres;
    int numMitjons;
    
    while (cin >> numCapsX >> numPotesX >> numCapsY >> numPotesY >> numGorres >> numMitjons)
    { countTypes(numCapsX, numPotesX, numCapsY, numPotesY, numGorres, numMitjons); }
    
    return 0;
}

int countTypes(int numCX, int numPX, int numCY, int numPY, int numG, int numM)
{
    int X;
    int Y;
    int b;
    int c;
    int provNum;
    // (numCX * X) + (numCY * Y) = numG
    // (numPX * X) + (numPY * Y) = numM
    
    if (numCX > numPX)
    {
        provNum = 0 - numCX;
        b = numCY + (provNum * numPY);
        c = provNum * numM;
        Y = (numG + c) / b;
        X = (numG - Y) / numCX;
        
    }else if (numCX < numPX)
    {
        provNum = 0 - numPX;
        b = numPY + (provNum * numCY);
        c = provNum * numG;
        Y = (numM + c) / b;
        X = (numG - Y) / numCX;
    }
    
    
    cout << X << " " << Y << endl;
    
    return 0;
}
