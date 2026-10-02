import wikipedia
import pyttsx3

# Initialize text-to-speech engine
engine = pyttsx3.init()

# Ask user for a topic 
topic = input("Enter a topic to search on wikipedia: ")

# Fetch summary (first 2 sentence)
summary = wikipedia.summary(topic, sentences = 2)

# Print the summary
print("Summary:", summary)


# Speak the summary 
engine.say(summary)
engine.runAndWait() #don't forget ()
engine.stop() #engine stops or closes cleanly