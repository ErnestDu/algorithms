def fib():
	global f1, f2
	found = 0
	count = 2
	while found == 0:
		f3 = f1 + f2
		f1 = f2
		f2 = f3
		count = count + 1
		##print f3
		if len(str(f3)) >= 1000:
			print f3
			print count
			found = 1
f1 = 1
f2 = 1
fib()
