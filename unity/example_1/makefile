UNITY_ROOT=/usr/src/Unity
SRC_FILES=$(UNITY_ROOT)/src/unity.c src/ProductionCode.c test/TestProductionCode.c test/TestProductionCode_Runner.c
SRC_FILES2=$(UNITY_ROOT)/src/unity.c src/ProductionCode2.c test/TestProductionCode2.c test/TestProductionCode2_Runner.c
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src

TARGET_EXTENSION=.out

TARGET_BASE1=test1
TARGET1=$(TARGET_BASE1)$(TARGET_EXTENSION)

TARGET_BASE2=test2
TARGET2 = $(TARGET_BASE2)$(TARGET_EXTENSION)

default:
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/TestProductionCode.c
	gcc $(INC_DIRS) $(SRC_FILES) -o $(TARGET1)
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb test/TestProductionCode2.c
	gcc $(INC_DIRS) $(SRC_FILES2) -o $(TARGET2)
