"""
T = int(input("Water Temperatures: "))
if T <= 0 :
    print("Freeze") 
elif 0 < T <= 100 :
    print("cair")
elif 101 <= T < 1000 :
    print("uap")        
else :
    print("gawendeng panaseeee")    
"""
'''tup = ("gibbrani","surya")
print (set (tup))'''
class Employee:

    # constructor for initialization
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # instance method
    def emp_data(self):
        print('Name of Employee : ', self.name)
        print('Age of Employee : ', self.age)


class Data:
    def __init__(self, address, salary, emp_obj):
        self.address = address
        self.salary = salary

        # creating object of Employee class
        self.emp_obj = emp_obj

    # instance method
    def display(self):

        # calling Employee class emp_data()
        # method
        self.emp_obj.emp_data()
        print('Address of Employee : ', self.address)
        print('Salary of Employee : ', self.salary)

# creating Employee class object
emp = Employee('Ronil', 20)

# passing obj. of Emp. class during creation
# of Data class object
data = Data('Indore', 25000, emp)

# call Data class instance method
data.display()