#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream in;
    string line;
    in.open("import\\timetable.csv");
    if (in.is_open()) {
        cout << "Opened Succesfull"<<endl;
    }
    else {
        cout << "Not opened" << endl;
        in.close();
        return -1;
    }
    int k = 0;
    while (k!=20) {
        getline(in, line);
        cout << line << endl;
        k++;
    }
    
    in.close();

    return 0;
}