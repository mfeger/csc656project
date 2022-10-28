#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   for(int64_t i = 0; i <= N; i++ )
    A[i] = i;
   printf(" inside sum_vector problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
   unsigned long long sum = 0;
   for(int64_t i = 0; i <= N; i++ )
      sum+=A[i];

      printf("sum: %d\n", sum);
   printf(" inside sum_vector perform_sum, N=%lld \n", N);

   return 0;
}
