%.o: %.cpp
    g++ -o $<
ctimepp: ctimepp.o
	echo "Hi!"
    # IGNORE
