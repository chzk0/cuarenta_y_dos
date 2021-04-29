#!/bin/bash
ifconfig | grep "ether\s" | cut -d ' ' -f 2
