//
// Created by Destiny on 2022/11/23.
//

#include "FindItinerary.h"

bool FindItinerary::backtracking(int ticketNum, vector<string> &result) {
  if (result.size() == ticketNum + 1) {
    return true;
  }
  for (pair<const string, int> &target : targets[result[result.size() - 1]]) {
    if (target.second > 0) {
      result.push_back(target.first);
      target.second--;
      if (backtracking(ticketNum, result))
        return true;
      result.pop_back();
      target.second++;
    }
  }
  return false;
}

vector<string> FindItinerary::findItinerary(vector<vector<string>> &tickets) {
  targets.clear();
  vector<string> result;
  for (const vector<string> &vec : tickets) {
    targets[vec[0]][vec[1]]++;
  }
  result.push_back("JFK");
  backtracking(tickets.size(), result);
  return result;
}
