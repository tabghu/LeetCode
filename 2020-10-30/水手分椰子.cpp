#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    while (1)
    {
        int j;
        sum = i;
        for (j = 0; j < 5; j++)
        {
            sum *= 5;
            if (sum % 4 != 0)
            {
                break;
            }
            sum /= 4;
            sum += 1;
        }
        if (j == 5)
        {
            break;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}