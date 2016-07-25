sacct_parsable ()
{
    author 'Kevin Ernst'
    about "Run Slurm's 'sacct' command, yielding parsable output"
    param ''
    example ''
    group 'slurm'
    sacct -nPc --format=jobid,jobname,comment,state,exitcode,elapsed,user
}
