struct intpair {
        int x<15>;
        int y<15>;
        int n;
        double arr<2>;
        int r;
        int xy<15>;
};

program ADD_PROG {
		version ADD_VERS {
			double dimension(intpair) = 1;
                        int ip(intpair) = 2;
                        intpair avg(intpair) = 3;
                        intpair ginomeno(intpair) = 4;

	} = 1;
} = 0x23451111;
