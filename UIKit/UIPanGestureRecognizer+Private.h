@interface UIPanGestureRecognizer (Private)

@property (setter=_setHysteresis:) CGFloat _hysteresis;
@property (assign, nonatomic) BOOL failsPastMaxTouches;

@end