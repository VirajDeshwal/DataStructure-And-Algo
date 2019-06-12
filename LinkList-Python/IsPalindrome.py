#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun 11 19:27:54 2019

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
        
    def palindrom(self):
        s = []
        slow = self.head
        temp = self.head
        
        if(slow == None):
            return True
        if(slow.next == None):
            return True
        
        while(slow != None):
            s.append(slow.data)
            slow = slow.next
        
        while(temp != None):
            if (temp.data !=s.pop()):
                return False
            temp = temp.next
           
        
        return True
    
    
if __name__ == '__main__':
    ll = LinkedList()
    ll.push(8)
    ll.push(4)
    ll.push(4)
    ll.push(8)
    ll.push(19)
    print(ll.palindrom())
                
        
            
            
        