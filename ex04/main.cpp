/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:24:24 by maustel           #+#    #+#             */
/*   Updated: 2025/02/14 16:24:24 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	replace(char *memblock, std::string s1, std::string s2, std::string outfile)
{
	std::ofstream	newFile (outfile);
	std::string		file_str(memblock);
	std::size_t		found = 0;
	std::size_t		i = 0;

	while (file_str[i])
	{
		found = file_str.find(s1, found);
		if (found!=std::string::npos)
		{
			while (i < found)
				newFile << file_str[i++];
			newFile << s2;
			found = found + s1.length();
			i = found;
		}
		else
		{
			newFile << file_str.substr(i);
			break ;
		}
	}
	newFile.close();
}

void	open_and_copy(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	thisFile;
	std::streampos	buffersize;
	char*			memblock;
	std::string		outfile;

	thisFile.open(filename, std::ios::in | std::ios::ate);	//pos is in the end (ate)
	if (thisFile.fail())
	{
		perror("\e[0;31mError");
		exit (1);
	}
	buffersize = thisFile.tellg();	//get size of whole filecontent
	memblock = new char[buffersize];
	thisFile.seekg(0, std::ios::beg); //get to beginning of file
	thisFile.read(memblock, buffersize); //put content of file into buffer

	outfile = filename.append(".replace");
	replace(memblock, s1, s2, outfile);

	delete [] memblock;
	thisFile.close();
}


int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cout << "\e[0;31m" << "Error: Wrong amount of arguments!" << "\e[0;37m" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	open_and_copy(filename, s1, s2);

	return (0);
}
