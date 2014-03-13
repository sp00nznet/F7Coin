What is f7coin?
Good question...

License
f7coin is released under the terms of the MIT license. See COPYING for more
information or see http://opensource.org/licenses/MIT.

Compile
apt-get install libboost-all-dev libssl-dev libdb++-dev

make -f makefile.unix USE_PNP=-

to make a gui wallet

qmake BITCOIN_QT_TEST=1 -o Makefile.test bitcoin-qt.pro
make -f Makefile.test
./f7coin-qt_test

