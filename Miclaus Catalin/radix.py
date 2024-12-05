# Funcția utilizată pentru a decide numărul de iterații)
def get_max(arr):
    max_element = max(arr)
    return max_element

# Funcția de contorizare
def counting_sort(arr, exp):
    n = len(arr)
    output = [0] * n  # listă pentru a păstra rezultatul ordonat
    count = [0] * 10  # contor pentru fiecare cifră (0-9)

    # Stocăm numărul de apariții pentru fiecare cifră
    for i in range(n):
        index = arr[i] // exp
        count[index % 10] += 1

    # Modificăm count[] astfel încât fiecare element conține poziția finală a cifrei în output[]
    for i in range(1, 10):
        count[i] += count[i - 1]

    # Construcția output[] folosind count[]
    i = n - 1
    while i >= 0:
        index = arr[i] // exp
        output[count[index % 10] - 1] = arr[i]
        count[index % 10] -= 1
        i -= 1

    # Copiem output[] în arr[], astfel încât arr[] să conțină numerele sortate pentru cifra curentă
    for i in range(n):
        arr[i] = output[i]

# F Radix Sort
def radix_sort(arr):
    # Găsim valoarea maximă pentru a ști numărul de cifre
    max_element = get_max(arr)

    # Aplicăm Count Sort pentru fiecare cifră a numărului
    exp = 1
    while max_element // exp > 0:
        counting_sort(arr, exp)
        exp *= 10

# Citirea unui șir de numere de la tast
numbers = list(map(int, input("Introduceți un șir de numere separate prin spațiu: ").split()))
print("Lista originală:", numbers)

# Aplicăm Radix Sort
radix_sort(numbers)
print("Lista sortată:", numbers)

input("Apăsați Enter pentru a închide...")

