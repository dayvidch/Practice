array = [64, 34, 25, 5, 22, 11, 90, 12]
n = len(array)

for i in range(1,n):
    insert_index = i
    #this is the value that is going to be sorted
    current_value = array.pop(i)

    #this compairs each value in the sorted part of the list with the first unsorted value
    for j in range(i-1,-1,-1):
        #when a sortd element is bigger than the current value, insert the current value in that undex
        if array[j] > current_value:
            insert_index = j
    array.insert(insert_index, current_value)

print(array)


#to improve it, instead of inserting it, just swap the indexes