# import kagglehub

# # Download latest version
# path = kagglehub.dataset_download("emanfatima2/spotify-global-hits-and-artist-analytics")

# print("Path to dataset files:", path)

import pandas as pd
import numpy as np

'''
data_set = pd.read_csv("spotify_wrapped_2025_top50_artists.csv")

This would give me an error because the path is incorrect. I thought that it would be fine because the main file and dataset file are both in the same folder.
Turns out that the file path needs the folders name. I think this is because the cd is in the main folder
'''


'''----------------------------------------------------------------------- 1. load data -----------------------------------------------------------------------'''

dataset = pd.read_csv("spotify/spotify_wrapped_2025_top50_artists.csv")

'''
print("head")
print(dataset.head())
print()

print("describe")
print(dataset.describe())
print()

print("columns")
print(dataset.columns)
print()

print(dataset.isna().sum())
'''

#set up target
y = dataset["monthly_listeners_millions_mar2026"]

#-------------
# model cannot take any non inter values. I need to one hot encode or something
#------------

#I dont want to give the name of the artist 
features = ["wrapped_2025_rank", "primary_genre", "country", "followers_millions", "grammy_wins","debut_year", "gender"]

features = ["wrapped_2025_rank", "followers_millions", "grammy_wins","debut_year"]

X = dataset[features]

'''
print(features.head())

this doesnt work because a list doesnt have an attribute of head()
think about it, features is just a list containing the feature titles that I want to use
you need a pandas dataframe to in spect the data.

'''

'''
#checking if features loaded correctly
print(X.head())
# #describe only works on numerical values
print(X.describe())
'''


'''----------------------------------------------------------------------- 2. Make Model -----------------------------------------------------------------------'''

'''
This model will be a regression model. A regression model predicts a continuous integer. 
The decision tree regressor makes a tree by the if/else statements.
'''

from sklearn.tree import DecisionTreeRegressor

monthly_listeners_model = DecisionTreeRegressor(random_state=0)

monthly_listeners_model.fit(X,y)


#making predictions
#print("predict X.head() listeners:")
#print(monthly_listeners_model.predict(X.head()))


'''----------------------------------------------------------------------- 3. Model validation -----------------------------------------------------------------------'''

from sklearn.metrics import mean_absolute_error

predicted = monthly_listeners_model.predict(X)
MAE = mean_absolute_error(y, predicted)

print("MAE for the model: ", MAE)

'''
The MAE is 0. That means that every single prediction was perfectly correct.
This is because we are predicting the same data that I used to train the model.
This is a inaccurate score of the actual performance. This problem can be solved by train, test, split.
'''

from sklearn.model_selection import train_test_split

train_X, test_X, train_y, test_y = train_test_split(X, y , test_size=0.2, random_state=0)

monthly_listeners_model = DecisionTreeRegressor(random_state=0)

monthly_listeners_model.fit(train_X, train_y)

predictions = monthly_listeners_model.predict(test_X)
MAE = mean_absolute_error(test_y, predictions)

print("MAE for model with train/test/split: ", MAE)
