#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3, total = 0;

    // seed with time(0)
    srand(time(0));

    // generate 3 random numbers between 0 and 99
    rdnum1 = rand() % 100;
    rdnum2 = rand() % 100;
    rdnum3 = rand() % 100;

    // compute total
    total = rdnum1 + rdnum2 + rdnum3;

    // print line 1 (three random numbers)
    cout << rdnum1 << " " << rdnum2 << " " << rdnum3 << endl;

    // print line 2 (total and average using integer division)
    cout << total << " " << total / 3 << endl;

    return 0;
}
