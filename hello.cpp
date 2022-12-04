#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    auto now = chrono::system_clock::now();
    time_t end_time = chrono::system_clock::to_time_t(now);

    cout << "\nCurrent Time and Date: " << ctime(&end_time) << std::endl;

    cout << "Compiler Paths are OK!, Start Programming...\n"
         << endl;
    cout << "Checking Git\n\n";

    return 0;
}