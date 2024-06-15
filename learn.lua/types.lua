-- any variable may contain values of any type
-- a global variable is existent only if it has a non-nil value

local a

print(type(a))
a = 10
print(type(a))
a = "a string"
print(type(a))
a = print
a(type(a))

print(" ")

print(type(true))
