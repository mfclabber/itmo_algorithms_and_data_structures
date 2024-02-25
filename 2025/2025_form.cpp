#include <iostream>

int main(){
    int m, n, k;
    int team_size, rem, extTeamSize, res = 0;
    std::cin >> m;

    for(int i = 0; i < m; ++i){
        std::cin >> n >> k;
        
        res = 0;
        team_size = n / k;
        extTeamSize = team_size + 1;
        rem = n % k; // Количество бойцов, которые нужно равномерно распределить по нескольким командам

        res = ((n - extTeamSize * rem) * (n - team_size) + (extTeamSize * rem) * (n - extTeamSize)) / 2;

        std::cout << res << "\n";
    }
}