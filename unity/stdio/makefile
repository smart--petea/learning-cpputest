UNITY_ROOT=/usr/src/Unity

default:
	ruby $(UNITY_ROOT)/auto/generate_test_runner.rb SprintfTest.c
	gcc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c $(UNITY_ROOT)/src/unity.c  SprintfTest.c  SprintfTest_Runner.c -o test.out 
