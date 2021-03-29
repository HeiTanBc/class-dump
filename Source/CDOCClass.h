// -*- mode: ObjC -*-

//  This file is part of class-dump, a utility for examining the Objective-C segment of Mach-O files.
//  Copyright (C) 1997-2019 Steve Nygard.

#import "CDOCProtocol.h"

#import "CDTopologicalSortProtocol.h"

@class CDOCClassReference;

@interface CDOCClass : CDOCProtocol <CDTopologicalSort>

@property (strong) CDOCClassReference *superClassRef;
@property (copy, readonly) NSString *superClassName;
@property (strong) NSArray *instanceVariables;
@property (assign) BOOL isExported;
@property (assign) BOOL isSwiftClass;
@property (nonatomic) uint64 classAddress;
@property (nonatomic) uint64 metaClassAddress;
@property (nonatomic) uint64 classRoAddress;
@property (nonatomic) uint64 metaClassRoAddress;
@property (nonatomic) uint64 instanceMethodsAddress;
@property (nonatomic) uint64 protocolsAddress;
@property (nonatomic) uint64 instanceIvarAddress;
@property (nonatomic) uint64 propertiesAddress;

@end
