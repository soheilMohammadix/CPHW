#include<iostream>
#define ARRAY_SIZE 10
using namespace std;

int main()
{
    int A[ARRAY_SIZE] = {1,8,11,17,19,22,27,32,35}, tmp;
    cin>> A[9];
    for(int i = 1; i < ARRAY_SIZE; ++i)
    {
        for (int j = 0; j < (ARRAY_SIZE-i); ++j)
        {
            if (A[j]>A[j+1])
            {
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }

    }
for(int i=0;i<10;i++)
{
    cout << A[i] << " ";
}

}
