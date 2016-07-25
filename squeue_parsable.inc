squeue_parsable ()
{
    author 'Kevin Ernst'
    about "Run Slurm's 'squeue' command, yield parsable output"
    param ''
    example '(yields job name, comment, state, reason, time elapsed, remaining, and username)'
    group 'slurm'
    squeue --noheader --format=%j,%k,%T,%r,%M,%L,%u
}
