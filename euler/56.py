def digitSum(x):
	s = str(x)
	ss = 0
	for i in range (0, len(s)):
		ss = ss + int(s[i])
	return ss

m = 0
for a in range (1, 100):
	for b in range (1, 100):
		temp = pow(a, b)
		if m < digitSum(temp):
			m = digitSum(temp)
print(m)
