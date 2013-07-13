The headers that HASHBANG Productions uses. Headers are only created for classes we need, and only methods that we use are added to them. This is due to the large number of classes and methods that are broken in `class-dump`s - this way, we manually set up the headers and they are guaranteed to work.

Feel free to use these (`git clone git://github.com/hbang/headers.git $THEOS/include` - if you have an existing `$THEOS/include` directory, rename it) and [add on to them.](https://github.com/hbang/headers/pulls)

## Licenses
* OpenSSL headers: [OpenSSL](https://www.openssl.org/source/license.html)
* GraphicsServices headers: [BSD 3 Clause](http://opensource.org/licenses/BSD-3-Clause)
* Everything else: [WTFPL](http://wtfpl.net)

## Code rules
* Create headers only for what you use.
* Follow the existing coding style.
* Singleton (`sharedInstance`) methods should return `instancetype`.
* Don't just copy and paste lines from class-dumps - replace `id` with the appropriate class. Cycript is helpful here:

        $ cycript -p SpringBoard
        cy# [SBBaconController sharedInstance].baconCurrentlyBeingEaten.class
        @"SBBacon"
* Any headers from an open-source library can be included here, but please note its license here in the readme.
* If a class has methods that were removed in a particular iOS version, note it in a comment. For example, a method added in 4.0, but removed after 5.1:

        - (BOOL)isAwesome; // 4.0 - 5.1
* (Optional) Be awesome; pull request your changes back to this repo so others can benefit.
