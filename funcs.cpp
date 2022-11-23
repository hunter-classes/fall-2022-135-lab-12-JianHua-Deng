#include "funcs.h"

//Task A
std::vector<int> makeVector(int n){
    std::vector<int> newVector;
    for(int i = 0; n > 0 && i < n - 1; i++){
       newVector.push_back(i);
    }//end for loop
    return newVector;
}//end makeVector function

//Task B
std::vector<int> goodVibes(const std::vector<int> &v){
    std::vector<int> newVector;
    for(int i = 0; i < v.size(); i++){
        if(v.at(i) >= 0){
            newVector.push_back(v.at(i));
        }//end if conditon
    }//end for loop
    return newVector;
}//end goodVibes function

//Task C
void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    std::vector<int> newVector;
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta.at(i));
    }//end for loop
    vegeta.clear();
}//end gogeta function

//Task D
std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> newVector, larger, smaller;
    if(v1.size() > v2.size()){
        larger = v1;
        smaller = v2;
    }else{
        larger = v2;
        smaller = v1;
    }

    for(int i = 0; i < larger.size(); i++){
        if(i < smaller.size()){
            newVector.push_back(larger.at(i) + smaller.at(i));
        }else{
            newVector.push_back(larger.at(i));
        }//end else condition

    }//end for loop

    return newVector;
}//end sumPairWise