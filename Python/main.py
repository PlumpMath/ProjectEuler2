result = 0 #Integer to store the result of the integer

num1 = 1
num2 = 2 #Integers to store the values of the sequence

finalResult = 0

print("Starting calculation of the fibonnacci sequence")

while (num2 <= 4000000):
    result = num1 + num2 #calculate the next fibonnacci nulber

    #move back all of the numbers
    num1 = num2
    num2 = result

    if result % 2 == 0:
        finalResult = finalResult + result

        print("Final result : ")
        print(finalResult)
