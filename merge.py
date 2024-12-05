def merge_sort(char_list):
    # Dacă lista are un singur element sau este goală, sortare inexistenta
    if len(char_list) <= 1:
        return char_list
    
    # Împărțim lista în două jumătăți
    mid = len(char_list) // 2
    left_half = char_list[:mid]
    right_half = char_list[mid:]

    # Sortăm fiecare jumătate (apelăm recursiv merge_sort)
    left_sorted = merge_sort(left_half)
    right_sorted = merge_sort(right_half)

    # Îmbinăm cele două liste sortate
    return merge(left_sorted, right_sorted)

def merge(left, right):
    sorted_list = []
    i = j = 0

    # Comparăm elementele din cele două liste și le punem în ordinea corectă
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sorted_list.append(left[i])
            i += 1
        else:
            sorted_list.append(right[j])
            j += 1

    # Adăugăm ce a mai rămas din liste (dacă există elemente rămase)
    sorted_list.extend(left[i:])
    sorted_list.extend(right[j:])

    return sorted_list

# Citim 8 caractere de la tastatură
def read_input():
    char_list = []
    print("Introdu 8 caractere:")
    for _ in range(8):
        char = input("Caracter: ")
        char_list.append(char)
    return char_list

# Afișăm rezultatul sortării
if __name__ == "__main__":
    # Citim caracterele de la utilizator
    characters = read_input()
    print("Lista nesortată:", characters)
    
    # Sortăm lista cu Merge Sort
    sorted_characters = merge_sort(characters)
    print("Lista sortată:", sorted_characters)
