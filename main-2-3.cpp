#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int main()
{
    int size=5;
    int a[5]={1,2,3,2,1};
    std::cout<<sum_if_palindrome(a, size);
    return 0;
}

