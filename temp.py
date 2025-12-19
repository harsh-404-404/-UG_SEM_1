list_of_lists = [[1, 2], [3, 4], [5, 6]]
tuple_of_tuples = tuple(tuple(x) for x in list_of_lists)
print(tuple_of_tuples)
# Output: ((1, 2), (3, 4), (5, 6))

new_list = []
for x in list_of_lists:
    new_list.append(tuple(x))

tuple_of_tuples = tuple(new_list)
print(tuple_of_tuples)


new_string = "This is very boring task and i do not like it"
print(new_string[-1])
print(len(new_string))
print(new_string[::-1])

print("Harsh"+"_Bhalal")
print(new_string.count("t"))
print(new_string.find("do"))

new_dict = {'name': 'Harsh', 'age': 20, 'city': 'Ahmedabad'}
print(new_dict.keys())
print(new_dict.values())
print(new_dict.items())
print(new_dict.get('ager', 'Not Found'))
set_list = list(new_dict)
print(set_list)
print("""--------------------------------------------------------------------""")
print(5>3)
print("Hello World!", end=".")

import keyword
print(keyword.kwlist)

a = " he "
print(a.strip())
print(a)