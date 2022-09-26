/**
 * @author Timothe Watteau
 * @file Server.cpp
 * @date 25/09/2022
 * @brief Server class, receives and store data coming from the sensors
 */

#ifndef AP4A_SERVER_HPP
#define AP4A_SERVER_HPP

#include "iostream"
#include "fstream"

class Server
{
private:
	bool m_consoleActivation; // indicates if the server will display the sensor values in the console
	bool m_logActivation; // indicates if the server will log the sensor values in the log files

	/**
	 * @brief Writes all the sensors values in the console
	 * @param measures measured values of the 0: temperature, 1: humidity, 2: light, 3: pressure
	 * @param time time of the measures
	 */
	void consoleWrite(float measures[4], long time);
	/**
	 * @brief Writes a sensor value in the console
	 * @param sensor character indicating the sensor used
	 * @param unit unit of the measure
	 * @param measures measured value
	 * @param time time of the measure
	 */
	template<typename T>
	void consoleWrite(std::string sensor, std::string unit, T measure, long time);

	/**
	 * @brief Writes all the sensors values in the main log file
	 * @param measures values of the 0: temperature, 1: humidity, 2: light, 3: pressure
	 * @param time time of the measures
	 */
	void fileWrite(float measures[4], long time);
	/**
	 * @brief Writes the value of one sensor in the corresponding log file
	 * @param sensor type of sensor (temperature, humidity, light, pressure)
	 * @param unit unit of the measure
	 * @param measure measure of the sensor
	 * @param time time of the measure
	 */
	template<typename T>
	void fileWrite(std::string sensor, std::string unit, T value, long time);

public:
	/**
	 * @brief Orthodox canonical form constructors, destructor and affectation
	 */
	Server();
	Server(const Server& server);
	~Server();
	Server& operator=(const Server& server);

	/**
	 * Receives data from the sensors
	 * @param measures measures of the sensors
	 * @param time time of the measures
	 */
	void DataReceive(float measures[4], long time);
	/**
	 * Receives data from a single sensor
	 * @param sensor type of sensor (temperature, humidity, light, pressure)
	 * @param measure measure of the sensor
	 * @param unit unit of the measure
	 * @param time time of the measure
	 */
	template<typename T>
	void DataReceive(std::string sensor, std::string unit, T measure, long time);

	/**
	 * Toggles the console log to true or false
	 */
	void toggleConsoleLog();
	/**
	 * Toggles the files log to true or false
	 */
	void toggleFileLog();
};

// Template function have to be declared in the header of the class

template<typename T>
void Server::consoleWrite(std::string sensor, std::string unit, T measure, long time)
{
	std::cout << time << "s | " << sensor << " : " << measure << unit << std::endl;
}

template<typename T>
void Server::fileWrite(std::string sensor, std::string unit, T value, long time)
{
	std::ofstream logFile("logs/" + sensor + "Log.txt", std::fstream::app);
	logFile << time << "s | Value: " << value << unit << "," << std::endl;
	logFile.close();
}

template<typename T>
void Server::DataReceive(std::string sensor, std::string unit, T measure, long time)
{
	if (m_consoleActivation)
	{
		consoleWrite(sensor, unit, measure, time);
	}
	if (m_logActivation)
	{
		fileWrite(sensor, unit, measure, time);
	}
}

#endif //AP4A_SERVER_HPP
