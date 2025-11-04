def positional_argument(name,age,rchar):
    print(name,age,rchar)

def keyword_argument(age,name,rchar):
    print(name,age,rchar)

def default_argument(age=25,name="Harsh",rchar='A'):
    print(name,age,rchar)

def variable_lenght_argument(*args, **keywords):
    print("positional",args)
    print("keywords", keywords)


positional_argument("Mohan",87,'a')
keyword_argument(name="KOKO",age=56,rchar='N')
default_argument()
variable_lenght_argument(1,2,3, a=4,b=5)
