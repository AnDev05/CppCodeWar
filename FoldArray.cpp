/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
        while (runs-- > 0){
            int size = array.size();
            for (int i = 0; i < size / 2; ++i)
                array[i] += array[(size - 1) - i];
            array.erase(array.begin() + ((size + 1) / 2), array.end());
        }
        return array;
    }
};


class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
       std::vector<int> fold;
       int k=0;
       if(array.size()%2==0) k=1;
       
       for(int i=0;i<=array.size()/2-k;i++){
           fold.push_back(array.at(i));
       }
       int i=0;
       for(int j=array.size()-1;j>array.size()/2-k;j--){
           fold.at(i)=array.at(i)+array.at(j);
           i++;
       }
       runs--;
       if(runs==0)
           return fold;
       return foldArray(fold,runs); 
    }
};