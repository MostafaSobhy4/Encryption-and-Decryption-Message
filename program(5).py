def check_Twolists_equal():
  list1 = []  #the list will be store in it the elements of list1.
  list2 = []  #the list will be store in it the elements of list2.
  i = z = sum1 = sum2 = count = 0 

  size = int(input("\nPlease Enter The Size of List1 & list2: "))
  print("\nPlease Enter The Elements of List1: ")   

  while i < size:  
   list1 +=  [input()]   #add the elements to the list1.
   sum1+=int(list1[i])   #The process of collecting all list1 elements.
   i+=1

  i=0  #Renewal of the value of i.

  print('*' * 35)
  print("\nPlease Enter The Elements of List2: ")    #This message asks the user to Enter The Elements of List1.
  while i < size:
    list2 +=  [input()]   #add the elements to the list2.
    sum2+=int(list2[i])   #The process of collecting all list2 elements.
    i+=1
  print('*' * 35)

  i=0   #Renewal of the value of i.

  while i < len(list1) :
    while z < len(list2):
      if list1[i]==list2[z]:
        count+=1   #if any element of list1 = any element of list2, add 1 to count.
      z+=1  
    i+=1
    z=0   #Renewal of the value of z.
 
  if count == len(list1) and sum1 == sum2:  #i made that because for ex if list1=[1, 1, 3] and list2=[1, 2, 3]
                                            #if i make only while loop on the elements the count will be 3 and will print true.
                                            #and if i make only while loop to sum elements of list1 & list2 for ex if list1=[1, 2, 4] and list2=[1, 3, 3]
                                            #the sum1 & sum2 will be equal but the elements not the same elements
      
      print("Lists are equal = True")  #if count = size of list1 and if sum1 = sum2, will print a message.

  else:
      print("Lists are equal = False")  #else, will print a message.

check_Twolists_equal()

