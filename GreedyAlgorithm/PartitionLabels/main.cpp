//
// Created by Destiny on 2022/11/15.
//
#include "PartitionLabels.h"

int main() {
  system("chcp 65001");

  PartitionLabels partitionLabels;

  string S = "ababcbacadefegdehijhklij";
  vector<int> ret = partitionLabels.partitionLabels(S);
  for (int i = 0; i < ret.size(); ++i) {
    cout << ret[i] << " ";
  }
  cout << endl;

  return 0;
}