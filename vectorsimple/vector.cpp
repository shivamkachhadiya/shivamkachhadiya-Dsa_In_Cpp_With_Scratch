#include <stdio.h>
#include <conio.h>
#include <vector>
#include <iostream>

using namespace std;
void printnumberofelements(vector<int> vec)
{
    for (int val : vec)
    {
        cout << val << endl;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3};
    printnumberofelements(vec);

    cout << "vector size" << vec.size() << endl;

    // push back in vector
    vec.push_back(22);
    // after pushback size

    cout << "after push 22 vector size" << vec.size() << endl;
    // after pushback view new elements
    printnumberofelements(vec);
    // delete last element
    cout << "delete last element"<<endl;
    vec.pop_back();
    // after pop back size
    cout << "vector size" << vec.size() << endl;
    // after pop view new elemtns
    printnumberofelements(vec);
}
