import random

def qSort(array, low, high):
    if low < high:
        pivot = array[high]
        i = low - 1
        for j in range(low, high):
            if array[j] <= pivot:
                i = i + 1
                (array[i], array[j]) = (array[j], array[i])
        # 35
        (array[i + 1], array[high]) = (array[high], array[i + 1])

        pivot = i + 1

        qSort(array, low, pivot - 1)
        qSort(array, pivot + 1, high)

def main():
    data = []

    sizeChsn = input("Marimea vectorului: ");
    arrSize = int(sizeChsn)
    for i in range(arrSize):
        data.append(random.randint(1,100))

    size = len(data)

    qSort(data, 0, size - 1)

    print('Marimea Sortata in ordine crescatoare::')
    print(data)

main()