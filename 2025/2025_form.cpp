// O(n), где n - общее количество бойцов

#include <iostream>

int main(){
    int m, n, k;
    int team_size, rem, ext_team_size, res = 0;
    std::cin >> m;

    for(int i = 0; i < m; ++i){
        std::cin >> n >> k;
        
        res = 0;
        team_size = n / k;
        ext_team_size = team_size + 1;
        rem = n % k; // Количество бойцов, которые нужно равномерно распределить по нескольким командам

        res = ((n - ext_team_size * rem) * (n - team_size) + (ext_team_size * rem) * (n - ext_team_size)) / 2;

        std::cout << res << "\n";
    }
}