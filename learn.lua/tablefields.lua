-- a.x is syntax for a["x"]
-- a["x"] =! a[x]

local a, b

a = {} -- empty table

for i=1,200 do a[i] = i*2 end -- create 200 new entries
print(a[9])
a.x = 10
print (a["x"]) -- a table can store values with different types of indices
print (a["y"])
b = a
print (b.x)
b = nil -- frees b: now only a still refers to the table
