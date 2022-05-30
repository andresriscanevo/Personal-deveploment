import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import matplotlib 

from sklearn.ensemble import IsolationForest
df = pd.read_excel ("Superstore.xls") 
df ['Sales']. describe ()