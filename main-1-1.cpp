#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main()
{
    int array[4][4]={{1,1,3,5},{1,0,4,3},{1,2,4,4},{1,1,1,3}};
    std::cout<< sum_diagonal(array);
    
}

