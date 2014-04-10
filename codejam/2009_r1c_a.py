def war(s):
	length = len(s)
	d = []
	d.append(' ')
	d.append(s[0])
	flag = 0
	for i in range (1, length):
		if flag == 0 and s[i] != d[1]:
			d[0] = s[i]
			flag = 1
	j = 1
	for i in range (0, length):
		flag = 0
		for k in range (0, j+1):
			if s[i] == d[k]:
				flag = 1

		if flag == 0: ## new digit
			j = j + 1
			d.append(s[i])
	n = j + 1
	ss = 0
	for i in range (0, length):
		for k in range (0, n):
			if s[i] == d[k]:
				ss = ss + k * int(pow(n, length - 1 - i))
	return ss
t = input()
for i in range (1, int(t) + 1):
	s = input()
	print("Case #" + str(i) +": " + str(war(s)))
