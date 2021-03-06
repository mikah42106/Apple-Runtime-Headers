//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewDiffableDataSource.h>

@protocol TSKDiffableDataSourceProxy;

@interface TSKDiffableDataSource : UITableViewDiffableDataSource
{
    struct {
        unsigned int titleForHeaderInSection:1;
        unsigned int titleForFooterInSection:1;
        unsigned int canEditRowAtIndexPath:1;
        unsigned int canMoveRowAtIndexPath:1;
        unsigned int sectionIndexTitlesForTableView:1;
        unsigned int sectionForSectionIndexTitle:1;
        unsigned int commitEditingStyle:1;
        unsigned int moveRowAtIndexPath:1;
    } _dataSourceProxyRespondsTo;
    id <TSKDiffableDataSourceProxy> _dataSourceProxy;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TSKDiffableDataSourceProxy> dataSourceProxy; // @synthesize dataSourceProxy=_dataSourceProxy;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end

