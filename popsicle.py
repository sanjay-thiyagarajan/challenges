'''Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount 
or if you shouldn't mention the popsicles at all.'''

# input format - first one represents the no. of siblings an second one represents no. of popsicles.

siblings = int(input('Enter the number of  siblings : '))
popsicles = int(input('Enter the number of popsicles : '))3

if  ((siblings % popsicles == 0) or (popsicles % siblings == 0)):
    print('give away')
else:
    print('eat them yourself')