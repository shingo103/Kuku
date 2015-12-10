#! /usr/bin/env python
import sys
import argparse

def print_kuku_table(x, y, add):
    for i in range(1, x+1):
        for j in range(1, y+1):
            print '%2d ' % (i * j if not add else i + j),
        print


def get_args():
    parser = argparse.ArgumentParser(description='Generate kuku table.')
    parser.add_argument('x', type=int, default=9)
    parser.add_argument('y', type=int, default=9)
    parser.add_argument('-a', '--add', action='store_true')
    return parser.parse_args()


if __name__ == '__main__':
    args = get_args()
    print args
    print_kuku_table(args.x, args.y, args.add)




