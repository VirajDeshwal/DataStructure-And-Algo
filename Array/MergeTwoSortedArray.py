#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun 18 21:13:04 2019

@author: SitchAI
"""

def MergeArray(arrA, arrB, n, m):
    
    result = [None] *(n+m)
    i=0
    j=0
    k=0
    
    while(i<n and j< m):
        if( arrA[i]<arrB[j] ):
            result[k] = arrA[i]
            k +=1
            i +=1
            
            
        else:
            result[k] = arrB[j]
            j +=1
            k +=1
            
    #If the length of arrA exceed
    while(i<n):
        result[k] = arrA[i]
        k +=1
        i +=1
        
    while(j<m):
        result[k] = arrB[j]
        j +=1
        k +=1
        
    for i in range(n+m):
        print(str(result[i]), end=' ')
        
        
            
        
if __name__ =='__main__':
    a = [0,3,4,5,7,9]
    b = [1,2,6,8]
    n = len(a)
    m = len(b)
    
    
    MergeArray(a, b, n, m)
        