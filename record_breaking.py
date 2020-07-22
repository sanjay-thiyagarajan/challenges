test_cases = int(input())

rec_days = 0

for i in range(0,test_cases):
    days = int(input())
    vis = input()
    visits = vis.split()
    rec_days = 0
    
    for j in range(0,len(visits)):
        if j != 0:
            if j == (len(visits)-1):
                arr1 = visits[0:j+1]
                arr1.sort()
                if arr1[-1] == visits[j]:
                    if arr1[-1] != arr1[-2]:
                        rec_days = rec_days+1
            else:
                arr1 = visits[0:j+1]
                arr1.sort()
                if arr1[-1] == visits[j]:
                    if visits[j] > visits[j+1]:
                        rec_days = rec_days+1
        else:
            if visits[j] > visits[j+1]:
                rec_days = rec_days + 1
            else: 
                rec_days = 0
    print(rec_days)
                    