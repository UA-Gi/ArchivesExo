class message {
public:
	message();

	virtual void sortieflux(std::ostream & os) const; //3 points
	virtual void reuniondate(unsigned int m, unsigned int j) const=0; //2 points

		
private:
	std::string _exp;
	std::vector<std::string> _dest;
};

class message : public texte {


};

class message : public reponse {


};

class poposition : public message {

	bool contient(horaire const & h) const {return std::find(_prop.begin(),_prop.end(),h)!=_prop.end();}
};

class basemessage { //2.5 points
public:
	void ajouter();

	void affichermessagesdate() const; //1.5 points

	void affichermessagespour(std::string) const;
	void suppressioninteractive(); //2 + 1points
	bool pour() const{return find(_dest.begin(), _dest.end(), d) != _dest.end();} //
	

	void repondre(); //3 //1.5 verifier la date 


private:
	std::vector<texte> _mt;
	std::vector<propo> _mp;
	std::vector<repon> _mr;
	//std::vector<message *>;
};