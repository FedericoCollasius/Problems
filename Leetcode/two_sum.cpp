#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {3, 3};
    int target = 6;

    std::vector<int> res; 
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if (nums[i]+nums[j]==target){
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    
    for (int n : res)
        std::cout << n << ' ';
    std::cout << '\n';

    return 0; 
}
