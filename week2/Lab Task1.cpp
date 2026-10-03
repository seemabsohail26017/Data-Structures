#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void displayReverse(node* head)
{
    if (head == NULL)
        return;

    int count = 0;
    node* current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    while (count > 0)
    {
        current = head;

        for (int i = 1; i < count; i++)
        {
            current = current->next;
        }

        cout << current->data << " ";
        count--;
    }
}

void display(node* head)
{
    node* current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main()
{
    node* head = new node{10, NULL};
    head->next = new node{20, NULL};
    head->next->next = new node{30, NULL};
    head->next->next->next = new node{40, NULL};

    cout << "Original List: ";
    display(head);

    cout << "\nReverse List: ";
    displayReverse(head);

    return 0;
}
