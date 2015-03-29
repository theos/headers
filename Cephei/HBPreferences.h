/**
 * The `HBPreferences` class provides an interface for managing the
 * user-defined preferences of a tweak, and the default values used when the
 * user has not yet changed a value.
 *
 * `HBPreferences` is very similar to `NSUserDefaults`, however it is
 * specifically tailored to iOS tweak development, since tweaks may be loaded
 * into a sandboxed app (for instance, App Store apps), or one that runs as
 * the `root` user (for instance, Cydia). In both of these cases, using
 * `NSUserDefaults` will result in reading from preferences inside the
 * sandbox, or inside `root`'s home directory; both of which are not what is
 * expected.
 *
 * Advantages `HBPreferences` has over `NSUserDefaults` are:
 *
 * - Directly reading the property list from the `mobile` user's home
 * directory, to support sandboxed apps and apps running as `root`.
 * - Intuitive method of setting a default preference value.
 * - Updating of the app/tweak's variables when preferences are changed.
 * - Keyed subscripting is allowed, which enables simple array syntax:
 *         NSString *value = preferences[@"key"];
 *         preferences[@"key"] = @"awesome";
 *
 * - Values in the preferences plist are called preferences, not defaults, to
 * avoid confusion. (`NSUserDefaults` even uses "defaults" to refer to both
 * preferences themselves and the defaults if a key doesn't exist.)
 */

@interface HBPreferences : NSObject

/**
 * The default preferences to be used when no value has been set by the user.
 *
 * You may modify the values of this dictionary directly.
 */
@property (nonatomic, retain, readonly) NSMutableDictionary *defaults;

/**
 * The preferences identifier provided at initialisation.
 */
@property (nonatomic, retain, readonly) NSString *identifier;

/**
 * @name Initializing an HBPreferences Object
 */

/**
 * Creates an instance of the class for the specified identifier.
 *
 * @param identifier The identifier to be used. This is usually the same as the
 * package identifier of the tweak.
 * @returns An autoreleased instance of HBPreferences for the specified identifier.
 */
+ (instancetype)preferencesForIdentifier:(NSString *)identifier;

/**
 * Initializes an instance of the class for the specified identifier.
 *
 * @param identifier The identifier to be used. This is usually the same as the
 * package identifier of the tweak.
 * @returns An autoreleased instance of HBPreferences for the specified identifier.
 */
- (instancetype)initWithIdentifier:(NSString *)identifier;

/**
 * @name Getting Preference Values
 */

/**
 * Returns the object associated with the specified key.
 *
 * If the preference is not yet set, returns the default. If no default is set,
 * returns `nil`.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The object associated with the specified key.
 */
- (id)objectForKey:(NSString *)key;

/**
 * Returns the integer value associated with the specified key.
 *
 * If the preference is not yet set, returns the default. If no default is set,
 * returns `nil`.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The integer value associated with the specified key.
 */
- (NSInteger)integerForKey:(NSString *)key;

/**
 * Returns the floating-point value associated with the specified key.
 *
 * If the preference is not yet set, returns the default. If no default is set,
 * returns `nil`.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The floating-point value associated with the specified key.
 */
- (CGFloat)floatForKey:(NSString *)key;

/**
 * Returns the double value associated with the specified key.
 *
 * If the preference is not yet set, returns the default. If no default is set,
 * returns `nil`.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The double value associated with the specified key.
 */
- (double)doubleForKey:(NSString *)key;

/**
 * Returns the Boolean value associated with the specified key.
 *
 * If the preference is not yet set, returns the default. If no default is set,
 * returns `nil`.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The Boolean value associated with the specified key.
 */
- (BOOL)boolForKey:(NSString *)key;

/**
 * Returns the value associated with a given key.
 *
 * This method behaves the same as objectForKey:.
 *
 * @param key The key for which to return the corresponding value.
 * @returns The value associated with the specified key.
 */
- (id)objectForKeyedSubscript:(id)key;

/**
 * Returns the object associated with the specified key, or if no
 * user preference is set, the provided default.
 *
 * @param key The key for which to return the corresponding value.
 * @param default The default value to use when no user preference is set.
 * @returns The object associated with the specified key, or the default value.
 */
- (id)objectForKey:(NSString *)key default:(id)defaultValue;

/**
 * Returns the integer value associated with the specified key, or if no
 * user preference is set, the provided default.
 *
 * @param key The key for which to return the corresponding value.
 * @param default The default value to use when no user preference is set.
 * @returns The integer value associated with the specified key, or the default
 * value.
 */
- (NSInteger)integerForKey:(NSString *)key default:(NSInteger)defaultValue;

/**
 * Returns the floating-point value associated with the specified key, or if no
 * user preference is set, the provided default.
 *
 * @param key The key for which to return the corresponding value.
 * @param default The default value to use when no user preference is set.
 * @returns The floating-point value associated with the specified key, or the
 * default value.
 */
- (CGFloat)floatForKey:(NSString *)key default:(CGFloat)defaultValue;

/**
 * Returns the double value associated with the specified key, or if no
 * user preference is set, the provided default.
 *
 * @param key The key for which to return the corresponding value.
 * @param default The default value to use when no user preference is set.
 * @returns The double value associated with the specified key, or the default
 * value.
 */
