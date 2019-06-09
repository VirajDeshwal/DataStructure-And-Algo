#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 19:59:23 2019

@author: SitchAI
"""

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def PrintFromEnd(self, n):
        temp = self.head
        length = 0
        while(temp):
            temp = temp.next
            length +=1
            
        if (n>length):
            print("Lenght exceeded")
            return 
        
        temp = self.head
        for i in range(0, length-n):
            print(temp.data)
            
    
    def Median(self):
        full_traverse = self.head
        length = 0
        count = 0
        while(full_traverse):
            full_traverse = full_traverse.next
            length +=1
            
        median = length/2
        if(count ==median):
            return full_traverse.data
        count +=1
        full_traverse = full_traverse.next
        
        
if __name__ =='__main__':
    ll = LinkedList()
    ll.push(9)
    ll.push(15)
    ll.push(08)
    ll.push(67)
    ll.push(65)
    ll.push(34)
    ll.Median
        
            
        
        