The headers that HASHBANG Productions uses. Headers are only created for classes we need, and only methods that we use are added to them. This is due to the large number of classes and methods that are broken in `class-dump`s - this way, we manually set up the headers and they are guaranteed to work.

Feel free to use these (`git clone git://github.com/hbang/headers.git $THEOS/include` - if you have an existing `$THEOS/include`  directory, rename it) and [add on to them.](https://github.com/hbang/headers/pulls)

[WTFPL.](http://wtfpl.net) Contains OpenSSL headers that are licensed under the OpenSSL license.

## Code rules
* Create headers only for what you use.
* Follow the existing coding style.
* Singleton (`sharedInstance`) methods should return `id`.
* Don't just copy and paste lines from class-dumps - replace `id` with the appropriate class. Cycript is helpful here:

        $ cycript -p SpringBoard
        cy# [SBBaconController sharedInstance].baconCurrentlyBeingEaten.class
        @"SBBacon"
* Any headers from an open-source library can be included here, but please note its license here in the readme if the headers don't already mention it.
* If a class has methods that were added and/or removed in a particular iOS version, note it in a comment. For example:

    Added in 4.0, removed after 5.1:

        -(BOOL)isAwesome; // 4.0 - 5.1

    Added in 6.0, not removed since:

        -(void)eatBacon; // 6.0
* (Optional) Be awesome; pull request your changes back to this repo so others can benefit.
