#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun 18 04:42:48 2019

@author: SitchAI
"""

def maxSubArraySum(arr, length):
    total_max = current_max = 0
    
    for i in range( 0, length ):
        current_max += arr[i]
        
        if( current_max<0 ):
            current_max = 0
        
        
        elif( total_max<current_max ):
            total_max = current_max
            
    return total_max
    
arr = [1,5,4,-8,-2,20]
length = len(arr)

print('The total sum is: ',maxSubArraySum(arr, length))