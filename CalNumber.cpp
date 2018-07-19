#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 
 */

int solution(int number) 
{
    int d3 = (number-1)/3;
    int d5 = (number-1)/5;
    int d15 = (number-1)/15;
    return (3+d3*3)*d3/2 + (5+d5*5)*d5/2 - (15+d15*15)*d15/2;
}

vector<int> tribonacci(std::vector<int> signature, int n)
{
    vector<int> result;
    result=signature;
    if(result.size()>n){
        for(int i=result.size()-1;i>=n;i--){
            result.pop_back();
        }
        return result;
    }
    
    int i=0;
    int j;
    while(result.size()<n){
        int sum=0;
        for(j=i;j<result.size();j++){
            sum+=result.at(j);
        }
        result.push_back(sum);
        j=i++;
    }
    return result;
}

int main() {
    
    cout << solution(10)<<endl;
    
    return 0;
}

