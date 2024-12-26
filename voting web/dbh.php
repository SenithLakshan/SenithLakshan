<?php

$serverName="localhost:3306";
$userName="root";
$dbname="voting";
$dbpassword="";

$conn=mysqli_connect($serverName,$userName,$dbpassword,$dbname);

if(!$conn){
    die("Connection failed: ".mysqli_connect_error());
}