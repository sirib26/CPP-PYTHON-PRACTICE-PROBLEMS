import streamlit as st

def main():
    st.title("What Kind of Animal Are You?")
    
    st.write("Answer a few questions to discover your spirit animal!")
    
    score = {"brave": 0, "cautious": 0, "curious": 0, "timid": 0}
    
    # Question 1
    q1 = st.radio("You enter a dense forest and see a dark cave. Do you go inside?", 
                  ["Yes, I want to explore!", "No, it looks too risky.", "Maybe, if I have a flashlight."], index=None)
    if q1 == "Yes, I want to explore!":
        score["brave"] += 1
        score["curious"] += 1
    elif q1 == "No, it looks too risky.":
        score["timid"] += 1
    else:
        score["cautious"] += 1
    
    # Question 2
    q2 = st.radio("You must cross a deep sea to reach the other side. What do you do?", 
                  ["Swim across without hesitation.", "Find a boat first.", "Turn back, it's too dangerous."], index=None)
    if q2 == "Swim across without hesitation.":
        score["brave"] += 1
    elif q2 == "Find a boat first.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    # Question 3
    q3 = st.radio("You find a mysterious-looking fruit in the wild. Do you eat it?", 
                  ["Yes, I love trying new things!", "No, it could be poisonous.", "I wait to see if an animal eats it first."], index=None)
    if q3 == "Yes, I love trying new things!":
        score["curious"] += 1
    elif q3 == "No, it could be poisonous.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    # Additional Questions
    q4 = st.radio("You hear a strange noise in the dark. What do you do?", 
                  ["Investigate immediately.", "Stay alert but don't move.", "Hide and wait until it's gone."], index=None)
    if q4 == "Investigate immediately.":
        score["brave"] += 1
    elif q4 == "Stay alert but don't move.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    q5 = st.radio("A stranger offers you a map to a hidden treasure. Do you take it?", 
                  ["Yes, I'm up for an adventure!", "Ask questions before accepting.", "Politely decline."], index=None)
    if q5 == "Yes, I'm up for an adventure!":
        score["curious"] += 1
    elif q5 == "Ask questions before accepting.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    q6 = st.radio("You come across an abandoned house. Do you go inside?", 
                  ["Yes, I want to explore!", "Only if I have company.", "No, it could be unsafe."], index=None)
    if q6 == "Yes, I want to explore!":
        score["curious"] += 1
    elif q6 == "Only if I have company.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    q7 = st.radio("You see a dangerous-looking animal blocking your path. What do you do?", 
                  ["Stand your ground and assess.", "Slowly back away.", "Run as fast as possible."], index=None)
    if q7 == "Stand your ground and assess.":
        score["brave"] += 1
    elif q7 == "Slowly back away.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    q8 = st.radio("Would you rather climb a mountain or explore a cave?", 
                  ["Climb a mountain!", "Explore a cave!", "Neither, both seem risky."], index=None)
    if q8 == "Climb a mountain!":
        score["brave"] += 1
    elif q8 == "Explore a cave!":
        score["curious"] += 1
    else:
        score["timid"] += 1
    
    q9 = st.radio("If you were an animal, would you be a hunter or a scavenger?", 
                  ["Hunter, I like taking charge!", "Scavenger, I prefer being resourceful.", "Neither, I avoid conflict."], index=None)
    if q9 == "Hunter, I like taking charge!":
        score["brave"] += 1
    elif q9 == "Scavenger, I prefer being resourceful.":
        score["cautious"] += 1
    else:
        score["timid"] += 1
    
    q10 = st.radio("Would you rather travel alone or in a group?", 
                   ["Alone, I love independence!", "In a group, I feel safer.", "Depends on the situation."], index=None)
    if q10 == "Alone, I love independence!":
        score["brave"] += 1
    elif q10 == "In a group, I feel safer.":
        score["cautious"] += 1
    else:
        score["curious"] += 1
    
    # Calculate result
    if st.button("Find Out Your Animal"):
        animal = max(score, key=score.get)
        animal_map = {
            "brave": "You are a Lion! 🦁",
            "cautious": "You are a Fox! 🦊",
            "curious": "You are a Monkey! 🐵",
            "timid": "You are a Deer! 🦌"
        }
        st.subheader(animal_map[animal])
        st.write("Your choices reflect your personality, and this animal matches your traits!")

if __name__ == "__main__":
    main()
