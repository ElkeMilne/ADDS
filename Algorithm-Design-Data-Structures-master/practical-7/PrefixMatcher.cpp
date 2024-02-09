#include "PrefixMatcher.h"

void PrefixMatcher::insert(string address, int routerNumber) {
  TrieNode* currentNode = root;
  for (int i = 0; i < address.length(); i++) {
    int index = address[i] - '0';
    if (currentNode->children[index] == NULL) {
      currentNode->children[index] = new TrieNode();
    }
    currentNode = currentNode->children[index];
  }
  currentNode->index = routerNumber;
}

int PrefixMatcher::selectRouter(string prefix) {
  // if the prefix doesnt exist, return -1
  TrieNode* currentNode = root;
  for (int i = 0; i < prefix.length(); i++) {
    int index = prefix[i] - '0';
    if (currentNode->children[index] == NULL) {
      return currentNode->index;
    }
    currentNode = currentNode->children[index];
  }
  // use bfs to find the number of the longest word
  queue<TrieNode*> q;
  q.push(currentNode);
  int longestWord = -1;
  while (!q.empty()) {
    TrieNode* currentNode = q.front();
    q.pop();
    if (currentNode->index != -1) {
      longestWord = currentNode->index;
    }
    if (currentNode->children[0] != NULL) {
      q.push(currentNode->children[0]);
    }
    if (currentNode->children[1] != NULL) {
      q.push(currentNode->children[1]);
    }
  }
  return longestWord;
}
