#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>

using namespace std;

class Node {
 private:
  int data;
  Node *link;
 public:
  Node(int data, Node* link);
  ~Node();
  int get_data();
  Node* get_link();
  void set_data(int data);
  void set_link(Node* link);
};

#endif
