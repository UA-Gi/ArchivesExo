std::string horaire::tostring() const {
	return std::to_string(_jour)+ "/" + std::to_string(_mois);
}