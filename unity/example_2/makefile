UNITY_ROOT=/usr/src/Unity

default:
	gcc -Isrc -I$(UNITY_ROOT)/src \
		-I$(UNITY_ROOT)/extras/fixture/src \
		$(UNITY_ROOT)/src/unity.c \
		$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
		src/ProductionCode.c \
		test/TestProductionCode_Runner.c \
		test/TestProductionCode.c \
		test/all_tests.c \
		-o test.out

