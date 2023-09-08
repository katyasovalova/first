#include <iostream>

using namespace std;

int main()
{

    int n = 100;

    int i = 1, j = 0, k;
    bool g;

    while (j < n)
    {
        i++; g = 0;
        for (k=2;k<=i/2;k++)
            if ((i%k)==0)
            {
                g = 1;
                break;
            }
        if (g==0)
        {
        printf("%i   ",i);
        j++;
        }
    }

    return 0;
}
