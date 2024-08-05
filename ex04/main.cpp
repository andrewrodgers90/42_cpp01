/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:50:25 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/25 15:48:29 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <fstream> 

int	err_msg()
{
	std::cerr << "Error opening file." << std::endl;
	return (1);
}

void	replaceStrings(std::string &fileContent, std::string &find, std::string &replace)
{
	size_t	i;

	i = 0;
	while (i <= fileContent.length() - find.length())
	{
		if (fileContent.substr(i, find.length()) == find)
		{
			fileContent.erase(i, find.length());
			fileContent.insert(i, replace);
			i += replace.length();
		}
		else
			i++;
	}
}

bool	openFiles(std::string &fileName, std::ifstream &inFile, std::ofstream &outFile)
{
	inFile.open(fileName);
	if (inFile.fail())
		return (false);
	outFile.open(fileName + ".replace");
	if (outFile.fail())
		return (false);
	return (true);
}

int	sedIsForLosers(std::string fileName, std::string find, std::string replace)
{
	std::string	fileContent;
	std::ifstream	inFile;
	std::ofstream	outFile;
	char		c;

	if (!openFiles(fileName, inFile, outFile))
		return (err_msg());
	while (inFile.get(c))
		fileContent += c;
	replaceStrings(fileContent, find, replace);
	outFile << fileContent;
	inFile.close();
	outFile.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid arguments." << std::endl;
		return (1);
	}
	sedIsForLosers(av[1], av[2], av[3]);
	return (0);
}
