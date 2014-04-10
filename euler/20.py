def factorial(n):
	fac = 1
	for i in range (1, n+1):
	 	fac = fac * i
	return fac

#print factorial(10)
s = str(factorial(100))
print s
length = len(s)
m = 0
for i in range (0, length):
	m = m + int(s[i])
print m
