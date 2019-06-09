#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 14:03:44 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkList:
    def __init__(self):
        #defining head as a global variable
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
        
    def search(self, element):
        
        #Initialize the current to head
        current = self.head
        
        while (current != None):
            if (current.data == element):
                return True
            
            current = current.next
        return False
    
    
if __name__ == '__main__':
    
    #create an object for the class
    ll = LinkList()
    ll.push(7)
    ll.push(8)
    ll.push(12)
    ll.push(18)
    print('Link List created...')
    
    if(ll.search(12)):
        print("Found")
    else:
        print("NO")