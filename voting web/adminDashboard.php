
<!DOCTYPE html>
<html lang="en">

<head>
    <link rel="stylesheet" href="https://use.fontawesome.com/releases/v5.8.1/css/all.css">
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>One Shot Voting </title>
    <link rel="stylesheet" href="css/admindash.css" />
</head>

<body>
    <nav class="nav">
        <link rel="stylesheet" href="Header/headcss.css" />
        <script src="Header/headjs.js"></script>
        <div class="containerr">
            <h1 class="logo"><a href="index.php">One Shot Voting</a></h1>
            <ul>
              <li><a href="index.php">Home</a></li>
              <li><a href="login.php">Login</a></li>
              <li><a href="sign_up.php">Signup</a></li>
        
            </ul>
          </div>
        </nav>

    <div class="wrapper">

        <div class="sidebar">
            <div class="profile">
                <img style="width: 100px; " src="image/pngegg.png" alt="" />
                <h3>One Shot Voting <br> Admin dashboard</h3>
                
            </div>
            <ul>
                <li>
                    <a href="#" class="active">
                        <span class="icon"><i class="fas fa-home"></i></span>
                        <span class="item">Home</span>
                    </a>
                </li>

                <li>
                    <a href="battle/addBattle.php">
                        <span class="icon"><i class="fas fa-plus"></i></span>
                        <span class="item"> Add Battle</span>
                    </a>
                </li>

                <li>
                    <a href="battle/viewBattle.php">
                        <span class="icon"><i class="fa fa-cloud" aria-hidden="true"></i></span>
                        <span class="item"> View Battle</span>
                    </a>
                </li>

                <li>
                    <a href="Candidate/add_candidate.php">
                        <span class="icon"><i class="fas fa-users"></i></span>
                        <span class="item">Create Candidates</span>
                    </a>
                </li>

                

                <li>
                    <a href="Candidate/view_candidate.php">
                        <span class="icon"><i class="fa fa-cloud" aria-hidden="true"></i></span>
                        <span class="item">View Candidates</span>
                    </a>
                </li>
                <li>
                    <a href="add_vote/view_vote.php">
                        <span class="icon"><i class="fa fa-window-close" aria-hidden="true"></i></span>
                        <span class="item">View Votes</span>
                    </a>
                </li>

                
                <li>
                    <a href="logout.php">
                        <span class="icon"><i class="fas fa-address-book"></i></span>
                        <span class="item">Log Out</span>
                    </a>
                </li>
                </ul>
        </div>
    </div>

    <div>

    <video autoplay muted loop id="bg-video">
        <source src="image\admin.mp4" type="video/mp4">
        Your browser does not support the video tag.
    </video>
        <!-- <div style="margin-top: 100px; margin-left: 500px; position: absolute ">
            <img src="image/chch.png" alt="">
        </div> -->
      
        
    </div>

    
</body>

</html>