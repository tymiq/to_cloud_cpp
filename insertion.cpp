#include <iostream>
#include <vector>
using std::cout;

void insertion_sort(std::vector<int> & vec) {
    int size = vec.size();
    int temp;
    for (int i = 1; i < size; i++) {
        temp = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] >= temp) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = temp;
    }
}

void display_vec(std::vector<int> & vec) {
    for (auto & element : vec) {
        cout << element << ' ';
    }
    cout << '\n';
}

int main()
{
    std::vector<int> vec = {32,41,5,5,124,5,1245};
    display_vec(vec);
    insertion_sort(vec);
    display_vec(vec);
    return 0;
}
