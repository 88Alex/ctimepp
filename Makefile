%.o: %.cpp
    g++ -o $<
ctimepp: ctimepp.o
    # IGNORE
