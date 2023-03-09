#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int main()
{
    int a[5]={1,2,3,4,5};
    std::cout<<sum_min_max(a, 5)<<std::endl;
    return 0;
}
