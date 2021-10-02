def find(a,x):
	for i in range (0,len(a)):
		if(a[i] == x):
			return i
	return -1

n = int(input())
x = int(input())
a = []

for i in range n:
	a.append(int(input()))

ans = find(a,x)

if(ans==-1):
	print("UNABLE TO FIND")
else:
	print("IS AT %d POSITION"%(ans))