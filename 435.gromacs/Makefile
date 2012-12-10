SHELL=/bin/sh

# To assist in cross-compiling
CC=gcc
FC=gfortran
AR=ar
RANLIB=ranlib
LDFLAGS=-lm

CFLAGS=-Wall -Winline -O2 -g -I. -DHAVE_CONFIG_H -DSPEC_CPU_LP64 -DSPEC_CPU

# Where you want it installed when you do 'make install'
PREFIX=/usr/local

OBJS= 	3dview.o atomprop.o binio.o block_tx.o bondfree.o buffer.o \
	 	calcgrid.o calch.o calcmu.o calcvir.o clincs.o comlib.o confio.o \
	 	constr.o copyrite.o coupling.o csettle.o disre.o do_fit.o do_gct.o \
	 	dummies.o ebin.o edsam.o enxio.o ewald.o ewald_util.o f77_wrappers.o \
	 	fatal.o ffscanf.o fftgrid.o filenm.o fnbf.o force.o futil.o gbutil.o \
	 	gctio.o genalg.o ghat.o glaasje.o gmx_system_xdr.o gmxfio.o ifunc.o \
	 	index.o init.o init_sh.o innerc.o invblock.o ionize.o libxdrf.o macros.o \
	 	main.o maths.o matio.o md.o mdatom.o mdebin.o mdrun.o memdump.o \
	 	minimize.o mshift.o mvdata.o mvxvf.o names.o network.o nrama.o nrjac.o \
	 	nrnb.o ns.o nsb.o nsgrid.o orires.o pargs.o pbc.o pdbio.o pme.o \
	 	poisson.o pppm.o princ.o psgather.o pssolve.o psspread.o pull.o \
	 	pullinit.o pullio.o pullutil.o rando.o random.o rbin.o rdgroup.o \
	 	readinp.o relax_sh.o replace.o rmpbc.o shakef.o shift_util.o sim_util.o \
	 	smalloc.o sortwater.o splittop.o stat.o statutil.o strdb.o string2.o \
	 	symtab.o synclib.o tables.o tgroup.o tpxio.o trnio.o trxio.o txtdump.o \
	 	typedefs.o update.o vcm.o vec.o viewit.o wgms.o wman.o wnblist.o \
	 	writeps.o xdrd.o xtcio.o xutils.o xvgr.o

FOBJS= flincs.fo fsettle.fppized.fo fshake.fo innerf.fo flincsd.fo fsettled.fppized.fo \
	   fshaked.fo

all: gromacs 

gromacs: $(FOBJS) $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(FOBJS) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

%.fo: %.f
	$(FC) $(CFLAGS) -c -o $@ $<

clean: 
	rm -f *.o *.B *.i *.I *.fo *.FO *.O *.spin *.w2c.o *.w2c.c *.w2f.f *.w2c.h gromacs 
