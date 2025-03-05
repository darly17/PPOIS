from .deadline import Deadline 
from typing import Dict, List
from .research import Research
class Course_project:
    def __init__(self, deadlines: List[str])->None:
         self._theme: str=''
         self._text: List[str]= []
         self._deadlines: Dict[int,Deadline]={}
         self._work_plan: Dict[str,str]={}
         number_of_deadline=1
         for date in deadlines:
            deadline= Deadline(date)
            self._deadlines[number_of_deadline]= deadline
            number_of_deadline+=1

         
    def set_theme (self,theme: str)->None:
        self._theme=theme
    def set_text(self,new_text: str)->None:
        self._text.append(new_text)
    def edit_text(self, str_to_remove: str)->None:
         try:
             self._text.remove (str_to_remove)
         except ValueError:
             print('No such sentences in text')
    def get_text(self)->List[str]:
        return self._text
    def get_theme(self)->str:
        return self._theme 
        
    def set_work_plan(self,item_number: str, subtask: str)->None:
        self._work_plan[item_number]=[subtask]

    def get_work_plan(self)->Dict[str,str]:
        return self._work_plan

    def get_deadlines(self)->Dict[int,Deadline]:
        return self._deadlines