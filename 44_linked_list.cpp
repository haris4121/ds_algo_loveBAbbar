#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};



void insertAtHead(Node * &head, int data)
{
    Node *temp = new Node(data);

    temp->next = head;

    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = tail->next; // to point tail again at end
}
void printLinkedList(Node *head) // as it is not by ref we can directly modify head
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insetAtPostion(Node * &head, Node *&tail, int data, int position)
{
    Node *temp = head;
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    int count = 1; // first node

    while (count < position - 1) // we have to travel n - 2 times
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {

        insertAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(44);

    temp->next = head->next;
    head->next = temp;
}


void deleteNode(Node * &head,int posi, Node * &tail) //last is also deleted
{
    if(posi == 1){
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node *current = head;
        Node *prev = NULL;
        for (size_t i = 1; i < posi; i++)
        {
            prev = current;
            current =  current->next;
            /* code */
        }
        if(posi == 4)
        {
            tail = prev;
        }

        prev->next = current->next;
        delete current;
        
        





    }

   
    


}


int main()
{

    // Node *node1 = new Node(3); // Node *head = new Node();

    Node *head = NULL;
    Node *tail = NULL;

    head = new Node(2); // head node
    tail = head;

    printLinkedList(head);
    cout << "After insertion at head" << endl;
    insertAtHead(head, 1);
    printLinkedList(head);

    // insertion at end
    cout << "after insertion at end" << endl;
    insertAtTail(tail, 6);
    printLinkedList(head);

    // insert in between
    cout << "after insertion in between" << endl;
    insetAtPostion(head, tail, 59, 4); // remember we should not exceed position greater than size of liked list
    printLinkedList(head);

    //
    cout<<tail->data<<endl;

    deleteNode(head,4,tail);

    printLinkedList(head);
    cout<<endl;

    cout<<tail->data<<endl;

    
    printLinkedList(head);



    return 0;
}