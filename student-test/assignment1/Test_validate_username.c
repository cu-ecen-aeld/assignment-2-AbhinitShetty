#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in Test_assignment_validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{
	const char *ptr = my_username();
	char *ptr2 = malloc_username_from_conf_file();

	char str1[20];
	char str2[20];

	int i = 0; 
	int j = 0;

	while (*ptr != '\0'){
		str1[i] = *ptr;
		i++;
		ptr++;
	}
	str1[i] = '\0';

	while (*ptr2 != '\0'){
                str2[j] = *ptr2;
                j++;
                ptr2++;
        }
	str2[j] = '\0';

    /**
     * TODO: Replace the line below with your code here as described above to verify your /conf/username.txt 
     * config file and my_username() functions are setup properly
     */
    TEST_ASSERT_EQUAL_STRING (str1,str2);
}
