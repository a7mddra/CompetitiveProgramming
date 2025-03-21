import requests
from bs4 import BeautifulSoup
import json

# Codeforces profile URL
profile_url = "https://codeforces.com/profile/a7mddra"

# Fetch the profile page
response = requests.get(profile_url)
soup = BeautifulSoup(response.text, "html.parser")

# Find the contest rating section
rating_section = soup.find("img", {"src": "//codeforces.org/s/91295/images/icons/rating-24x24.png"})
if rating_section:
    rating_section = rating_section.find_parent("li")

    # Extract current rating
    current_rating = rating_section.find("span", {"style": "font-weight:bold;"}).text.strip()

    # Extract max rating and rank
    max_rating_section = rating_section.find("span", {"class": "smaller"})
    if max_rating_section:
        max_rating = max_rating_section.find("span", {"style": "font-weight:bold;"}).text.strip()
        rank = max_rating_section.text.split("max.")[1].split(",")[0].strip()
    else:
        max_rating = "N/A"
        rank = "N/A"
else:
    current_rating = "N/A"
    max_rating = "N/A"
    rank = "N/A"

# Save the data to a JSON file
data = {
    "current_rating": current_rating,
    "max_rating": max_rating,
    "rank": rank
}

with open("codeforces_data.json", "w") as f:
    json.dump(data, f)
