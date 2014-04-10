ss = 1
k = 2
for i in range (3, 1002, 2):
#	print(pow(i,2))
	m = pow(i, 2)
	ss = ss + 4 * m - (k + 2 * k + 3 * k)
	k = k + 2
print(ss)
