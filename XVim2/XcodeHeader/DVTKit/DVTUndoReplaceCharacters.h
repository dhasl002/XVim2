//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSUndoReplaceCharacters.h>

@class DVTTextStorageCommonUndoHelper;

@interface DVTUndoReplaceCharacters : NSUndoReplaceCharacters
{
    DVTTextStorageCommonUndoHelper *_undoHelper;
}

- (void).cxx_destruct;
- (void)undoRedo:(id)arg1;
- (id)description;
- (id)initWithAffectedRange:(struct _NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(struct _NSRange)arg4;

@end
