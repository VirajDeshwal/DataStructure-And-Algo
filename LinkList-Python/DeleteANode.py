#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jun  7 20:56:47 2019

@author: SitchAI
"""
#Create a Node 

class Node:
    def __init__(self, data =None):
        self.data = data
        self.next = None
        
        
#Create a class for LinkList
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    #Function to insert a new node at the begining
    
    def push(self, new_data):
        #Create a new node to insert data in it
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def deleteNode(self, key):
        #store the head node 
        temp = self.head
        
        #Base case for first element
        if(temp.data == key):
            self.head ==temp.next
            temp = None
            return
        
        #Search for the key to be deleted
        #prev to change the previous node from the current node(to be deleted)
        #And connect to the next.next node
        prev = temp
        temp = temp.next
        
        #if key is not present in the list
        if (temp.data == None):
            return
        
        #unlink the key node
        prev.next = temp.next
        temp = None
        
        
    def Print(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
        
        

list = LinkedList()
list.push(10)
list.push(8)
list.push (12)
list.push(13)


print("List is created...")
list.Print()
list.deleteNode(12)
print("Deleting")
list.Print()