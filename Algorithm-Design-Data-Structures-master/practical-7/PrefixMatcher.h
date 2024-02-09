#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <bits/stdc++.h>

using namespace std;

class PrefixMatcher {
 private:
  struct TrieNode {
    TrieNode* children[2];
    int index = -1;
  };
  TrieNode* root = new TrieNode();

 public:
  void insert(string address, int routerNumber);
  int selectRouter(string networkAddress);
};

#endif
