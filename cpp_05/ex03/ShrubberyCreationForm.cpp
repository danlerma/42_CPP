#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm(145,137,"Tree")
{
	std::cout<<"Constructor por defecto (ShrubberyCreationForm)"<<std::endl;
	this->target="Default";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout<<"Destructor por defecto (ShrubberyCreationForm)"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm(145,137,target)
{
	std::cout<<"Constructor personalizado(ShrubberyCreationForm)"<<std::endl;
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm(145,137,obj.target)
{
	std::cout<<"Constructor por copia(ShrubberyCreationForm)"<<std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
	std::cout << "Operador por asignación (ShrubberyCreationForm)"<< std::endl;
	this->target = obj.target;
	return (*this);
}

void	ShrubberyCreationForm::executeSmth() const
{
	std::string filename = this->target + "_shrubbery";
	std::fstream fd;

	std::cout << "Creando el archivo..."<< std::endl;
	fd.open(filename, std::fstream::out );
	fd << "                                                         ."<<std::endl;
	fd << "                                              .         ;  "<<std::endl;
	fd << "                 .              .              ;%     ;;   "<<std::endl;
	fd << "                   ,           ,                :;%  %;   "<<std::endl;
	fd << "                    :         ;                   :;%;'     .,   "<<std::endl;
	fd << "           ,.        %;     %;            ;        %;'    ,;"<<std::endl;
	fd << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'"<<std::endl;
	fd << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' "<<std::endl;
	fd << "               ;%;      %;        ;%;        % ;%;  ,%;'"<<std::endl;
	fd << "                `%;.     ;%;     %;'         `;%%;.%;'"<<std::endl;
	fd << "                 `:;%.    ;%%. %@;        %; ;@%;%'"<<std::endl;
	fd << "                    `:%;.  :;bd%;          %;@%;'"<<std::endl;
	fd << "                      `@%:.  :;%.         ;@@%;'   "<<std::endl;
	fd << "                        `@%.  `;@%.      ;@@%;         "<<std::endl;
	fd << "                          `@%%. `@%%    ;@@%;        "<<std::endl;
	fd << "                            ;@%. :@%%  %@@%;       "<<std::endl;
	fd << "                              %@bd%%%bd%%:;     "<<std::endl;
	fd << "                                #@%%%%%:;;"<<std::endl;
	fd << "                                %@@%%%::;"<<std::endl;
	fd << "                                %@@@%(o);  . '         "<<std::endl;
	fd << "                                %@@@o%;:(.,'         "<<std::endl;
	fd << "                            `.. %@@@o%::;         "<<std::endl;
	fd << "                               `)@@@o%::;         "<<std::endl;
	fd << "                                %@@(o)::;        "<<std::endl;
	fd << "                               .%@@@@%::;         "<<std::endl;
	fd << "                               ;%@@@@%::;.          "<<std::endl;
	fd << "                              ;%@@@@%%:;;;. "<<std::endl;
	fd << "                          ...;%@@@@@%%:;;;;,.. "<<std::endl;
	fd.close();
}
