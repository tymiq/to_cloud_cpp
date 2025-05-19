#include <iostream>
#include <vector>
using std::cout;

// #define nl cout << '\n';

int perform(std::vector<int> & vec, int & subseq_length) {
    int seq_ending_index = 0;
    int seq_starting_index = 0;
    int peak_streak = 0;
    int curr_streak = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] >= vec[i+1]) {
            curr_streak++;
            if (!(curr_streak < peak_streak)) {       
                peak_streak = curr_streak;
                seq_ending_index = i;
            }
        }
    }
    seq_starting_index = seq_ending_index - peak_streak;
    subseq_length = peak_streak;
    return seq_starting_index;
}   

std::vector<int> get_subseq_vec(std::vector<int> & vec, int starting_i, int & length) {
    std::vector<int> subseq_vec(vec.begin() + starting_i, vec.begin() + starting_i + length);
    return subseq_vec;
}
    
void print(std::vector<int> & vec) {
    for (auto & element : vec) {
        cout << element << ' ';
    }
    cout << '\n';
}

int main()
{
    std::vector<int> vec = {1,2,5,8,15,2,51,52,6,1,6,4};
    int subseq_length = 0;
    cout << "Your seq: ";
    print(vec);
    int starting_i = perform(vec, subseq_length);
    std::vector<int> ans = get_subseq_vec(vec, starting_i, subseq_length);
    cout << "Highest growing subsequence: ";
    print(ans);
    cout << "Length of it: " << subseq_length << '\n';
    // Let the user put the seq
    
    return 0;
}
