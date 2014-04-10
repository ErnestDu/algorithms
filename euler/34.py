#for i in range (1, 100):
#	if pow(10, i) > 3628800 * i:
#		print(i)
#		break
f = [1,1,2,6,24,120,720,5040,40320,362880]
num = [0,1,2,3,4,5,6,7,8,9]
char = "0123456789"
total = 0
for i in range (10, 1000000):
	s = str(i)
	length = len(s)
	ss = 0
	for j in range (0, length):
		for k in range (0, 10):
			if s[j] == char[k]:
				ss = ss + f[k]
	if ss == i:
		print(i)
		total = total + i
print(total)
