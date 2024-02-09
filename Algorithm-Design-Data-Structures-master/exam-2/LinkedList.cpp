#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	if (pos1 > pos2) {
		return swap(pos2, pos2);
	}
	if (pos1 < 0) {
		return false;
	}
	Node* node1 = head;
	Node* node2 = head;
	for (int i = 0; i < pos2; i++) {
		if (!node2->link) {
			return false;
		}
		if (i == pos1) {
			node1 = node2;
		}
		node2 = node2->link;
	}
	int temp = node1->data;
	node1->data = node2->data;
	node2->data = temp;
	return true;
}

bool LinkedList::find_and_delete(int target) {
	if (head->data == target) {
		head = head->link;
		return true;
	}
	Node* node = head;
	while (node->link && node->link->data != target) {
		node = node->link;
	}
	if (!node->link) {
		return false;
	}
	node->link = node->link->link;
	return true;
}