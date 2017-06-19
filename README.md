aws.sh
======
Bash function library for working with AWS.

Installation and Usage
----------------------

### Install jq
You will need to have the jq utility installed before using any of the
functions in this library.

```sh
apt install jq
```

### Install awscli Tools
You will need to have the Amazon AWS tools installed and configured before
using any of the functions in this library.

```sh
apt install awscli
aws configure
# ... follow prompts to configure authentication
```

### Clone Repo
Once you have the dependencies installed, clone this repo somewhere.

```sh
git clone git@github.com:Zingle/aws.sh.git
```

### Import Front-End Include
When you are ready to use any of the functions, source in the `aws.inc` file in
the cloned root.

```sh
. aws.sh/aws.inc

# now you can use functions like
ec2.describe-instances us-west-1
```

Note: some commands may not work outside the EC2 infrastructure, and others
require an explicit region when run outside of EC2.
