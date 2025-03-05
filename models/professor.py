import json
from pathlib import Path
from .course_project import Course_project
from .deadline import Deadline
from typing import Dict, List

class Professor:
    KNOWLEDGE_FILE= Path("data_bases/knowledge.json")
    def __init__(self,name:str)-> None:
        self._name=name
        self._knowledges: Dict [str, str]={}
        try:
            with open(self.KNOWLEDGE_FILE, 'r', encoding='utf-8') as _file:
                self._knowledges= json.load(_file)
        except json.JSONDecodeError:
            print("Opening error")

    def answer_question(self,question: str)-> str:
        if question in list(self._knowledges.keys()):
            return self._knowledges[question] 
        else:
            return  "ask later"    
    
    def accept_course_project(self,course_project: Course_project)-> bool:
        ontime_deadlines=0
        for number in course_project.get_deadlines():
            if course_project.get_deadlines()[number].on_time():
                ontime_deadlines+=1
        if ontime_deadlines==len(course_project.get_deadlines()):
            return True     
        else :
            return False




