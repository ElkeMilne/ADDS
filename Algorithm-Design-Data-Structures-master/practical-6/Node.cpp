#include "Node.h"

Node::Node(int data, Node* link) {
  this->data = data;
  this->link = link;
}

Node::~Node() {
  // Nothing to do here
}

int Node::get_data() {
  return data;
}

Node* Node::get_link() {
  return link;
}

void Node::set_data(int data) {
  this->data = data;
}

void Node::set_link(Node* link) {
  this->link = link;
}
