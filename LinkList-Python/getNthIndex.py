#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun  8 15:40:27 2019

@author: SitchAI
"""

class Node:
    def __init__(self, data):
        self.data =data
        self.next = None
        
class LinkList:
    def __init__(self):
        self.head = None
        
    def push(self, new_data):
        
        #create a new node
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
        
    def deleteNode(self, position):
        if (self.head == None):
            return
        
        temp = self.head
        if(position ==0):
            self.head = temp.next
            temp = None
            return
        
        for i in range(position -1):
            temp = temp.next
            if(temp is None):
                return 
            next = temp.next.next
            temp.next = None
            temp.next = next
        
        
    def search(self, x):
        temp = self.head
        while (temp != None):
            if(temp.data ==x):
                return True
            temp = temp.next
        return False
    
    def searchNth(self, index):
        temp = self.head
        count = 0
        
        while(temp):
            if(count == index):
                return temp.data
            count +=1
            temp = temp.next
            
        #for the non-existent element
        assert(False)
        return 0;
    
if __name__ =='__main__':
    llist = LinkList()
    llist.push(8)
    llist.push(13)
    llist.push(15)
    llist.push(63)
    llist.push(83)
    print("Link List created...")
    
    llist.deleteNode(8)
    n =2
    print('Element at index {} is :'.format(n,llist.searchNth(n)))