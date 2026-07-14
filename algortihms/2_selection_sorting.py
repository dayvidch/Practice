array = [64, 34, 25, 5, 22, 11, 90, 12]
n = len(array)

for i in range(0,n-1):
    min_index = i

    for j in range(i+1, n):
        if array[j] < array[min_index]:
            min_index = j
    
    min_value = array.pop(min_index)
    array.insert(i, min_value)

print(array)