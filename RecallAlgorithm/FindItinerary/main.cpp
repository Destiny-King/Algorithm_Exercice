//
// Created by Destiny on 2022/11/12.
//
#include "FindItinerary.h"

int main() {
  system("chcp 65001");

  FindItinerary findItinerary;

  vector<vector<string>> tickets = {{"JFK", "SFO"},
                                    {"JFK", "ATL"},
                                    {"SFO", "ATL"},
                                    {"ATL", "JFK"},
                                    {"ATL", "SFO"}};
  vector<string> ret = findItinerary.findItinerary(tickets);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}