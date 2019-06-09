#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 02:54:50 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
        
class LinkList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data) #Assign the new data into Node
        new_node.next = self.head # assign the next of new Node as head
        self.head = new_node #assign the head to point to new node
        
    #Count the number of Nodes in a link List
    def Count(self):
        temp = self.head
        count = 0
        
        #Loop while end of Link list
        while(temp):
            count +=1
            temp = temp.next
        return count
    
    
if __name__=='__main__': 
    llist = LinkList() 
    llist.push(1) 
    llist.push(3) 
    llist.push(1) 
    llist.push(2) 
    llist.push(1) 
    print ("Count of nodes is :",llist.Count()) 
