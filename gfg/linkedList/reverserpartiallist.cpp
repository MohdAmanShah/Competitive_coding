//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}

// } Driver Code Ends
// User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
private:
    Node *home;

public:
    Node *reverse(Node *head, int k)
    {
        // code here
        _reverse(head,1,k);
        return home;
    }
    Node *_reverse(Node *head, int c, int k)
    {
        if(c == k || head == nullptr)
        {
            home = head;
            return head;
        }
        Node *temp = _reverse(head->next,c+1,k);
        temp->next=head;
        return head;
    }
};

//{ Driver Code Starts.

int main()
{

        Node *home = new Node(1);
        home->next = new Node(2);
        home->next->next = new Node(3);
        home->next->next->next = new Node(4);
        home->next->next->next->next = new Node(5);
        Solution obj;
        Node *res = obj.reverse(home, 5);
        printList(res);
}
// } Driver Code Ends