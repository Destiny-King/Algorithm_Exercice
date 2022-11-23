//
// Created by Destiny on 2022/11/23.
//

#ifndef RECALLALGORITHM_FINDITINERARY_H
#define RECALLALGORITHM_FINDITINERARY_H

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class FindItinerary {
private:
  // unordered_map<出发机场, map<到达机场, 航班次数>> targets
  unordered_map<string, map<string, int>> targets;
  bool backtracking(int ticketNum, vector<string> &result);

public:
  vector<string> findItinerary(vector<vector<string>> &tickets);
};

#endif // RECALLALGORITHM_FINDITINERARY_H
