top = '.'
out = 'build'

APPNAME = 'Kuku'
VERSION = '1.0.0'

def options(opt):
    opt.load('compiler_cxx')

def configure(conf):
    conf.load('compiler_cxx')

def build(bld):
    bld.program(source='src/main.cpp src/kuku.cpp', target='kuku')

    
