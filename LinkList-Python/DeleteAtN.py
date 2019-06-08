#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 02:16:08 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        #initialize the head
        self.head = None
        
        
    #Insert at the begining
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
        
    def delete(self, position):
        
        #Base Case
        if(self.head == None):
            return
        
        #Store the head node
        temp = self.head
        
        #if head node needs to be removed 
        if position ==0:
            self.head = temp.next
            temp = None
            
        #Find the previous of the node to be deleted
        for i in range(position-1):
            temp = temp.next
            if temp is None:
                break
            
        #if position is more than number of nodes
        if temp is None:
            return
        if temp.next is None:
            return 
        
        
        # temp.next(n) to be deleted from current(n-1) and join to (n+1)temp.next.next
        
        next = temp.next.next
        temp.next = None
        temp.next = next
        