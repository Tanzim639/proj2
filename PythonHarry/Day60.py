# # Getter
# class MyClass:
#   def __init__(self, val):
#     self._value = val

#   @property
#   def value(self):
#     return self._value


# obj = MyClass(69)
# print(obj.value)





# #Setter
# class MyClass:
#   def __init__(self, val):
#     self.value = val

#   @property
#   def value(self):
#     return self._value

#   @value.setter
#   def value(self, new_value):
#     self._value = new_value

# obj = MyClass(23)
# print(obj.value)
# obj.value = 96
# print(obj.value)




# class Cls:
#     def __init__(self, val) -> None:
#         self._value = val

#     @property
#     def value(self):
#         return self._value
    
#     @value.setter
#     def value(self, val):
#         self._value = val


# obj = Cls(12)
# print(obj.value)
# obj.value = 100
# print(obj.value)



class MyClass:
  def __init__(self, value):
    self._value = value
    
  def show(self):
    print(f"Value is {self._value}")
    
  @property
  def ten_value(self):
    return 10* self._value
    
  @ten_value.setter
  def ten_value(self, new_value):
    self._value = new_value/10

obj = MyClass(10)
obj.ten_value = 67
print(obj.ten_value)
obj.show()