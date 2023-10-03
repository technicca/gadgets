cargo build --release

sudo cp target/release/ask /usr/local/bin/

sudo vim /usr/local/bin/.env

Enter your OPENAI_API_KEY, OPENAI_API_BASE, and CHATGPT_CLI_MODEL or in your .bashrc or .zshrc file: export OPENAI_API_KEY= and export OPENAI_API_BASE=, export CHATGPT_CLI_MODEL=

ask hi

The log is stored in ~/.ask/ask_log.json

git-ssh-key -> quickly generate a git ssh key
gcl -> automatically converts https to ssh when doing git clone
