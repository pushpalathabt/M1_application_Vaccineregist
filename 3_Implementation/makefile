PROJ_NAME = Vaccine_Registration
SRC = Project_main.c\
src/existreg.c\
src/regist.c
TEST_SRC = src/regist.c\
src/existreg.c\
test/test_regist.c\
unity/unity.c 
  

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)
INC	= -Iinc\
-Iunity

all:$(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


run: all
	./$(call FixPath,$(PROJ_NAME).$(EXEC))



