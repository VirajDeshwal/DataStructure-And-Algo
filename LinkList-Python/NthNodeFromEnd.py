#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 16:29:24 2019

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
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def PrintFromEnd(self, n):
        temp = self.head
        length = 0
        while (temp):
            temp = temp.next
            length +=1
            
        if n>length:
            print('Oversized')
            return
        
        temp = self.head
        for i in range(0, length-n+1):
            print(temp.data)
            
if __name__=='__main__':
    llist = LinkList()
    llist.push(20)  
    llist.push(4)  
    llist.push(15)  
    llist.push(35) 
    llist.PrintFromEnd(4) 