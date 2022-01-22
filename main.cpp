#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};

Node *head = NULL;
Node *current = new Node;

void add_node(int n){
  Node *tmp = new Node;
  tmp->data = n;
  tmp->next = NULL; 

  if(head == NULL){
    head = tmp;
    current = tmp;
  }
  else{
    current->next = tmp;
    current = current->next;
  }

}

void print_list(Node *temp){
  while(temp){
    cout<<temp->data<<"\t";
    temp= temp->next;
  }
}

int read_list(Node *temp){
  int digit = 0;
  while(temp){
    digit = digit * 10 + temp->data;
    temp = temp->next;
  }
  return digit;
}

int bin_to_dec(int bin){
  int dig = 0;
  int i = 1;
  while(bin){
    int rem = bin % 10;
    bin = bin / 10;
    dig = rem*i + dig;
    i = i*2;
  }
  return dig;
}

int main() {
  std::cout << "Hello World!\n";
  add_node(1);
  add_node(0);
  add_node(1);
  print_list(head);
  int bin = read_list(head);
  //cout<<bin;
  int dec = bin_to_dec(bin);
  cout<<dec;
} 