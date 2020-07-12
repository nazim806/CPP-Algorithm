
#include <iostream>
using namespace std;

void moveDisc(int n, char rodFrom, char middleRod, char finalRod)
{
    if (n == 1)
    {
        cout << "Plate 1 from " << rodFrom << " to " << finalRod << endl;
        return;
    }

    moveDisc(n - 1, rodFrom, finalRod, middleRod);
    cout << "Plate  " << n << " from " << rodFrom << " to " << finalRod << endl;
    moveDisc(n - 1, middleRod, rodFrom, finalRod);
}

int main()
{
    moveDisc(3, 'A', 'B', 'C');
    return 0;
}