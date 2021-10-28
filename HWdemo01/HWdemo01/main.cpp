//
//  main.cpp
//  CPPdemo06_testGtest
//
//  Created by Steven Yu on 2021/10/26.
//

//main.cpp
#include <gtest.h>
/*Google_Test Launcher*/

int main(int argc, const char * argv[]) {
    testing::InitGoogleTest(&argc, (char**)argv);
    return RUN_ALL_TESTS();
}
