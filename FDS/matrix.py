def get_mat(row,col):
    mat = []
    for i in range(row):
        r = []
        for j in range(col):
            v = int(input("Enter Element : "))
            r.append(v)
        mat.append(r)
    return mat

def show_mat(mat):
    for i in mat:
        for j in i[0]:
            print(j,end=" ")
        print

def add_mat(mat1,mat2):
    new_mat = []
    for i in range(len(mat1)):
        r = []
        for j in range(len(mat1[0])):
            v = mat1[i][j] + mat2[i][j]
            r.append(v)
        new_mat.append(r)
    return new_mat

def sub_smat(mat1,mat2):
    new_mat = []
    for i in range(len(mat1)):
        r = []
        for j in range(len(mat1[0])):
            v = mat1[i][j] - mat2[i][j]
            r.append(v)
        new_mat.append(r)
    return new_mat

def mult(mat1,mat2):
    new_mat = []
    for i in range(len(mat1)):
        r = []
        for j in range(len(mat1[0])):
            s =[]
            for k in range(len(mat1)):
                v = mat1[i][j] * mat2[k][j]
                s.append(v)
            r.append(sum(s))
        new_mat.append(r)
    return new_mat

def transp(mat):
    new_mat = []
    for i in range(len(mat)):
        r = []
        for j in range(len(mat[0])):
            r.append(0)
        new_mat.append(r)
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            new_mat[i][j] = mat[j][i]
    return new_mat


rows = int(input("Enter Rows :"))
cols = int(input("Enter Columns :"))

print("First Matrix")
m1 = get_mat(rows,cols)
print("Second Matrix")
m2 = get_mat(rows,cols)

while True:

    print("\nChoose :")
    print("1 : Add")
    print("2 : Sub")
    print("3 : Mult")
    print("4 : Transpose")
    print("5 : Exit")
    
    act = int(input(" : "))
    
    if act == 1:
        add =add_mat(m1,m2)
        print("Addition : ",add)
    elif act == 2:
        sub = sub_smat(m1,m2)
        print("Substraction : ", sub)
    elif act == 3:
        m = mult(m1,m2)
        print("Multiplication  : ",m)
    elif act == 4:
        t = transp(m1)
        t1 = transp(m2)
        print("Transpose of Matrix 1 : ",t)
        print("Transpose of Matrix 2 : ",t1)
    elif act == 5:
        exit()
    else:
        print("Choose Valid Options")