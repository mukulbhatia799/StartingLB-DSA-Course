// Print contiguous subarrays using recursion(subarrays are contiguous only.)

#include<iostream>
#include<vector>
using namespace std;

// doing in one function.
// void print_all_subarrays(vector<int> vec, int left, int right)
// {   // 1 2 3 4 5
//     if(vec.size() == 1) {
//         cout << vec[0]<< endl;
//         return ;
//     }
//     // base cond.
//     if(right >= vec.size()) {
//         if(left <= right) print_all_subarrays(vec, left+1, left+1);
//         return ;
//     }
//     for(int i = left; i <= right; i++)
//     {
//         cout << vec[i] << " ";
//     }
//     cout << endl;
//     print_all_subarrays(vec, left, right+1);
// }

void subarrays_from_ith(vector<int> vec, int left, int right)
{
    // base cond.
    if(right == vec.size()) return ;

    for(int i = left; i <= right; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // recursive function
    subarrays_from_ith(vec, left, right+1);
}

void print_subarrays(vector<int> vec)
{
    for(int lptr = 0; lptr < vec.size(); lptr++)
    {
        int rptr = lptr;
        subarrays_from_ith(vec, lptr, rptr);
    }
}

int main(){
    int n = 5;
    vector<int> vec{1, 2, 3, 4, 5};
    print_subarrays(vec);

    return 0;
}