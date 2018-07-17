#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 1 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# lexScanning.v
# Lex verbose file generated from lexScanning.l.
# 
# Date: 11/20/08
# Time: 09:49:06
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "if"

    2  "else"

    3  "int"

    4  "return"

    5  "void"

    6  "while"

    7  "+"

    8  "-"

    9  "*"

   10  "/"

   11  "<"

   12  ">"

   13  "<="

   14  ">="

   15  "=="

   16  "!="

   17  "="

   18  ";"

   19  ","

   20  "("

   21  ")"

   22  "["

   23  "]"

   24  "{"

   25  "}"

   26  [0-9]+

   27  [a-zA-Z]+

   28  \n

   29  [ \t]+

   30  "/*"

   31  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 6
	0x22 - 0x27 (6)    goto 3
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2e               goto 3
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3a               goto 3
	0x3b               goto 15
	0x3c               goto 16
	0x3d               goto 17
	0x3e               goto 18
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 19
	0x5b               goto 20
	0x5c               goto 3
	0x5d               goto 21
	0x5e - 0x60 (3)    goto 3
	0x61 - 0x64 (4)    goto 19
	0x65               goto 22
	0x66 - 0x68 (3)    goto 19
	0x69               goto 23
	0x6a - 0x71 (8)    goto 19
	0x72               goto 24
	0x73 - 0x75 (3)    goto 19
	0x76               goto 25
	0x77               goto 26
	0x78 - 0x7a (3)    goto 19
	0x7b               goto 27
	0x7c               goto 3
	0x7d               goto 28
	0x7e - 0xff (130)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 6
	0x22 - 0x27 (6)    goto 3
	0x28               goto 7
	0x29               goto 8
	0x2a               goto 9
	0x2b               goto 10
	0x2c               goto 11
	0x2d               goto 12
	0x2e               goto 3
	0x2f               goto 13
	0x30 - 0x39 (10)   goto 14
	0x3a               goto 3
	0x3b               goto 15
	0x3c               goto 16
	0x3d               goto 17
	0x3e               goto 18
	0x3f - 0x40 (2)    goto 3
	0x41 - 0x5a (26)   goto 19
	0x5b               goto 20
	0x5c               goto 3
	0x5d               goto 21
	0x5e - 0x60 (3)    goto 3
	0x61 - 0x64 (4)    goto 19
	0x65               goto 22
	0x66 - 0x68 (3)    goto 19
	0x69               goto 23
	0x6a - 0x71 (8)    goto 19
	0x72               goto 24
	0x73 - 0x75 (3)    goto 19
	0x76               goto 25
	0x77               goto 26
	0x78 - 0x7a (3)    goto 19
	0x7b               goto 27
	0x7c               goto 3
	0x7d               goto 28
	0x7e - 0xff (130)  goto 3


state 3
	match 31


state 4
	0x09               goto 4
	0x20               goto 4

	match 29


state 5
	match 28


state 6
	0x3d               goto 29

	match 31


state 7
	match 20


state 8
	match 21


state 9
	match 9


state 10
	match 7


state 11
	match 19


state 12
	match 8


state 13
	0x2a               goto 30

	match 10


state 14
	0x30 - 0x39 (10)   goto 14

	match 26


state 15
	match 18


state 16
	0x3d               goto 31

	match 11


state 17
	0x3d               goto 32

	match 17


state 18
	0x3d               goto 33

	match 12


state 19
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 27


state 20
	match 22


state 21
	match 23


state 22
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x6b (11)   goto 19
	0x6c               goto 34
	0x6d - 0x7a (14)   goto 19

	match 27


state 23
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x65 (5)    goto 19
	0x66               goto 35
	0x67 - 0x6d (7)    goto 19
	0x6e               goto 36
	0x6f - 0x7a (12)   goto 19

	match 27


state 24
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x64 (4)    goto 19
	0x65               goto 37
	0x66 - 0x7a (21)   goto 19

	match 27


state 25
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x6e (14)   goto 19
	0x6f               goto 38
	0x70 - 0x7a (11)   goto 19

	match 27


state 26
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x67 (7)    goto 19
	0x68               goto 39
	0x69 - 0x7a (18)   goto 19

	match 27


state 27
	match 24


state 28
	match 25


state 29
	match 16


state 30
	match 30


state 31
	match 13


state 32
	match 15


state 33
	match 14


state 34
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x72 (18)   goto 19
	0x73               goto 40
	0x74 - 0x7a (7)    goto 19

	match 27


state 35
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 1


state 36
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x73 (19)   goto 19
	0x74               goto 41
	0x75 - 0x7a (6)    goto 19

	match 27


state 37
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x73 (19)   goto 19
	0x74               goto 42
	0x75 - 0x7a (6)    goto 19

	match 27


state 38
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x68 (8)    goto 19
	0x69               goto 43
	0x6a - 0x7a (17)   goto 19

	match 27


state 39
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x68 (8)    goto 19
	0x69               goto 44
	0x6a - 0x7a (17)   goto 19

	match 27


state 40
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x64 (4)    goto 19
	0x65               goto 45
	0x66 - 0x7a (21)   goto 19

	match 27


state 41
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 3


state 42
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x74 (20)   goto 19
	0x75               goto 46
	0x76 - 0x7a (5)    goto 19

	match 27


state 43
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x63 (3)    goto 19
	0x64               goto 47
	0x65 - 0x7a (22)   goto 19

	match 27


state 44
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x6b (11)   goto 19
	0x6c               goto 48
	0x6d - 0x7a (14)   goto 19

	match 27


state 45
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 2


state 46
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x71 (17)   goto 19
	0x72               goto 49
	0x73 - 0x7a (8)    goto 19

	match 27


state 47
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 5


state 48
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x64 (4)    goto 19
	0x65               goto 50
	0x66 - 0x7a (21)   goto 19

	match 27


state 49
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x6d (13)   goto 19
	0x6e               goto 51
	0x6f - 0x7a (12)   goto 19

	match 27


state 50
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 6


state 51
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 4


#############################################################################
# Summary
#############################################################################

1 start state(s)
31 expression(s), 51 state(s)


#############################################################################
# End of File
#############################################################################
