#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

struct Node{
    int data;
    Node * next;

    Node(int d):data(d),next(nullptr){}
    Node():data(0),next(nullptr){}
};

struct Queue {
    Node *head;
    Node *tail;

    Queue():head(nullptr),tail(nullptr){}
    
    void push(int dt){
        Node *nNode = new Node(dt);
        if( head == nullptr ){
            tail = head = nNode;
            return;
        } 
        tail->next = nNode;
        tail = nNode;
    }
    void pop(){
        Node *aux = head;
        head = head->next;
        delete aux;
    }

    int front(){
        return head->data;
    }
};

int  main(){
    fast_io;
    
}