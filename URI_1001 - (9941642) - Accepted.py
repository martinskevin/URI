x = None
y = None

def read_integer():
  try:
    # read for Python 2.x
    return int(raw_input())
  except NameError:
    # read for Python 3.x
    return int(input())


x = read_integer()
y = read_integer()
print(str("X = ") + str(x + y))
