/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:36:57 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/09 14:22:11 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static void replace_in_file(const std::string &filename, const std::string &s1,
                            const std::string &s2) {
  std::string line;
  std::string result;
  size_t i;
  size_t found;

  std::ifstream inputFile(filename.c_str());
  if (!inputFile) {
    std::cerr << "Error: cannot access to " << filename << std::endl;
    return;
  }
  std::ofstream outputFile((filename + ".replace").c_str());
  if (!outputFile) {
    std::cerr << "Error: cannot create replace file" << std::endl;
    return;
  }
  while (std::getline(inputFile, line)) {
    i = 0;
    result = "";
    while ((found = line.find(s1, i)) != std::string::npos) {
      result.append(line, i, found - i);
      result += s2;
      i = found + s1.length();
    }
    result.append(line, i, line.length() - i);
    outputFile << result << std::endl;
  }
  inputFile.close();
  outputFile.close();
}

int main(int argc, char **argv) {
  std::string filename;
  std::string s1;
  std::string s2;

  if (argc != 4) {
    std::cerr << "Error: 3 arguments only" << std::endl;
    return (1);
  }
  filename = argv[1];
  s1 = argv[2];
  s2 = argv[3];

  if (s1.empty()) {
    std::cerr << "Error: s1 empty" << std::endl;
    return 1;
  }

  replace_in_file(filename, s1, s2);

  return (0);
}
