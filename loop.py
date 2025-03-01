# # Prompt the uset to enter student's marks

# marks = int(input("Enter the student's marks (0 - 100): "))
# # Grading based on the marks
# if marks > 70:
#     print("Grade: Distinction A🏆")
# elif marks >= 60:
#     print("Grade: Credit B🥇")
# elif marks >= 50:
#     print("Grade: Pass C👍")
    
# else:
#     print("Grade: Fail ❌")
    
    
#print numbers 0 to 4
# For loops
# for i in range(100):
#     print(i)

#while loop - Runs as long as the condition is true
# countdown = 5
# while countdown > 0:
#     print("Counting down:",countdown)
#     countdown -= 1
# print("Blast off!")

# Write a function that prompts the user to input a year then checks whether the year input by the user is a leap year or not 
def is_leap_year(year):
    if  (year % 4 == 0 and year % 100 !=0) or ( year % 400 == 0):
        return True
    else :
     return False
 
year = int(input("Hello User, Kindly Enter a Year: "))
if is_leap_year(year):
    print(f"{year} is a Leap Year")
    
else:
    print(f"{year} is not a Leap Year")