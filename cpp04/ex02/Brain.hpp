/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2 <aarie-c2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:56:25 by aarie-c2          #+#    #+#             */
/*   Updated: 2025/10/10 10:57:48 by aarie-c2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    public:
        std::string ideas[100];

        Brain();
        ~Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
};

#endif