def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # Ultimele i elemente sunt deja sortate
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                # Schimbăm elementele dacă sunt în ordine greșită
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

#ex
lista = [64, 34, 25, 12, 22, 11, 90]
print("Lista sortată:", bubble_sort(lista))
