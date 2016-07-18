man2pdf ()
{
    author 'Kevin Ernst'
    about ''
    param ''
    example ''
    group ''
    ps2pdf <(a2ps -m -2 $(man -w sbatch) -o -) /var/www/phyloweb/sbatch.1.pdf
}
