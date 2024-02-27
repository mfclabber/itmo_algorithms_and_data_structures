// O(n*k), где n - общее количество бойцов, k - количество команд 

#include <iostream>

int main(){
    int m, n, k;
    int team_size, rem, res = 0;
    std::cin >> m;

    for(int i = 0; i < m; ++i){
        std::cin >> n >> k;
        
        res = 0;
        team_size = n / k;
        rem = n % k; // Количество бойцов, которых нужно равномерно распределить по нескольким командамa

        for(int j = 0; j < k - rem; ++j){
            n -= team_size;
            res += team_size * n;
        }

        for(int j = 0; j < rem; ++j){
            n -= (team_size + 1);
            res += (team_size + 1) * n;
        }

        std::cout << res << "\n";
    }
}