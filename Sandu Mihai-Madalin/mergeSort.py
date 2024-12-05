# merge sort
import random

import numpy as np

def le_MergeBine(arr):
    if len(arr) > 1:
        mid = len(arr)//2
        left = arr[:mid]
        right = arr[mid:]

        le_MergeBine(left)
        le_MergeBine(right)

        i = 0; j = 0; k = 0;

        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1

        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1
    return arr

def main():
    list = []
    num = int(input("Nr Max de numere:"))
    randul = int(input("Maximum pentru random"))
    random.seed()
    for i in range(num):
        list.append(random.randrange(0,randul,1))
    print("Lista inainte = ",list)
    newList = le_MergeBine(list)
    print("Lista dupa =", newList)
    return 1;

main()