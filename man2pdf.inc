man2pdf ()
{
    author 'Kevin Ernst'
    about 'Create a PDF file from the given manual page'
    param '$1 - the name of the manual page'
    example '$ man2pdf ls'
    group 'pdf'
    ps2pdf <(a2ps -m -2 $(man -w $1) -o -) $1.pdf
}
