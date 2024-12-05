def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        # Mută elementele mai mari decât `key` cu o poziție la dreapta
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# test
lista = [12, 11, 13, 5, 6]
print("Lista sortată:", insertion_sort(lista))
