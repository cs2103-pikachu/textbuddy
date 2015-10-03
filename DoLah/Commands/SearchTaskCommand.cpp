#include "Command.h"

namespace DoLah {
	//public
	SearchTaskCommand::SearchTaskCommand() {

	}

	SearchTaskCommand::~SearchTaskCommand() {

	}

	std::string SearchTaskCommand::getQuery() {
		return query;
	}

	DoLah::Calendar SearchTaskCommand::getCalendar() {
		return calendar;
	}

	void SearchTaskCommand::setQuery(std::string newQuery) {
		query = newQuery;
	}

	void SearchTaskCommand::setCalendar(DoLah::Calendar cal) {
		calendar = cal;
	}

	void SearchTaskCommand::execute() {
		//TODO
	}

	//private
}