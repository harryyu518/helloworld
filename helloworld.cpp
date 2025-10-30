#include <iostream>
#include <vector>
#include <string>

using namespace std;

int addition(int a, int b){
    return a + b;
}

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << addition(5, 6) << endl;
}


