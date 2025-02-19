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

void	write_to_newfile(char *memblock, std::string s1, std::string s2)
{
	std::ofstream	newFile ("new.replace");
	std::string		file_str(memblock);
	std::size_t		found = 0;
	int				i = 0;

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
			newFile <<  file_str.substr(i);
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

	thisFile.open(filename, std::ios::in | std::ios::ate);	//pos is in the end (ate)
	if (thisFile.fail())
	{
		std::cout << "Error in opening file: " << filename << std::endl;
		exit (1);
	}
	buffersize = thisFile.tellg();	//get size of whole filecontent
	memblock = new char[buffersize];
	thisFile.seekg(0, std::ios::beg); //get to beginning of file
	thisFile.read(memblock, buffersize); //put content of file into buffer

	write_to_newfile(memblock, s1, s2);

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
		std::cout << "Wrong amount of arguments!" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	open_and_copy(filename, s1, s2);
	
	return (0);
}
