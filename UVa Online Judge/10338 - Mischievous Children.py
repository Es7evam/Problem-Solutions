import collections
import math

t = int(input())

for i in range(t):
	s = input()
	answ = math.factorial(len(s))

	dictio = collections.Counter(s).most_common()
	for j in dictio:
		answ = answ / math.factorial(j[1])

	printer = 'Data set ' + str(i+1) + ': ' + str(int(answ))
	print(printer)

