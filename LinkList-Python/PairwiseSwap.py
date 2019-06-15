#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun 15 02:03:30 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def swap(self):
        temp  = self.head
        
        if temp is None:
            return 
        
        while(temp is not None and temp.next is not None):
            #swap the data
            temp, temp.next = temp.next, temp
            temp = temp.next.next
            
            
    def Print(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next
            
            
if __name__ == '__main__':
    ll = LinkedList()
    llist = LinkedList() 
    llist.push(5) 
    llist.push(4) 
    llist.push(3) 
    llist.push(2) 
    llist.push(1) 
    
    print ("Linked list before calling pairWiseSwap() ")
    llist.Print() 
    
    llist.swap() 
    
    print ( "\nLinked list after calling pairWiseSwap()")
    llist.Print() 