import os
# for i in range(1,11):
    # os.mkdir(f"PythonHarry/DATA/Fol{i}")
    # os.rename(f"PythonHarry/DATA/Fol{i}", f"PythonHarry/DATA/Fold{i}")

# print(os.getcwd())

folders = os.listdir("PythonHarry")

for folder in folders:
    print(folder)
    