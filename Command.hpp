#pragma once

#include "utils.hpp"

class Server;

class Client;

class Command
{
private:
	Command();
	~Command();

	static void		msgToChannel(Server &s, Client &c, const std::string &chName, const std::string &msg);
	static void		msgToClient(Server &s, Client &c, const std::string &targetClient, const std::string &msg);

public:
	static void		status(Server &server, Client &client, std::vector<std::string> &v);
	static void		user(Server &server, Client &client, std::vector<std::string> &v);
	static void		pass(Server &server, Client &client, std::vector<std::string> &v);
	static void		nick(Server &server, Client &client, std::vector<std::string> &v);
	static void		join(Server &server, Client &client, std::vector<std::string> &v);
	static void		privmsg(Server &server, Client &client, std::vector<std::string> &v);
	static void		ping(Server &server, Client &client, std::vector<std::string> &v);
	static void		kick(Server &server, Client &client, std::vector<std::string> &v);
	static void		invite(Server &server, Client &client, std::vector<std::string> &v);
	static void		topic(Server &server, Client &client, std::vector<std::string> &v);
	static void		mode(Server &server, Client &client, std::vector<std::string> &v);
	static void		part(Server &server, Client &client, std::vector<std::string> &v);
	static void		who(Server &server, Client &client, std::vector<std::string> &v);
	static void		userhost(Server &server, Client &client, std::vector<std::string> &v);
};
