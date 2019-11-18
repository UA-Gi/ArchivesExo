void message::sortieflux(std::ostream & os) const {
	os << _numero << " " << _exp << "->";
}

void texte::sortieflux() const {
	message::sortieflux(os);
	os << "";
}

void basemessage::affichermessagepour() const {
	if(i.pour(d))
}

void basemessage::suppressioninteractive(){
	affichermessagepour();
	unsigned int msg; std::cin >> msg;

	for(aitp i = _mt.begin(); i!=_mt.end(); ++i)
}

void basemessage::repondre() {
	if(p.contient(h))
		ajouter(reponse(d,{p.expediteur()}, p.numero(), h))
}