#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 23:49:38 2019

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
        self.head = new_node
        
    def DetectLoop(self):
        s = set()
        temp = self.head
        
        while(temp):
            if(temp in s):
                return True
            s.add(temp)
            temp = temp.next
        return False
    
if __name__ == '__main__':
    ll = LinkedList()
    ll.push(10)
    ll.push(12)
    
    #create a loop for testing 
    ll.head.next.next.next = ll.head;
    if( ll.DetectLoop() ):
        print("Found")
    else:
        print("None")