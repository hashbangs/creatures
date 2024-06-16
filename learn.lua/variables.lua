x = 10
local i = 1       -- local to the chunk

while i <= x do   -- local to the while body
  local x = i*2   --> 2, 4, 6, 8, ...
  print(x)
  i = i + 1
end

if i > 20 then
  local x         -- local to the "then" body
  x = 20
  print (x + 2)
else
  print(x)        --> 10 (the global one)
end

print(x)          --> 10 (the global one)
