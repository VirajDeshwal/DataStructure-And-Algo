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
        
class LinkList:
    def __init__(self):
        self.head = None
        
    def push (self, new_data):
        
        #create a  new node for new data to store
        new_node = Node(new_data)
        
        #migrate forward with new node
        new_node.next = head
        
        #make head store the adddress of new node
        head = new_node
        
    def deleteList(self):
        current = self.head
        while current:
            prev = current.next
            del current.data
            current = prev
            
    def length(self):
        temp = self.head
        while(temp !=None):
            
            count +=1
            temp = temp.next
        return count
        
        
    def deleteNode(self, position):
        if (self.head ==None):
            return
        temp = self.head
        
        if (position == 0):
            self.head = temp.next
            temp = None
            return
        
        for i in range(position -1):
            temp = temp.next #from n-1 go to current node to be deleted
            
            if(temp.next == None):
                return
            
            next = temp.next.next #go to n+1 node
            temp.next = None
            temp.next = next
            
    def search(self, x):
        temp = self.head
        while( temp != None):
            if(temp.data == x):
                return True
            temp = temp.next
            
        return False
            
        