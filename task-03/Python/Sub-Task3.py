n=int(input("Enter the number of rows:"))
for i in range(1,2*n):
   if i>n:
     stars=2*n-i
   else:
     stars=i
   spaces=n-stars
   for j in range(spaces):
     print(" ",end="")
   for k in range(stars):
     print("* ",end="")
   print()
