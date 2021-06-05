from typing import Text
import requests
from bs4 import BeautifulSoup
import os
import json

def create_passfile():
    if os.path.exists("pass.txt"):
        print("user data exits\n")
        with open("pass.txt","r",encoding="utf-8") as f:
            dic = json.loads(f.readline())
            return dic 
    else :
        print("user data don't exist\n")
        print("Enter user name\n")
        user_name = input()
        print("Enter passward\n")
        passwd = input()
        dic = {"user_name":user_name, "passwd": passwd}
        with open("pass.txt","w",encoding="utf-8") as f:
            f.write(json.dumps(dic))
        return dic

def login_web(url):
    session = requests.session()
    response = session.get(url)
    bs = BeautifulSoup(response.text,"html.parser")
    cookie = response.cookies
    dic = create_passfile()
    info = {
        "login": dic["user_name"],
        "password": dic["passwd"]
    }
    res = session.post(url,data=info, cookies=cookie)
    with open("tmp2.txt","w",encoding="utf-8") as f:
        f.write(cookie)
    with open("tmp.text","w",encoding="utf-8") as f:
        f.write(res.text)

login_web("https://leetcode.com/accounts/login/")