- (double)doubleForKey:(NSString *)key default:(double)defaultValue;

/**
 * Returns the Boolean value associated with the specified key, or if no
 * user preference is set, the provided default.
 *
 * @param key The key for which to return the corresponding value.
 * @param default The default value to use when no user preference is set.
 * @returns The Boolean value associated with the specified key, or the default
 * value.
 */
- (BOOL)boolForKey:(NSString *)key default:(BOOL)defaultValue;

/**
 * @name Setting Preference Values
 */

/**
 * Sets the value of the specified key.
 *
 * You should only call these methods if you are certain that the process is
 * running as the `mobile` user.
 *
 * @param value The object to store in the preferences.
 * @param key The key with which to associate with the value.
 * @exception HBPreferencesNotMobileException Thrown when the method is called
 * by a user other than `mobile`.
 */
- (void)setObject:(id)value forKey:(NSString *)key;

/**
 * Sets the value of the specified key to the specified integer value.
 *
 * This is a convenience method that calls setObject:forKey:. See the discussion
 * of that method for more details.
 *
 * @param value The integer value to store in the preferences.
 * @param key The key with which to associate with the value.
 */
- (void)setInteger:(NSInteger)value forKey:(NSString *)key;

/**
 * Sets the value of the specified key to the specified floating-point value.
 *
 * This is a convenience method that calls setObject:forKey:. See the discussion
 * of that method for more details.
 *
 * @param value The Boolean value to store in the preferences.
 * @param key The key with which to associate with the value.
 */
- (void)setFloat:(CGFloat)value forKey:(NSString *)key;

/**
 * Sets the value of the specified key to the specified double value.
 *
 * This is a convenience method that calls setObject:forKey:. See the discussion
 * of that method for more details.
 *
 * @param value The Boolean value to store in the preferences.
 * @param key The key with which to associate with the value.
 */
- (void)setDouble:(double)value forKey:(NSString *)key;

/**
 * Sets the value of the specified key to the specified Boolean value.
 *
 * This is a convenience method that calls setObject:forKey:. See the discussion
 * of that method for more details.
 *
 * @param value The Boolean value to store in the preferences.
 * @param key The key with which to associate with the value.
 */
- (void)setBool:(BOOL)value forKey:(NSString *)key;

/**
 * Sets the value of the specified key to the specified value.
 */
- (void)setObject:(id)object forKeyedSubscript:(id)key;

/**
 * @name Registering Default Preferences
 */

/**
 * Register an object to be automatically set to the user's preference.
 *
 * If the preference is not yet set, the object will be set to the provided
 * default.
 *
 * @param object The pointer to the object.
 * @param default The default value to be used if no user preference is set.
 * @param key The key in the preferences property list.
 */
- (void)registerObject:(void *)object default:(id)defaultValue forKey:(NSString *)key;

/**
 * Register an integer value to be automatically set to the user's preference.
 *
 * If the preference is not yet set, the object will be set to the provided
 * default.
 *
 * @param object The pointer to the integer.
 * @param default The default value to be used if no user preference is set.
 * @param key The key in the preferences property list.
 */
- (void)registerInteger:(NSInteger *)object default:(NSInteger)defaultValue forKey:(NSString *)key;

/**
 * Register a floating-point value to be automatically set to the user's
 * preference.
 *
 * If the preference is not yet set, the object will be set to the provided
 * default.
 *
 * @param object The pointer to the integer.
 * @param default The default value to be used if no user preference is set.
 * @param key The key in the preferences property list.
 */
- (void)registerFloat:(CGFloat *)object default:(CGFloat)defaultValue forKey:(NSString *)key;

/**
 * Register a double value to be automatically set to the user's preference.
 *
 * If the preference is not yet set, the object will be set to the provided
 * default.
 *
 * @param object The pointer to the double.
 * @param default The default value to be used if no user preference is set.
 * @param key The key in the preferences property list.
 */
- (void)registerDouble:(double *)object default:(double)defaultValue forKey:(NSString *)key;

/**
 * Register a Boolean value to be automatically set to the user's preference.
 *
 * If the preference is not yet set, the object will be set to the provided
 * default.
 *
 * @param object The pointer to the Boolean.
 * @param default The default value to be used if no user preference is set.
 * @param key The key in the preferences property list.
 */
- (void)registerBool:(BOOL *)object default:(BOOL)defaultValue forKey:(NSString *)key;

/*
 * Adds the contents of the specified dictionary to the defaults property.
 *
 * @param defaults The dictionary of keys and values you want to register.
 */
- (void)registerDefaults:(NSDictionary *)defaultValues;

@end

#ifndef _HB_PREFERENCES_M
/**
 * Name of an exception that occurs when attempting to set preferences from a
 * process not running as the `mobile` user.
 */
extern NSString *const HBPreferencesNotMobileException;

/**
 * This notification is posted when a change is made to a registered
 * preferences identifier. The notification object is the associated
 * HBPreferences object.
 */
extern NSString *const HBPreferencesDidChangeNotification;
#endif
