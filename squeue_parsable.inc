squeue_parsable ()
{
    author 'Kevin Ernst'
    about "Run Slurm's 'squeue' command, yield parsable output"
    param ''
    example ''
    group 'slurm'
    squeue --noheader --format=%i,%j,%k,%T,%r,%M,%L,%u
}
