//https://programmers.co.kr/learn/courses/30/lessons/42747

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end(), greater<int>());

    for(int i=0; i<citations.size(); i++){
        if(citations[i] < i+1)
            return i;
    }
}