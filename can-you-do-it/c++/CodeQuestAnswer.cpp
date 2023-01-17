// Welcome to the Lumos Coding Quest
// you have been given a linked list with duplicate values
// Please run this code once before attempting to solve the quest
// upon running this code, you will see a string that has been formed by collecting the data in the nodes of the linked list
// you need to complete the "MyAnswer" function and ensure that it removes the duplicate nodes from the linkedlist
// when you collate the string that this new linked list contains, you will get the link to the whitelist form

#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include "helper.h"
using namespace std;

void printList(node* head) 
{
    node* current = head;
    while (current != NULL) 
    {
        cout<<current->data;
        current = current->next;
    }
}

void SolveQuiz(node* head) 
{
    unordered_set<string>seen;
    node* current = head;
    node* previous = NULL;
    while (current) {
        if (seen.count(current->data) > 0) 
        {
            previous->next = current->next;
            delete current;
            current = previous->next;
        }
        else 
        {
            seen.insert(current->data);
            previous = current;
            current = current->next;
        }
    }
    printList(head);
}



