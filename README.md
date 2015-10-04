The headers that HASHBANG Productions uses. Headers are only created for classes we need, and only methods that we use are added to them. This is due to the large number of classes and methods that are broken in class dumps - this way, we manually set up the headers and they are guaranteed to work.

Feel free to use these (`git clone git://github.com/hbang/headers.git $THEOS/include` - if you have an existing `$THEOS/include` directory, rename it) and [add on to them](https://github.com/hbang/headers/pulls).

## Licenses
* CaptainHook headers: [MIT License](http://mit-license.org/)
* GraphicsServices/IOSurface headers: [BSD 3 Clause](http://opensource.org/licenses/BSD-3-Clause)
* IconSupport headers: ?
* IOKit headers: [Apple Public Source License](https://opensource.apple.com/license/apsl/)
* libactivator headers: [GNU LGPL v2.1](https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html)
* libcolorpicker headers: [MIT License](http://git.pixelfiredev.com/pixelfire/libcolorpicker/blob/master/LICENSE.md)
* libhbangcommon headers: [Apache License 2](https://www.apache.org/licenses/LICENSE-2.0.html)
* libopener headers: [GNU GPL v3](https://www.gnu.org/copyleft/gpl.html)
* MediaRemote, MobileGestalt headers: [GNU GPL v3](https://github.com/Cykey/ios-reversed-headers/blob/master/LICENSE.txt)
* OpenSSL headers: [OpenSSL](https://www.openssl.org/source/license.html)
* Everything else: [Public Domain](http://unlicense.org/)

## Code rules
* Create headers only for what you use.
* Follow the existing coding style.
* Singleton (`sharedInstance`) methods should return `instancetype`.
* Don't just copy and paste lines from class-dumps - replace `id` with the appropriate class. Also change `arg1` and the like, or in some cases class-dump-z's guessed argument names, to something more appropriate. Cycript is helpful here:

        $ cycript -p SpringBoard
        cy# [SBBaconController sharedInstance].baconCurrentlyBeingEaten.class
        @"SBBacon"

    Additionally, keep ARM64 support in mind - `float` should become `CGFloat`, `int` should become `NSInteger`, and `unsigned` should become `NSUInteger`. This is especially important when using the headers as reference for hooking.
* Any headers from an open-source library can be included here, but please note its license here in the readme.
* (Optional but I'd appreciate it!) Be awesome; pull request your changes back to this repo so others can benefit.
