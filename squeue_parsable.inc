squeue_parsable ()
{
    author 'Kevin Ernst'
    about "Run Slurm's 'squeue' command, yield parsable output"
    param ''
    example '(output fields: job name, comment, state, reason, time elapsed, remaining, username)'
    group 'slurm'
    squeue --noheader --format=%j,%k,%T,%r,%M,%L,%u
}
