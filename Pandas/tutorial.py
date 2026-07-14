import pandas as pd

'''
---------------- CREATING DATA ----------------

2 core objects in pandas: dataframe and series

Dataframe is a table. It is made up of arrays with individual elements. Each element can be accessed by row and column

use the pd.DataFrame constructor to create the data frame objects.
To create a new data frame, you have to create a dictionary with the key of the column name.
The values are a list of entries.
'''
df = pd.DataFrame({"Column 1":["row 1","row 2"], "Column2":["row 1","row 2"], "Column 3":["row 1","row 2"]})

# print(df)

'''
By default, the index / row labels are 0,1,2,3...
We can assign values to the index ourselfs by using the index parameter
'''
df = pd.DataFrame({"Column 1":["row 1","row 2"], "Column2":["row 1","row 2"], "Column 3":["row 1","row 2"]},
                  index=["index 1", "index 2"])

# print(df)

'''
A series on the other hand is a list of values. It is basically a single column of a dataframe.
To create one, use a list
'''
series = pd.Series([1,2,3,4,5])

# print(series)

'''
A series is basically a single column with multiple rows.
you can name each individual row using the index parameter.
you cannot rename the column because there is only one column, instead you can name the series itself.
'''
series = pd.Series([1,2,3,4,5], index=["index 1", "index 2", "index 3", "index 4", "index 5"], name="This is the overall series name")

# print(series)


'''
---------------- Reading Data Files ----------------

csv = comma seperated values

use the pd.read_csv() function to read data into a DataFrame.
'''

read_data = pd.read_csv("practice.csv")
# print(read_data)

'''
use the .shape attribute to check how large the DataFrame is.
Our practice dataframe has 100 rows with 9 different columns
'''

# print(read_data.shape)

'''the .head() command grabs the first 5 rows'''
# print(read_data.head())




'''
---------------- Native accessors ----------------

In python, I can access a property of an object by calling on its attribute. 
A DataFrame is technically an object, and the columns are the property of it.
I can access a column of a dataframe like an attribute.
This only works if the column doesnt have any spaces.
'''
data = pd.read_csv('practice.csv')
gender = data.Sex

# print(gender)


'''
You can access a python dictionary's values by using the indexing ( [] ) opperators.
You can also access a column within a dataframe the sameway.
'''
fName = data['First Name']
# print(fName)

'''
A pandas Series is basically like a dictonary. 
To get a single specific value, use 2 indexing ( [] ) opperators.
first is column, then row, ====> [Column][Row]
'''

name = data['First Name'][0]
# print(name)



'''
---------------- Indexing in pandas ----------------

For more advanced indexing, use loc and iloc
Both loc and iloc are row-first, column-second. (Oppositve of native python)
'''

''' ---------------- iloc (index based selection) ----------------

Index Based Selection: selecting data based on its numerical position in the data.
iloc is index based selection

to select the first row of data in a DataFrame with iloc:
'''

first_row = data.iloc[0]

# print(first_row)

'''
Because iloc is fow-first, column-second, it is super easy to retrieve rows.
This also means it is much harder to retrieve columns.
To get a column with iloc use [:, n]   // ([row, column])
'''
first_column = data.iloc[:, 0]
# print(first_column)

'''
The (:) operator means "everything". When combined with other sectors, it can be used to indicate a range of values.
For example, to select the first name column from just the first to second row, do:
'''
                                               #[row, column]
first_three_rows_of_the_first_column = data.iloc[:3,0]
# print(first_three_rows_of_the_first_column)

'''
or to select just the second and third entries:
'''
                                                    #[row, column]
second_and_third_rows_of_the_first_column = data.iloc[1:3, 0]

# print(second_and_third_rows_of_the_first_column)

'''
It is also possible to pass a list
'''
                                                            #[row, column]
first_three_rows_of_the_first_column_using_list = data.iloc[[0,1,2],0]
# print(first_three_rows_of_the_first_column_using_list)

'''
Negative numbers can also be used in selection.
This will start counting from the end of the values.
For example, the last 5 elements aare:
'''

last_5 = data.iloc[-5:]
# print(last_5)

#double check - it matches
#print(data.tail())

'''
---------------- loc (label based selection) ----------------

Label Based Selection: data index value (not position)

loc uses the information in the indicies to do its work.
'''

using_loc = data.loc[:, ["First Name", "Sex", "Job Title"]]
# print(using_loc)

'''
choosing between loc and iloc

The two use slightly different indexing schemes

iloc - first element of range is included and the last element is excluded
0:10 gives 0,...,9

loc - indexes are inclusive
0:10 gives 0,...,10

loc can index any datatype, string for example.
If we have a DataFrame with the index values of Apples, ..., Potatoes,..., and I want to
select "all alphabetical fruit choices between Apples and Potatoes", then its a lot more 
convenient to index df.loc['Apples': 'Potatoet] (t coming after s in the alphabet).

df.iloc[0:1000] will return 1000 entries
df.loc[0:1000] will return 1001 entries
to get 1000 using loc I need to go one lower -> df.loc[0:999]
'''


'''
---------------- Manipulating the index ----------------

I can manipulate the index in anyway I want
I can use .set_index() to change the index to whatever I want
'''
new_index = data.set_index("Job Title")
# print(new_index)


'''
---------------- Conditional Selection ----------------

I can select more specific data entries by using conditions

I can grab the DataFrames attribute and set a condition on it
'''
male_only = data.Sex == "Male"
# print(male_only)

'''
Grabbing the attribute returns a true / false series.
To turn it into a DataFrame, put it inside of a loc
'''

male_dataframe = data.loc[data.Sex == "Male"]
# print(male_dataframe)

'''
Can use ampersand (&) to have 2 conditions
Can use or opperator (|) to have either or condition
'''

first_50_male = data.loc[(data.Sex == "Male") & (data.index <= 50)]
# print(first_50_male)

male_or_summersLastName = data.loc[(data.Sex == "Male") | (data["Last Name"] == "Summers")]
# print(male_or_summersLastName)

''''
Pandas come with a few built in conditional selectors

.isin - lets me select data whose values "is in" the list of values

.isnull - returns empty data

.notnull - returns not empty data
'''
isin_data = data.loc[data["Job Title"].isin(["Market researcher" , "Recycling officer"])]
# print(isin_data)

null_gender = data.loc[data.Sex.isnull()]
# print(null_gender)

not_null_gender = data.loc[data.Sex.notnull()]
print(not_null_gender)


'''
---------------- assigning data ----------------

assign constant value:
'''
data["sucker"] = "everyone"
print(data)

'''iterable value: '''

data["sucker"] = range(1, len(data)+1, 1)
print(data)



'''
---------------- Summary Functions ----------------

pandas provide many simple summary functions that restructure the data
'''

'''
.describe()

generates a highlevel summary of the attributes of the given column.
output changes depending on the data type of input
'''

print(data.Sex.describe())

print(data["sucker"].describe())

'''mean function'''
print(data["sucker"].mean())

'''to see all the unique values'''
print(data["Last Name"].unique())

'''see how often each unique value shows up'''
print(data["Last Name"].value_counts())


'''
---------------- Maps ----------------
'''