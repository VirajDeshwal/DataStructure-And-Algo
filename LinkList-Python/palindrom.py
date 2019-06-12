#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jun  9 13:11:58 2019

@author: SitchAI
"""

class Node:
    def __init__ (self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
        
        
    def palindrome(self, head):
        temp = self.head
        stack = []
        while(temp):
            stack.append(temp.data)
            temp = temp.next
            
            
    def length(self):
        temp = self.head
        count = 0
        while(temp):
            temp = temp.next
            count +=1
        return count 
    
   
    
    
    def median2(self):
        slow = self.head
        fast = self.head.next.next
        return slow.data
        '''
        fast = temp.next.next
        print(temp)
        while(fast):
            temp = temp.next
        return temp'''
    
if __name__ == '__main__':
    ll = LinkedList()
    ll.push(8)
    ll.push(10)
    ll.push(12)
    ll.push(56)
    print(ll.length())
    print(ll.median2())
    
            