#include <iostream>
#include <chrono>

using namespace std;

int main()
{
<<<<<<< HEAD
    cout << "Hello, this is Hamza. " << endl;
    cout << "This is my first C++ Program. " << endl;
    cout << "Updated date : 27 NOV 2022" << endl;
    cout << "Star Learning!";
=======
    auto now = chrono::system_clock::now();
    time_t end_time = chrono::system_clock::to_time_t(now);

    cout << "\nCurrent Time and Date: " << ctime(&end_time) << std::endl;

    cout << "Compiler Paths are OK!, Start Programming...\n"
         << endl;
    cout << "Checking Git Again Now\n\n";

>>>>>>> 98cd7f8299050d0ab17e382c8332795d2fdd08c4
    return 0;
}