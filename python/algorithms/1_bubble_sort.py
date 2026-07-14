array = [11,2,4,9,4,6,5,]

len = len(array)

#this makes the inner loop run as much elements there are in the list
for i in range(len):
    #this sorts only one element in the list
    for x in range(0, len-1-i):
        if array[x] > array[x+1]:
            array[x], array[x+1] = array[x+1], array[x] 

print(array)