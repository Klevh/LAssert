#define LASSERT_MANUAL_MAIN
#include "../LAssert.h"
#include <string.h>

BEGIN_SECTION(succeed)

TEST_CASE(test1){
    int i;
    
    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

TEST_CASE(test3){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

TEST_CASE(test2){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

END_SECTION

BEGIN_SECTION(failed)
    
    TEST_CASE(test1){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

TEST_CASE(test3){
    int i;

    for(i = 4;; --i)
	REQUIRE(i);
}

TEST_CASE(test2){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}
    
END_SECTION


BEGIN_SECTION(pointer_alloc_failed)

    TEST_CASE(test1){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

TEST_CASE(test2){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
}

TEST_CASE(test3){
    int i;

    for(i = 0; i < 4; ++i)
	REQUIRE(i + 1);
    REQUIRE_NOT_NULL(1);
    REQUIRE_NOT_NULL(NULL);
}
END_SECTION

int main(){
    RUN_SECTION(failed);
    RUN_SECTION(succeed);
    RUN_SECTION(pointer_alloc_failed);
    
    return 0;
}
