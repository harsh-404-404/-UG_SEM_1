list1 = [5, 10, 15, 20, 25, 30]
list2 = [5, 20, 25, 30, 0, 45, 50]

print(min(list1))
print(max(list2))
print(sum(list1))
print(len(list1))

#  sorted() vs .sort()

temp_list =[1,5,4,2,3,6,9,7,8]
print(sorted(sorted(temp_list)))  # it will return a new sorted list
print(sorted(temp_list, reverse=True))  # it will return a new sorted list in reverse order
print(temp_list)                  # original list will remain same  

temp_list.sort()                  # it will sort the original list
print(temp_list)                  # original list will be changed now

#few more methods in list

list1.append(53)   # it will add 53 at the end of the list
print(list1)
list1.insert(2, 100)  # it will add 100 at index 2
print(list1)

list1.extend(list2)
print(list1)          # it will add all the elements of list2 at the end of list1
list1.remove(100)    # it will remove 100 from the list
print(list1)    

#pop method also has return value

popped_value = list1.pop()  # it will remove the last element from the list and return it
print(popped_value)
print(list1)    #poped value will be removed from the list
popped_value = list1.pop(3)  # it will remove the element at index 3 and return it  
print(popped_value)
print(list1)

#some extra but important methods in list


print(list1.index(20))  # it will return the index of 20
print(list1.count(5))   # it will return the count of 5 in the list
list1.reverse()        # it will reverse the list and origianl list will be changed but you can also get reversed list by slicing without changing original list
print(list1)

list1.copy()   # it will return a copy of the list
# list1.clear()   # it will clear the list #dangerous be carfull
