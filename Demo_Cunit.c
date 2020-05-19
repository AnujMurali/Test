#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "CUnit/Basic.h"
#include "CUnit/CUnit.h"
#include "collab.h"

void test_mod(void)
{
	CU_ASSERT (mod(3,2) == 1);
}

void test_power(void)
{
	CU_ASSERT (power(3,2) == 9);
    
}

int main() 
{
CU_initialize_registry();
CU_pSuite suite_1 = CU_add_suite("TestSuite_1", 0, 0);
CU_pSuite suite_2 = CU_add_suite("TestSuite_2", 0, 0);
CU_add_test(suite_1, "Test_Suite_1", test_mod);
CU_add_test(suite_2, "Test_Suite_2", test_power);
CU_basic_set_mode(CU_BRM_VERBOSE);
CU_basic_run_tests();
CU_cleanup_registry();
return 0;
}
