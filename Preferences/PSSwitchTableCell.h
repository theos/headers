#import "PSControlTableCell.h"

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell  {
    UIActivityIndicatorView *_activityIndicator;
}

@property BOOL loading;

- (BOOL)loading;
- (void)setLoading:(BOOL)loading;
- (id)controlValue;
- (id)newControl;
- (void)setCellEnabled:(BOOL)enabled;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;
- (BOOL)canReload;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setValue:(id)value;

@end
