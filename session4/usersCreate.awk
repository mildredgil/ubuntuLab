{
    split($1,arr,/:/);
    system("groupadd " arr[2]);
    system("useradd -m -g " arr[2] " " arr[1]);
}
