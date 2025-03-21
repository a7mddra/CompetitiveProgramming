import requests
from bs4 import BeautifulSoup

profile_url = "https://codeforces.com/profile/a7mddra"

response = requests.get(profile_url)
soup = BeautifulSoup(response.text, "html.parser")

rating_section = soup.find("img", {"src": "//codeforces.org/s/91295/images/icons/rating-24x24.png"})
if rating_section:
    rating_section = rating_section.find_parent("li")


    current_rating = rating_section.find("span", {"style": "font-weight:bold;"}).text.strip()


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

print(f"Current Rating: {current_rating}")
print(f"Max Rating: {max_rating}")
print(f"Rank: {rank}")
