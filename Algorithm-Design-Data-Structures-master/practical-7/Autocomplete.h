#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <bits/stdc++.h>

using namespace std;

class Autocomplete {
 private:
  struct TrieNode {
    bool term;
    vector<TrieNode*> children = vector<TrieNode*> (26, nullptr);
    TrieNode() { term = false; }
  };
  TrieNode* root = new TrieNode();

 public:
  void insert(string word);
  vector<string> getSuggestions(string partialWord);
};

#endif
