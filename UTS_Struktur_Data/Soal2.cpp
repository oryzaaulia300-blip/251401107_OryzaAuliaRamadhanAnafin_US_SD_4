#include <iostream>
#include <string>
using namespace std;

struct Node {
    int peserta;
    Node* next;
};

int main(){

    Node* node1 = new Node();
    node1 -> peserta = 100;
    node1 -> next = nullptr;

    Node* node2 = new Node();
    node2 -> peserta = 90;
    node2 -> next = nullptr;

    Node* node3 = new Node();
    node3 -> peserta = 80;
    node3 -> next = nullptr;

    Node* node4 = new Node();
    node4 -> peserta = 70;
    node4 -> next = nullptr;

    Node* node5 = new Node();
    node5 -> peserta = 50;
    node5 -> next = nullptr;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Node* head = node1;
    Node* tail = node5;

    cout << "Urutan nilai: ";
    Node*temp = head;
    while(temp != nullptr){
        cout << temp -> peserta << " ";
        temp = temp -> next;      
    }

    temp = head;

    while (temp->next->peserta!=70){
        temp = temp -> next;
    }

    Node*hapus = temp->next;
    temp -> next = hapus->next;
    delete hapus; 

    cout << "\nSetelah dihapus nilai 70 : ";
    temp = head;
    while(temp != nullptr){
        cout << temp->peserta << " ";
        temp = temp->next;
    }
}