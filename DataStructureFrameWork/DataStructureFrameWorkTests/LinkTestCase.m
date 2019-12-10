//
//  LinkTestCases.m
//  DataStructureFrameWorkTests
//
//  Created by Zoey Weng on 12/1/19.
//  Copyright © 2019 piaojin. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <DataStructureFrameWork/DataStructureFrameWork.h>

@interface LinkTestCases : XCTestCase

@end

@implementation LinkTestCases

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    Node *head = createLinkNode(10);
    printLinkNode(head);
}

@end
