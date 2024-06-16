line = io.read() -- read a line
n = tonumber(line) -- try to convert it to a number
if n == nil then
  error(line .." is not a valid number")
else
  print(n*2)
n = tostring(line)
print("n is now a " .. type(n)) -- concatenate
end
