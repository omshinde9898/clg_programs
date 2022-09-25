arr =[]
n = int(input("Number of Students : "))
for i in range(n):
    mark = input("Enter marks of "+str(i)+" student : ")
    arr.append(mark)

def absent(a):
    m = 0
    for i in range(len(a)):
        if a[i] == "Ab":
            m = m + 1
        else:
            pass
    return m

def avg(a):
    s = 0
    for i in range(len(a)):
        if a[i] == "Ab":
            pass
        else:
            s = s + int(a[i])
    s =  s/(len(a)-absent(a))     
    return s

def maximum(a):
    m = 0
    for i in range(len(a)):
        if a[i] == "Ab":
            pass
        else:
            if m<a[i]:
                m = a[i]
    return m

def minimum(a):
    m = 110
    for i in range(len(a)):
        if a[i] == "Ab":
            pass
        else:
            if m>a[i]:
                m = a[i]
    return m

def repeat(a):
    b = []
    c = []
    for i in a:
        if i in b:
            c[b.index(i)] = c[b.index(i)] + 1
        else:
            b.append(i)
            c.insert(b.index(i),1)
    
    d = maximum(c)
    j = c.index(d)

    return [b[j],c[j]]


print("Number of Absent : ",absent(arr))
print("average marks : ",avg(arr))
print("Maximum marks : ",maximum(arr))
print("Max Occurence : ",repeat(arr))