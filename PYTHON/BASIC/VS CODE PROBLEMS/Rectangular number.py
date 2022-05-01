n = int(input())

for cr in range(1, n + 1) :
  for a in range(n, n - cr, -1) :
    print(a, end = '')
  
  for b in range(1, n - cr + 1) :
    print(n - cr + 1, end = '')

  for c in range(1, n - cr + 1) :
    print(n - cr + 1, end = '')

  for d in range(1, cr) :
    print(n - cr + d + 1, end = '')

  print()

for cr in range(1, n):
  for a in range(1, n - cr):
    print(n - a + 1, end = '')
  
  for b in range(1, cr + 1):
    print(cr + 1, end = '')
  
  for c in range(1, cr + 1):
    print(cr + 1, end = '')
  
  for d in range(1, n - cr + 1):
    print(cr + d, end = '')

  print()