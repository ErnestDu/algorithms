def divSum (x):
	upper = int(x / 2) + 1
	s = 0
	for i in range (1, upper):
		if x % i == 0:
			s = s + i
	#print(s)
	return s

array = []
for i in range (10000):
	array.append(0)

for i in range (1, 10000):
	if divSum(divSum(i)) == i and divSum(i) != i:
		array[i] = 1

s = 0
for i in range (1, 10000):
	if array[i] == 1:
		s = s + i
	#	print(i)
print(s)
