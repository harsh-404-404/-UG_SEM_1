my_dict = { "name" : "kritika", "age" : 20, "city" : "bangalore"}
print(my_dict)

# call value with a key
print(my_dict["name"])
print(my_dict.get("age","age is not mentioned")) # it will not throw error if key is not present andu uf there us no value to age it will show secound argument

print(my_dict.keys())  # it will return all the keys in the dictionary
print(list(my_dict.keys()))  # it will return all the keys in the dictionary as a list

print(my_dict.values())  # it will return all the values in the dictionary
print(list(my_dict.values()))  # it will return all the values in the dictionary as a list

print(my_dict.items())  # it will return all the items in the dictionary as a list of tuples
print(list(my_dict.items()))  # it will return all the items in the dictionary as a list of tuples













