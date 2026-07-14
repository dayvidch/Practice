import pandas as pd

'''---------------- CREATING DATA ----------------'''

#create a data frame object manually
df = pd.DataFrame({"Column 1":["row 1","row 2"], "Column2":["row 1","row 2"], "Column 3":["row 1","row 2"]})

#assign index
df = pd.DataFrame({"Column 1":["row 1","row 2"], "Column2":["row 1","row 2"], "Column 3":["row 1","row 2"]},
                  index=["index 1", "index 2"])

#create series manually
series = pd.Series([1,2,3,4,5])

#assign index and name a series 
series = pd.Series([1,2,3,4,5], index=["index 1", "index 2", "index 3", "index 4", "index 5"], name="This is the overall series name")



'''---------------- Reading Data Files ----------------'''

#reading data into a DataFrame object
data = pd.read_csv("practice.csv")

#check how large DataFrame is (have to print this one out)
data.shape

#grab the header / first 5 rows (have to print this one out)
data.head()

#grab the tail / last 5 rows (have to print this one out)
data.tail()




'''---------------- Native accessors ----------------'''
#accessing a column of a DataFrame (only works if column name has no spaces)
gender = data.Sex

#accessing a column by index
fName = data['First Name']

#accessing a specific value, [column][row]
name = data['First Name'][0]

