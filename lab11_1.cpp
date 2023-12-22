#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

string grade[]={"A","B+","B","C+","C","D+","D","F","W"};
int yourgrade;

void getgrade()
{
    yourgrade = rand() % 9;
}

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    for(int i = 1; i<=3;i++)
    {
        cin.get();
    }
    srand(time(0));
    getgrade();
    cout << "You will get " << grade[yourgrade] << " in this 261102.";
}
