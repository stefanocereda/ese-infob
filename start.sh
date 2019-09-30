#!/bin/sh

echo $1
echo $2

# Open slides
i3-msg 'workspace 1, move workspace to output eDP-1'
i3-msg 'workspace 2, move workspace to output HDMI-2'
pdfpc "${1}" &
sleep 2

# Open completed solutions
i3-msg 'workspace 3, move workspace to output eDP-1'
cd "${2}"
st &
sleep 2
# open empty solutions
mkdir -p tmp
cd tmp
st tmux new -As infob &
sleep 2

# Open empty solutions on projector
i3-msg 'workspace 4, move workspace to output HDMI-2'
tmux set -g status off
st tmux attach -t infob &
sleep 2
#gotty tmux attach -t infob

# Go back to presentation
i3-msg 'workspace 1'
i3-msg 'workspace 2'
