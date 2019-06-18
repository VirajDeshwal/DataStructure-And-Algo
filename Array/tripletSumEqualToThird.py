#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun 18 04:23:10 2019

@author: SitchAI
"""

def ThreeTriplet(arr, length):
    
    #sort the array
    arr.sort()
    i = length-1
    while( i>=0 ):
        #start from front
        j=0
        
        #start from back
        k = i-1
        
        while(j<k):
            
            #if found
            if( arr[i] == arr[j]+arr[k] ):
                print("Triplet found of : {} is {} and {} ".format( arr[i], arr[k], arr[j] ))
                return
            
            #if sum is greater
            elif ( arr[i] > arr[j]+arr[k] ):
                j +=1
                
            #if sum is lesser
            else:
                k -=1
        #move to next number
        i -=1
    
    #if none
    print("No triplet found")
arr = [ 5, 32, 1, 7, 10, 50, 19, 21, 2 ] 
length = len(arr) 
ThreeTriplet(arr, length)