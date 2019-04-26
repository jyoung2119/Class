#Employee Class

class Employee:
    def __init__(self, name, idNum, dept, job):
        self.__name = name
        self.__idNum = idNum
        self.__dept = dept
        self.__job = job

    def name_stuff(self, name):
        self.__name = name
    
    def id_stuff(self, idNum):
        self.__idNum = idNum

    def dept_stuff(self, dept):
        self.__dept = dept
    
    def job_stuff(self, job):
        self.__job = job

    def get_name(self):
        return self.__name
    
    def get_id(self):
        return self.__idNum
    
    def get_dept(self):
        return self.__dept
    
    def get_job(self):
        return self.__job

def main():
    sM = Employee("Susan Meyers", 47899, "Accounting", "VP")
    mJ = Employee("Mark Jones", 39119, "IT", "Programmer")
    jR = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")

    print("Name\t\tID Number\t\tDepartment\t\tJob Title")
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    print(sM.get_name(), "\t", sM.get_id(), "\t\t\t", sM.get_dept(), "\t\t", sM.get_job())
    print(mJ.get_name(), "\t", mJ.get_id(), "\t\t\t", mJ.get_dept(), "\t\t\t", mJ.get_job())
    print(jR.get_name(), "\t", jR.get_id(), "\t\t\t", jR.get_dept(), "\t\t", jR.get_job())

main()