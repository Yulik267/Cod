#definim functia quicksort
def quicksort(lista):
    if len(lista) <= 1:
        return lista

    pivot = lista[-1]
    mai_mici = [x for x in lista[:-1] if x <= pivot]
    mai_mari = [x for x in lista[:-1] if x > pivot]

    return quicksort(mai_mici) + [pivot] + quicksort(mai_mari)

# introducere lista utilizator
valori_input = input("Introdu elementele listei, separate prin spațiu: ")
lista = list(map(int, valori_input.split()))

# Sortăm lista folosind quicksort
lista_sortata = quicksort(lista)

print("Lista sortată este:", lista_sortata)
