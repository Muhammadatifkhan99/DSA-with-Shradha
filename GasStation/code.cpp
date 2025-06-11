#include<iostream>
#include<vector>
#include <algorithm>
#include <deque>

using namespace std;

int gasStation(vector<int> &gas,vector<int> &cost){
    int totGas;
    int totCost;

    for(int val: gas){
        totGas += val;
    }

    for(int val: cost){
        totCost += val;
    }

    if(totGas < totCost){
        return -1;
    }

    int start = 0;
    int currGas = 0;

    for(int i{0};i<gas.size();i++){
        currGas += gas[i] - cost[i];
        if(currGas < 0){
            start = i+1;
            currGas = 0;
        }
    }
    return start;
}

int gasStationOptimal(vector<int> &gas,vector<int> &cost){
    int totGas = 0;
    int totCost = 0;

    int start = 0;
    int currGas = 0;

    for(int i{0};i<gas.size();i++){
        totGas += gas[i];
        totCost += cost[i];

        currGas += (gas[i] - cost[i]);
        if(currGas < 0){
            start = i+1;
            currGas = 0;
        }
    }
    return totGas < totCost ? -1 : start;
    //     if(totGas < totCost){
    //     return -1;
    // }
    // return start;
}


int main(){
    vector<int> gas = {1,2,4,5,9};
    vector<int> cost = {3,4,1,10,1};

    cout << gasStationOptimal(gas,cost) << endl;
    // cout << " Hello World" << endl;
    return 0;
}
