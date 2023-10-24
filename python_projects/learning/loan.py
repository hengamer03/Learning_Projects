
# Loan Calculator
loan = float(input("type in how much you owe\n")) #50000
apr = float(input("What is the annual percentage rate\n")) #3%
payment = float(input("what will your monthly payment be\n")) #1000
months = int(input("How many months do you want to see rusults for\n")) #24

monthly_rate = apr/100/12

for i in range(months):
  interest_paid = loan * monthly_rate
  loan = loan + interest_paid

  if (loan - payment < 0):
    print("the last payment is", loan)
    print("you paid off the loan", i+1, "months")
    break

  loan = loan - payment

  print("I Paid", payment, "of whitch", interest_paid, "was interest")
  print("Now i owe", loan)