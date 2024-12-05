def counting_sort(arr):
    # Găsește valoarea maximă din array
    max_val = max(arr)
    min_val = min(arr)
    range_of_elements = max_val - min_val + 1

    # Creează un array de numărare (count array) și îl inițializează cu 0
    count = [0] * range_of_elements

    # Array pentru rezultatul sortării
    output = [0] * len(arr)

    # Contorizează frecvența fiecărui element
    for num in arr:
        count[num - min_val] += 1

    # Modifică count astfel încât să conțină pozițiile finale ale elementelor
    for i in range(1, len(count)):
        count[i] += count[i - 1]

    # Construiește array-ul sortat
    for num in reversed(arr):
        output[count[num - min_val] - 1] = num
        count[num - min_val] -= 1

    return output

# Exemplu 
if __name__ == "__main__":
    arr = [4, 2, 2, 8, 3, 3, 1]
    sorted_arr = counting_sort(arr)
    print("Array sortat:", sorted_arr)
