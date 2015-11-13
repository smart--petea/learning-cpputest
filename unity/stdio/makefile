UNITY_ROOT=/usr/src/Unity

default:
	gcc -I$(UNITY_ROOT)/src \
		-I$(UNITY_ROOT)/extras/fixture/src \
		$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
		$(UNITY_ROOT)/src/unity.c  \
		SprintfTest.c  \
		SprintfTestRunner.c \
		AllTests.c \
		-o test.out 
