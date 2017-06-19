aws.sh
======
Bash function library for working with AWS.

Installation and Usage
----------------------
You will need to have the Amazon AWS tools installed and configured before
using any of the functions in this library.

```sh
apt install awscli
aws configure
# ... follow prompts to configure authentication
```

Once you have the awscli dependency installed, clone this repo somewhere.  When
you're ready to use any of the functions, source in the `aws.inc` file in the
cloned root.

```sh
. $AWS_SH/aws.inc

# now you can use functions like
ec2.describe-instances us-west-1
```

Note: some commands may not work outside the EC2 infrastructure, and others
require an explicit region when run outside of EC2.
