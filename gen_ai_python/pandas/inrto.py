import pandas as pd

my_series = pd.Series(["Apple","banana","Orange","watermelon"],name = "Fruite")
print(my_series)

list_of_list = [["Amar", 15],["Akbar", 14],["Anthony", 13]]
df = pd.DataFrame(list_of_list,columns = ["name", "age"])
print(df)

df = pd.read_csv("C:/Users/harsh/Desktop/VS_code/gen_ai_python/pandas/imdb_data.csv")
print(df)

#find the number of rows and column 
print(df.shape) # return is tupple 
print(type(df))

#fatcch the data from top
print(df.head(20))  #by default return first 5 row from top E.g fd.head(20) will return first 20 row

#fatch data from bottom
print(df.tail(20))  #by default last 5 rows

#fatch data point randomly
print(df.sample(7)) #by default 1 random raw

#find the information of the data
print(df.info())

#How does the data look like methematiclly

print(df.describe())
print(df.columns)                #columns is a property of dataframe/papndaas

#find the duplicate value
print(df.duplicated().sum())

#find the null value
print(df.isnull().sum())

#indexing and slicing
print(df["title"])   #df["name of column"]
print(df[["title","budget","revenue","original_language"]])

#row based slicing (4 is Obv not included)
print(df[0:4])

#slicing of raw and column
print(df.iloc[0:4,0:3])    #iloc[row,column]

#
print([df.loc[0:4],["title",'budget',"revenue"]])     #loc includes 4th index item


#find unique value from a column
print(df["original_language"].unique())

print(df["original_language"]=="en")
print(df[df["original_language"]=="en"])

hindi_movie = df[df["original_language"] == 'en']
hindi_movie.to_csv("hindi_movie.csv")
