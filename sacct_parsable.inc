sacct_parsable ()
{
    author 'Kevin Ernst'
    about "Run Slurm's 'sacct' command, yielding parsable output"
    param 'n/a'
    example '(output fields: job name, comment, state, exit code, time elapsed, username)'
    group 'slurm'
    sacct --noheader --parsable2 --completion --format=jobid,jobname,comment,state,exitcode,elapsed,user
}
