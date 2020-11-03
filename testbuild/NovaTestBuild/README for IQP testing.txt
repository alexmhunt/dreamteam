INSTRUCTIONS FOR PILOT TESTING:
Both the input and output config files are inside the "StadiaMQP" folder.
The "inputs.txt" file works as follows:
- Each line represents the settings for one trial.
- A line of input is formatted as follows (values separated by commas):
  <Latency (milliseconds)>, <Duration of trial (seconds)>, <Difficulty>, <Divisor>
	Difficulty: The minimum cooldown time between note spawns (in seconds).
	Divisor: Used for latency compensation. Used alongside the current latency to increase the amount of time notes will stay onscreen. The formula is as follows:
		(latency / divisor) * defaultNoteWindow = noteWindow
		So lower divisors will result in longer note windows in high latencies, and higher divisors will result in shorter note windows in high latencies.
		When latency is low, note duration will not be greatly affected.

- The game will stop when each trial completes. Click on the "Next" button to continue on to the next trial.
- Planned features (to be implemented by the end of Saturday):
	- Scoring system based on how many notes a player does shoot

"outputs.txt" contains logged information about the following:
- trial number
- input parameters
- note spawning
- amount of shots fired by the player (once the trial ends)
- amount of shots fired by the player that hit (once the trial ends)