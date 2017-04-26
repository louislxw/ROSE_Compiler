#!/bin/bash

############################################
############################################
## Author : Louis Li                      ##
##          NTU                           ##
##                                        ##
## Notes  : Single Script File To Run     ##
##          ROSE Compiler for kernels.    ##
##                                        ##
############################################
############################################


#----------------------------- Compute tmp -----------------------------------#
#step 1: unroll j loop in factor of u1
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopUnrolling -c test1.c -rose:loopunroll:abstract_handle "Statement<position,19>" -rose:loopunroll:factor 3

cp rose_test1.c test2.c

#step 2: loop interchange for i and j
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopInterchange -c test2.c -rose:loopInterchange:abstract_handle "ForStatement<numbering,3>" -rose:loopInterchange:depth 2 -rose:loopInterchange:order 1

cp rose_test2.c test3.c

#step 3: unroll i loop in factor of u2
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopUnrolling -c test3.c -rose:loopunroll:abstract_handle "Statement<position,19>" -rose:loopunroll:factor 3

cp rose_test3.c test4.c

#step 4: loop interchange for i and j
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopInterchange -c test4.c -rose:loopInterchange:abstract_handle "ForStatement<numbering,3>" -rose:loopInterchange:depth 2 -rose:loopInterchange:order 1

cp rose_test4.c test5.c

#step 5: loop tiling for i in factor of 5
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopTiling -c test5.c -rose:loopTiling:abstract_handle "ForStatement<numbering,3>" -rose:loopTiling:depth 1 -rose:loopTiling:tilesize 5

cp rose_test5.c test6.c

sed -i 's/_lt_var_i/ii/g' test6.c

#------------------------------ Compute y -----------------------------------#
#step 6: loop interchange for i and j
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopInterchange -c test6.c -rose:loopInterchange:abstract_handle "ForStatement<numbering,6>" -rose:loopInterchange:depth 2 -rose:loopInterchange:order 1

cp rose_test6.c test7.c

#step 7: unroll j loop in factor of u1
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopUnrolling -c test7.c -rose:loopunroll:abstract_handle "Statement<position,51>" -rose:loopunroll:factor 3

cp rose_test7.c test8.c

#step 8: loop interchange for i and j
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopInterchange -c test8.c -rose:loopInterchange:abstract_handle "ForStatement<numbering,6>" -rose:loopInterchange:depth 2 -rose:loopInterchange:order 1

cp rose_test8.c test9.c

#step 9: unroll i loop in factor of u2
/home/demo/build-rose/tests/nonsmoke/functional/roseTests/astInterfaceTests/loopUnrolling -c test9.c -rose:loopunroll:abstract_handle "Statement<position,51>" -rose:loopunroll:factor 3

cp rose_test9.c test10.c
