==> Downloading https://formulae.brew.sh/api/formula.jws.json
############################################################################################# 100.0%
==> Downloading https://formulae.brew.sh/api/cask.jws.json
############################################################################################# 100.0%
==> Downloading https://ghcr.io/v2/homebrew/core/qt/5/manifests/5.15.13_1
############################################################################################# 100.0%
==> Fetching dependencies for qt@5: python-packaging
==> Downloading https://ghcr.io/v2/homebrew/core/python-packaging/manifests/24.1_1
############################################################################################# 100.0%
==> Fetching python-packaging
==> Downloading https://ghcr.io/v2/homebrew/core/python-packaging/blobs/sha256:575595301a31862ca4d2d
############################################################################################# 100.0%
==> Fetching qt@5
==> Downloading https://ghcr.io/v2/homebrew/core/qt/5/blobs/sha256:5ab138b788d6fa1aeb7f5b1b3c041161e
############################################################################################# 100.0%
==> Installing dependencies for qt@5: python-packaging
==> Installing qt@5 dependency: python-packaging
==> Downloading https://ghcr.io/v2/homebrew/core/python-packaging/manifests/24.1_1
Already downloaded: /Users/roc/Library/Caches/Homebrew/downloads/0a8b3181cb4fa8bee143a75cd85f08eb834903bde31ef0a291f3fe9f82bdbe41--python-packaging-24.1_1.bottle_manifest.json
==> Pouring python-packaging--24.1_1.all.bottle.tar.gz
🍺  /usr/local/Cellar/python-packaging/24.1_1: 74 files, 545.5KB
==> Installing qt@5
==> Pouring qt@5--5.15.13_1.sonoma.bottle.tar.gz
==> Caveats
We agreed to the Qt open source license for you.
If this is unacceptable you should uninstall.

You can add Homebrew's Qt to QtCreator's "Qt Versions" in:
  Preferences > Qt Versions > Link with Qt...
pressing "Choose..." and selecting as the Qt installation path:
  /usr/local/opt/qt@5

qt@5 is keg-only, which means it was not symlinked into /usr/local,
because this is an alternate version of another formula.

If you need to have qt@5 first in your PATH, run:
  echo 'export PATH="/usr/local/opt/qt@5/bin:$PATH"' >> /Users/roc/.bash_profile

For compilers to find qt@5 you may need to set:
  export LDFLAGS="-L/usr/local/opt/qt@5/lib"
  export CPPFLAGS="-I/usr/local/opt/qt@5/include"

For pkg-config to find qt@5 you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/qt@5/lib/pkgconfig"
==> Summary
🍺  /usr/local/Cellar/qt@5/5.15.13_1: 10,770 files, 336.5MB
==> Running `brew cleanup qt@5`...
Disable this behaviour by setting HOMEBREW_NO_INSTALL_CLEANUP.
Hide these hints with HOMEBREW_NO_ENV_HINTS (see `man brew`).
==> Caveats
==> qt@5
We agreed to the Qt open source license for you.
If this is unacceptable you should uninstall.

You can add Homebrew's Qt to QtCreator's "Qt Versions" in:
  Preferences > Qt Versions > Link with Qt...
pressing "Choose..." and selecting as the Qt installation path:
  /usr/local/opt/qt@5

qt@5 is keg-only, which means it was not symlinked into /usr/local,
because this is an alternate version of another formula.

If you need to have qt@5 first in your PATH, run:
  echo 'export PATH="/usr/local/opt/qt@5/bin:$PATH"' >> /Users/roc/.bash_profile

For compilers to find qt@5 you may need to set:
  export LDFLAGS="-L/usr/local/opt/qt@5/lib"
  export CPPFLAGS="-I/usr/local/opt/qt@5/include"

For pkg-config to find qt@5 you may need to set:
  export PKG_CONFIG_PATH="/usr/local/opt/qt@5/lib/pkgconfig"
chenqMacBookPro:~ roc$ export PKG_CONFIG_PATH="/usr/local/opt/qt@5/lib/pkgconfig"
chenqMacBookPro:~ roc$