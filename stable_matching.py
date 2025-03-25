from __future__ import annotations
from random import shuffle
from abc import ABC


###############################################################################
# Data structures
###############################################################################
class Person(ABC): 
	def __init__(self) -> None:
		self.married: Person = None

	def __hash__(self) -> int:
		return id(self)

	def __eq__(self, other) -> bool:
		return self is other


class Men(Person):
	def __init__(self) -> None:
		self.married: Women = None
		self.preference_list: dict[int,Women] = None # Indexed by woman, to quickly find the next ranked woman
		self.search_index: int = 0

	def begin(self, pair: list[Women]) -> None:
		self.preference_list = {}
		preference: list[int] = list(range(len(pair)))
		shuffle(preference)
		for i,target in enumerate(pair):
			self.preference_list[preference[i]] = target

class Women(Person):
	def __init__(self) -> None:
		self.married: Men = None
		self.rank: dict[Men,int] = None	# Indexed by man, to quickly find if he has higher rank than the currently married

	def begin(self, pair: list[Men]) -> None:
		self.rank = {}
		preference: list[int] = list(range(len(pair)))
		shuffle(preference)
		for i,target in enumerate(pair):
			self.rank[target] = preference[i]
###############################################################################


###############################################################################
# Problem encapsulation
###############################################################################
class Church:
	"""This class encapsulates a society with a equal number of men and women"""
	def __init__(self, n : int = 5):
		self.men: list[Men] = [Men() for _ in range(n)]
		self.women: list[Women] = [Women() for _ in range(n)]
		self.marriage_list: list[tuple[Men,Women]] = []

		for man in self.men:
			man.begin(self.women)

		for woman in self.women:
			woman.begin(self.men)

	def marry(self, man: Men, woman: Women) -> None:
		man.married = woman
		woman.married = man

		self.marriage_list.append( (man,woman) )

	def gs_algorithm(self, men: list[Men], women: list[Women]) -> None:
		free_men: list[Men] = men.copy()
		while len(free_men) > 0:
			man: Men = free_men[0]
			while man.search_index < len(women):
				woman: Women = man.preference_list[man.search_index]
				man.search_index += 1

				# She has no choice
				if woman.married == None:
					self.marry(man,woman)
					free_men.pop(0)
					break
				
				# Small rank is better
				elif woman.rank[woman.married] > woman.rank[man]:
					free_men.append(woman.married)
					self.marry(man,woman)
					free_men.pop(0)
					break

	def validate_marrieges(self) -> None:
		"""Check if every member of a given gender is married
		and if two or more are not married to the same person"""

		assert(len(self.men) == len(self.women))

		for man in self.men:
			assert(man.married != None)			# Every man should be married
			assert(man == man.married.married)	# The spouse of the man's spouse should be himself
			i: int = man.search_index - 1
			while i > 0:
				# Asserts that every higher rank woman is married to a higher rank man
				woman: Women = man.preference_list[i]
				assert(woman.rank[woman.married] <= woman.rank[man])
				i -= 1
###############################################################################

###############################################################################
# Main code
###############################################################################
def main() -> None:
	church = Church(n=100)
	church.gs_algorithm(church.men,church.women)
	church.validate_marrieges()

if __name__=='__main__':
	main()
###############################################################################