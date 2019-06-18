#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun 18 02:54:05 2019

@author: SitchAI
"""

def subArray(arr, n, sum):
    current_sum =arr[0]
    start = 0
    
    #start from the second element and add one by one to current_sum
    i=1
    while( i<=n ):
        
        #1. if current_sum>sum: remove n-1
        while( current_sum >sum and start < i-1 ):
            current_sum  = current_sum - arr[start]
            start += 1
            
        #2. if current_sum = sum Return True
        if current_sum == sum:
            print("Sum found between index: {} and {}".format(start, i-1))
            return 1
        
        #Add this element to curr_sum
        if i<n:
            current_sum += arr[i]
        i+=1
        
    #If no subarray
    print("No Sub-array Found!")
    return 0


arr = [15, 2, 4, 8, 9, 5, 10, 23] 
n = len(arr) 
sum = 23
  
subArray(arr, n, sum) 