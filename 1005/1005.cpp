#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n, sum = 0;
    std::cin >> n;

    std::vector<int> w(n);

    for(int i = 0; i < n; ++i){
        std::cin >> w[i];
        sum += w[i];
    }

    unsigned int bit_mask = pow(2, n) - 1;  
    int pack_sum, res = sum;
    for(int i = 0; i < bit_mask; ++i){
        pack_sum = 0;

        for(int j = 0; j < n; j++){
            if(i & (1 << j)) pack_sum += w[j];

            if (res > abs(sum - 2 * pack_sum)) res = abs(sum - 2 * pack_sum);
        } 
    }

    std::cout << res;
}