# Function for count of student absent for test 

def absentSC(listOfStudent, numberOfStudent):
    count = 0
    for i in range(numberOfStudent):
        if listOfStudent[i]==0:
            count +=1
    return count       


# Function for Maximum-------------------------------------------->>

def maxMarks(listOfStudent, numberOfStudent):
    max = 0
    for i in range(numberOfStudent):
        if max<listOfStudent[i]:
            max = listOfStudent[i]

    return max




# Function for Minimum------------------------------------------->>>

def minMarks(listOfStudent, numberOfStudent):
    min = listOfStudent[0]
    for i in range(numberOfStudent):
        if min>listOfStudent[i]:
            min = listOfStudent[i]

    return min
    
    


# Function for Average--------------------------------->>>

def averageOfMarks(listOfStudent, numberOfStudent):
    sumInitialize = 0
    for i in range(numberOfStudent):
        sumInitialize += listOfStudent[i]

    return (sumInitialize/numberOfStudent)

#func for highest frequency of marks

def freq(listOfStudent):
    i=0
    max=0
    print("marks|frequency")
    for j in listOfStudent:
        if(listOfStudent.index(j)==i):
            print(j,"|",listOfStudent.count(j))
            if listOfStudent.count(j)>max:
                max=listOfStudent.count(j)
                mark=j
            i=i+1
    return(mark,max)

# main program---->>

flag=1
listOfStudent = []   
numberOfStudent = int(input("Enter No of Student: "))

    
for i in range(numberOfStudent):
    marks = int(input("Enter marks for student "))
    listOfStudent.append(marks)
    

def showList():
    print("--------------------Select Your Choice From Following list-----------------\n1) Enter 1 for Average\n2) Enter 2 for Maximum\n3) Enter 3 for Minimum\n4)Enter 4 for Count of absent student\n5)marks with highest frequency\n6) Enter 6 to exit")
showList()

while (flag==1):
    choice = input("Enter your choice: ")
    if choice == "1":
        print("Average marks obtained by student is:",averageOfMarks(listOfStudent, numberOfStudent))
        
    elif choice == "2":
        print("Maximum marks obtained by student is: ",maxMarks(listOfStudent, numberOfStudent))
        
    elif choice == "3":
        print("Minimum marks obtained by student is: ",minMarks(listOfStudent, numberOfStudent))
        
    elif choice == "4":
        print("Number of absent student are: ", absentSC(listOfStudent, numberOfStudent))
        
    elif choice == "5":
        print("marks with highest frequency: ", freq(listOfStudent))
        
    elif choice=="6":
        flag=0
    else:
        print("You entered wrong choice try again")
    
