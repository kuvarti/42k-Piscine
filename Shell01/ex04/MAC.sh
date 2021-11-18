#!/bin/sh

ifconfig | grep "ether" | cut -f 2 -d ' '
