#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

class Node {
 public:
  int data;
  Node* next;
};

void printList(Node* n) {
  while (n != NULL) {
    cout << n->data << " ";
    n = n->next;
  }
}

void push(Node** head_ref, int new_data) {
  Node* newNode = new Node();
  newNode->data = new_data;
  newNode->next = (*head_ref);
  (*head_ref) = newNode;
}

void insertAfter(Node* prev_node, int new_data) {
  if (prev_node == NULL) {
    cout << "The Given Node cannot be Null";
    return;
  }
  Node* newNode = new Node();
  newNode->data = new_data;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

