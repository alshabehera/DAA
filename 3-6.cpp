#include <iostream>
using namespace std;
class xyz {
public:
    int power(int x, unsigned int y)
    {
        if (y == 0)
            return 1;
        else if (y % 2 == 0)
            return power(x, y / 2) * power(x, y / 2);
        else
            return x * power(x, y / 2) * power(x, y / 2);
    }
};

int main()
{
   xyz p;
    int x = -3;
    unsigned int y = 6;

    cout << p.power(x, y);
    return 0;
}
