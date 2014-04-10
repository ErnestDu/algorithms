n = pow(2,1000)
s = str(n)
length = len(s)
m = 0
for i in range (0, length):
	print i,  s[i]
	m = m + int(s[i])
print m
