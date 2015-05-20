What is f7coin?
Good question...



************
*Do Not Use*
************

This project has been Abandoned. Please See F7CoinV2
https://github.com/sp00nznet/F7CoinV2



------------
License
f7coin is released under the terms of the MIT license. See COPYING for more
information or see http://opensource.org/licenses/MIT.

Compile
apt-get install libboost-all-dev libssl-dev libdb++-dev libminiupnpc-dev libdb48-dev

make -f makefile.unix USE_PNP=-

to make a gui wallet

qmake-qt4 Makefile.test f7coin-qt.pro
make -f Makefile.test
./f7coin-qt_test

