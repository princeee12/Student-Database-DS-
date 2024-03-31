outfile:student.o stud_show.o stud_mod.o stud_del.o stud_add.o
	cc student.o stud_show.o stud_mod.o stud_del.o stud_add.o stud_save.c read_file.c option_e.c option_i.c reverse_link.c option_t.c -o outfile

student.o:student.c
	cc -c student.c
student_show.o:student_show.c
	cc -c student_show.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_save.o:stud_save.c
	cc -c stud_save    
read_file.o:read_file.c
	cc -c read_file
option_e.o:option_e.c
	cc -c option_e
option_i.o:option_i.c
	cc -c option_i
reverse_link.o:reverse_link.c
	cc -c reverse_link
option_t.o:option_t.c
	cc -c option_t

clear:
	@echo "cleaning up...."
	@rm -v *.o

