-- read lines storing them in a table
M = 4
a = {} -- create a lua table
for i =1,M do
  a[i] = io.read()
end
for i =1,M do
  print ("- " .. a[i])
end
