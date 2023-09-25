cargo build --release

sudo cp target/release/ask /usr/local/bin/

sudo vim /usr/local/bin/.env

Enter your OPENAI_API_KEY and OPENAI_API_BASE or in your .bashrc or .zshrc file: export OPENAI_API_KEY= and export OPENAI_API_BASE

ask hi

The log is stored in ~/.ask/ask_log.json