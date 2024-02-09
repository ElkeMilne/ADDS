#include "LinkedList.h"

LinkedList::LinkedList() {
  head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;
  for (int i = len - 1; i >= 0; i--) {
    head = new Node(array[i], head);
  }
}

LinkedList::~LinkedList() {
  Node* curr = head;
  while (curr) {
    Node* next = curr->get_link();
    delete curr;
    curr = next;
  }
}

void LinkedList::insertPosition(int pos, int newNum) {
  if (pos <= 1) {
    head = new Node(newNum, head);
  } else {
    Node* curr = head;
    for (int i = 0; i < pos - 2; i++) {
      if (!curr->get_link()) {
        break;
      }
      curr = curr->get_link();
    }
    if (curr) {
      Node* newNode = new Node(newNum, curr->get_link());
      curr->set_link(newNode);
    } else {
      Node* newNode = new Node(newNum, nullptr);
      curr->set_link(newNode);
    }
  }
}

bool LinkedList::deletePosition(int pos) {
  if (pos < 1) {
    return false;
  }
  if (pos == 1) {
    Node* temp = head;
    head = head->get_link();
    delete temp;
    return true;
  }
  Node* curr = head;
  for (int i = 0; i < pos - 2; i++) {
    if (!curr) {
      return false;
    }
    curr = curr->get_link();
  }
  if (!curr) {
    return false;
  }
  Node* temp = curr->get_link();
  curr->set_link(temp->get_link());
  delete temp;
  return true;
}

int LinkedList::get(int pos) {
  if (pos < 1) {
    return numeric_limits < int >::max();
  }
  Node* curr = head;
  for (int i = 0; i < pos - 1; i++) {
    if (!curr) {
      return numeric_limits < int >::max();
    }
    curr = curr->get_link();
  }
  if (!curr) {
    return numeric_limits < int >::max();
  }
  return curr->get_data();
}

int LinkedList::search(int target) {
  Node* curr = head;
  int pos = 1;
  while (curr) {
    if (curr->get_data() == target) {
      return pos;
    }
    curr = curr->get_link();
    pos++;
  }
  return -1;
}

void LinkedList::printList() {
  if (!head) {
    return;
  }
  cout << "[";
  Node* curr = head;
  while (curr) {
    cout << curr->get_data();
    if (curr->get_link()) {
      cout << " ";
    }
    curr = curr->get_link();
  }
  cout << "]";
}
