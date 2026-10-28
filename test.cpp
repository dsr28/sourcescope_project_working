
#include <gtest/gtest.h>

extern "C" {
#include "bst.h"
}

TEST(BSTTest, InsertAndFindSymbol)
{
    BSTNode* root = nullptr;
    root = bst_insert(root, "main", 0);

    EXPECT_EQ(bst_find(root, "main"), 0);

    bst_free(root);
}
