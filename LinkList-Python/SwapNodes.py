#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun 15 00:55:03 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
        
class LinkedList(self):
    def __init__(self):
        self.head = None
        
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def swap(self, x, y):
        
        if (x==y):
            return 
        
        #Search for x
        prevX = None
        currX = self.head
        
        while (currX != None and currX.data != x):
            prevX = currX
            currX = currX.next
            
            
        #Search for y
        prevY = None
        currY = self.head
        while (currY != None and currY.data != y):
            prevY = None
            currY = self.head
            currY = currY.next
            
        
        #Either x or y is not present 
        if currX == None or currY == None:
            return 
        
        #if x is not the head
        if prevX != None:
            prevX.next = currY
        else:
            self.head = currY
            
        #if y is not the head
        if currY != None:
            prevY.next = currX
        else:
            self.head = currX
            
        #swap two next pointers
        temp = currX.next
        currX.next = currY.next
        currY.next = temp
            
            
        