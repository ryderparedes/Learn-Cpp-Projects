#include <iostream>

class Student {
private:
    std::string m_name {};
    int m_id {};
    double m_mathGrade {};
    double m_scienceGrade {};
    double m_historyGrade {};
public:
    //Getters
    const std::string& getName() const { return m_name; }
    const int& getID() const { return m_id; }
    const double& getMathGrade() const { return m_mathGrade; }
    const double& getScienceGrade() const { return m_scienceGrade; }
    const double& getHistoryGrade() const { return m_historyGrade; }

    //Setters
    void setName(const std::string& name) { m_name = name; }
    void setID(int id) { m_id = id; }
    void setMathGrade(double mathGrade) { m_mathGrade = mathGrade; }
    void setScienceGrade(double scienceGrade) { m_scienceGrade = scienceGrade; }
    void setHistoryGrade(double historyGrade) { m_historyGrade = historyGrade; }

    std::string_view getLetterGrade(double grade)
    {
        if (grade <= 100 && grade >= 96.67) { return "A+"; }
        if (grade < 96.67 && grade >= 93.33) { return "A"; }
        if (grade < 93.33 && grade >= 90) { return "A-"; }
        if (grade < 90 && grade >= 80) { return "B"; }
        if (grade < 80 && grade >= 70 ) { return "C"; }
        if (grade < 70 && grade >= 60 ) { return "D"; }
        if (grade < 59 && grade >= 0 ) { return "F"; }

        return "Invalid Grade";
    }

    void printReport()
    {
        std::cout << "Name: " << m_name << '\n';
        std::cout << "ID: " << m_id << '\n';
        std::cout << "Math Grade: " << getLetterGrade(m_mathGrade) << '\n';
        std::cout << "Science Grade: " << getLetterGrade(m_scienceGrade) << '\n';
        std::cout << "History Grade: " << getLetterGrade(m_historyGrade) << '\n';
    }
};

int main() {

    Student student1 {};

    student1.setName("Alice");
    student1.setID(1001);
    student1.setMathGrade(92.5);
    student1.setScienceGrade(88.0);
    student1.setHistoryGrade(79.5);

    student1.printReport();
    std::cout << '\n';

    Student student2 {};

    student2.setName("David");
    student2.setID(1002);
    student2.setMathGrade(100);
    student2.setScienceGrade(93.33);
    student2.setHistoryGrade(-50);

    student2.printReport();

    return 0;
}