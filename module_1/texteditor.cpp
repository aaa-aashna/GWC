#include <iostream>
#include <cstring>
using namespace std;

struct node {
    int data;
    char line[100];
    node* next;
};

node* head = NULL;

node* createNode(char text[]) {
    node* temp = new node;
    temp->data = 0;
    strcpy(temp->line, text);
    temp->next = NULL;
    return temp;
}

void addAtEnd(char text[]) {
    node* newNode = createNode(text);

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

void addAtPosition(int pos, char text[]) {
    node* newNode = createNode(text);

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void printLine(int pos) {
    node* temp = head;

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Line not found\n";
        return;
    }

    cout << "Line " << pos << ": " << temp->line << endl;
}

void deleteAtPosition(int pos) {
    if (head == NULL) {
        cout << "Editor is empty\n";
        return;
    }

    node* temp = head;

    if (pos == 1) {
        head = head->next;
        delete temp;
        return;
    }

    node* prev = NULL;
    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
}

void printAll() {
    node* temp = head;
    int lineNo = 1;

    while (temp != NULL) {
        cout << lineNo++ << ": " << temp->line << endl;
        temp = temp->next;
    }
}

int main() {
    addAtEnd("This is line one");
    addAtEnd("This is line two");
    addAtEnd("This is line three");

    addAtPosition(2, "Inserted at line two");

    printLine(3);

    deleteAtPosition(3);   // delete line 3
    deleteAtPosition(2);   // delete line 2

    cout << "\nFinal Text Editor Content:\n";
    printAll();

    return 0;
}