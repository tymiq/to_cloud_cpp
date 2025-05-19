#include <ctime>
#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;
 
int main()
{
    bool quit = false;
    std::time_t start_time = std::time(nullptr);
    char * full_date = std::asctime(std::localtime(&start_time));
    cout << full_date << '\n';
    const char * sub_str = full_date;
    cout << sub_str << '\n';
    for (int i = 0; i < *full_date; i++) {
        if (i < 6)
            cout << full_date[i] << '\n';
    }
    // while (!quit) {
    //     full_date = std::asctime(std::localtime(&start_time));
    //     cout << full_date << '\n';
    //     // if (full_date[])
    // }
}

// cout << result << '\n' << std::localtime(&result) << '\n';
// std::cout << std::asctime(std::localtime(&result))
//           << result << " seconds since the Epoch\n";
