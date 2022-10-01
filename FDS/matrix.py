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
    print("3 : Exit")
    
    act = int(input(" : "))
    
    if act == 1:
        add =add_mat(m1,m2)
        print("Addition : ",add)
    elif act == 2:
        sub = sub_smat(m1,m2)
        print("Substraction : ", sub)
    elif act == 3:
        exit()
    else:
        print("Choose Valid Options")