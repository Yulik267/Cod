def counting_sort(arr):
    # Pasul 1: Găsește intervalul valorilor din array
    if len(arr) == 0:
        return arr
    
    max_val = max(arr)  # Găsim valoarea maximă din array
    min_val = min(arr)  # Găsim valoarea minimă din array

    # Pasul 2: Inițializăm array-ul de numărare
    range_of_elements = max_val - min_val + 1  # Intervalul este diferența dintre max și min, plus 1
    count = [0] * range_of_elements  # Creăm un array de numărare inițializat cu zero-uri

    # Pasul 3: Populăm array-ul de numărare
    for num in arr:
        count[num - min_val] += 1  # Incrementăm numărul pentru valoarea corespunzătoare

    # Pasul 4: Actualizăm array-ul de numărare pentru a conține pozițiile reale ale elementelor
    for i in range(1, len(count)):
        count[i] += count[i - 1]  # Fiecare poziție acum conține numărul total de elemente <= i

    # Pasul 5: Construim array-ul de ieșire
    output = [0] * len(arr)  # Array-ul de ieșire va conține elementele sortate
    for num in reversed(arr):  # Parcurgem array-ul inițial invers pentru a menține stabilitatea sortării
        output[count[num - min_val] - 1] = num  # Plasăm elementul în poziția corectă
        count[num - min_val] -= 1  # Scădem din numărul pentru elementul plasat

    return output

# Exemplu de utilizare
arr = [4, 2, 2, 8, 3, 3, 1]
sorted_arr = counting_sort(arr)
print("Array-ul sortat:", sorted_arr)
