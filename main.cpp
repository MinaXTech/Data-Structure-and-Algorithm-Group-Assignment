#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};


Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = newNode;
    newNode->prev = newNode;
    return newNode;
}

// Question 2
void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* tail    = head->prev;
    tail->next    = newNode;
    newNode->prev = tail;
    newNode->next = head;
    head->prev    = newNode;
}

// Question 3
void insertAtFront(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* tail    = head->prev;
    newNode->next = head;
    newNode->prev = tail;
    head->prev    = newNode;
    tail->next    = newNode;
    head          = newNode;
}

// Question 4
void insertLeft(Node*& head, int target, int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    do {
        if (temp->data == target) {
            if (temp == head) {
                insertAtFront(head, value);
                return;
            }
            Node* newNode  = createNode(value);
            Node* prevNode = temp->prev;
            newNode->next  = temp;
            newNode->prev  = prevNode;
            prevNode->next = newNode;
            temp->prev     = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
    cout << "Value " << target << " not found.\n";
}


// Question 5
void displayForward(Node* head) {
    if (head == nullptr) {
        cout << "  [Empty list]\n";
        return;
    }

    Node* temp = head;
    do {
        cout << "[" << temp->data << "]";
        temp = temp->next;
        if (temp != head) cout << " <-> ";
    } while (temp != head);

}

// Question 5
void displayBackward(Node* head) {
    if (head == nullptr) {
        cout << "  [Empty list]\n";
        return;
    }
    cout << "  Backward : ";
    Node* temp = head->prev;
    Node* tail = temp;
    do {
        cout << "[" << temp->data << "]";
        temp = temp->prev;
        if (temp != tail) cout << " <-> ";
    } while (temp != tail);
    cout << " -> (back to tail)\n";
}
// Question 6
void insertRight(Node*& head, int target, int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    do {
        if (temp->data == target) {
            if (temp->next == head) {
                insertAtEnd(head, value);
                return;
            }
            Node* newNode  = createNode(value);
            Node* nextNode = temp->next;
            newNode->next  = nextNode;
            newNode->prev  = temp;
            temp->next     = newNode;
            nextNode->prev = newNode;
            return;
        }
        temp = temp->next;
    } while (temp != head);
    cout << "Value " << target << " not found.\n";
}

int main() {

    Node* head = nullptr;

    // Question 1
    cout << "\n\nTask 1: Create nodes (7, 3, 8, 1, 33)\n";
    int values[] = {7, 3, 8, 1, 33};
    for (int i = 0; i < 5; i++) {
        insertAtEnd(head, values[i]);
        cout << "  Inserted " << values[i] << "\n";
    }
    cout << "\n";
    displayForward(head);

    // Question 2
    cout << "\n\nTask 2: Add node (99) at the END\n";
    insertAtEnd(head, 99);
    cout << "  Inserted 99 at the end.\n\n";
    displayForward(head);


    // Question 3
    cout << "\n\nTask 3: Add node (55) at the FRONT\n";
    insertAtFront(head, 55);
    cout << "  Inserted 55 at the front.\n\n";
    displayForward(head);


    // Question 4
    cout << "\n\nTask 4: Add node (77) to the LEFT of 8\n";
    insertLeft(head, 8, 77);
    cout << "  Inserted 77 to the left of 8.\n\n";
    displayForward(head);


    // Question 5
    cout << "\n\nTask 5: Display Forward and Backward\n";
    displayForward(head);
    displayBackward(head);

    // Question 6
    cout << "\n\nTask 6: Add node (44) to the RIGHT of 3\n";
    insertRight(head, 3, 44);
    cout << "  Inserted 44 to the right of 3.\n\n";
    displayForward(head);


    return 0;
}
