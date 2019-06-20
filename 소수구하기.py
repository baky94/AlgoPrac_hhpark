arr = list(map(int, input().split()))
result = [1 for x in range(arr[1]+1)]

result[0] = -1
result[1] = -1

for i in range(2,arr[1]//2+1):
    result[2*i] = -1
    if 3*i <= arr[1]:
        result[3*i] = -1
    if 5*i <= arr[1]:
        result[5*i] = -1
    if 7*i <= arr[1]:
        result[7*i] = -1
    if i>7:
        if result[i] == 1:
            tmp = i
            while i*tmp <= arr[1]:
                result[i*tmp] = -1
                tmp += 1


for num in range(arr[0],arr[1]+1):
    if result[num] == 1:
        print(num)



# for num in range(8,arr[1]+1):
#     if result[num] == 1:
#         if (num > 7):
#             tmp = num
#             while num*tmp <= arr[1]:
#                 result[num*tmp] = -1
#                 tmp += 1


# def find_prime(num):
    
#     for i in comp:
#         if i == num:
#             return

#     check = True
#     for i in range(2,num//2+1):
#         if num%i == 0:
#             check = False

#     if check:
#         result.append(num)
#         comp.append(num*2)
#         comp.append(num*3)
#     return






# for i in range(len(result)):
#     print(result[i])
