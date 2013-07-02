//
//  SimpleTest.m
//  SimpleProject
//
//  Created by Silviu Pop on 7/2/13.
//  Copyright (c) 2013 Silviu Pop. All rights reserved.
//

#import "GHTestCase.h"
#import "NumberDoubler.h"

@interface SimpleTest : GHTestCase

@end

@implementation SimpleTest

- (void)testNumbers {

    GHAssertEquals([NumberDoubler doubleNumber:0], 0, @"0 * 2 = 0");
    GHAssertEquals([NumberDoubler doubleNumber:10], 20, @"10 * 2 = 20");

}

@end
