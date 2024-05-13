//#include"where.h"
//bool where::checkType(const type& types,const string& content)//检查对应类型
//    {
//        if(types==type::INT)
//        {
//            int result;
//            std::istringstream iss(content);
//            iss >> std::noskipws >> result; // std::noskipws 用来处理前导空格
//            // 如果流中没有错误，并且已经到了流的末尾，则转换成功
//            return !iss.fail() && iss.eof();
//        }
//        else if(types==type::DOUBLE)
//        {
//            double result;
//            std::istringstream iss(content);
//            iss >> result;
//            // 如果流中没有错误，并且已经到了流的末尾（或者下一个字符无法转换为double），则转换成功
//            // 注意：如果字符串中包含非数字字符后的数字（如 "123abc456"），iss >> result 仍然会成功，但只会转换到第一个非数字字符
//            return !iss.fail() && iss.eof() ;
//        }
//        else if(types==type::CHAR)
//        {
//            // 检查字符串长度是否至少为2（因为需要至少一个字符来开头和结尾）
//            if (content.length() < 2)
//            {
//                return false;
//            }
//            // 检查第一个和最后一个字符是否是单引号
//            return (content.front() == '\'' && content.back() == '\'');
//        }
//        else if(types==type::DATE)
//        {
//            QString content_v = QString::fromStdString(content);
//            QDate date = QDate::fromString(content_v,"yyyy-MM-dd");
//            return date.isValid();
//        }
//        else return false;
//}

//bool where::evaluate(const std::string& expr, const std::vector<bool>& values)
//{
//    std::stack<bool> operands;
//    std::stack<char> operators;
//    int valueIndex = 0;

//    auto applyOperator = [](bool a, bool b, char op) -> bool
//        {
//        if (op == 'A') return a && b;
//        if (op == 'O') return a || b;
//        return false;
//        };

//    for (int i = 0; i < expr.length(); ++i) {
//        char c = expr[i];

//        if (c == '*')
//        {
//            operands.push(values[valueIndex++]);
//        }
//        else if (c == '(')
//        {
//            operators.push(c);
//        }
//        else if (c == ')')
//        {
//            while (!operators.empty() && operators.top() != '(')
//            {
//                bool b = operands.top(); operands.pop();
//                bool a = operands.top(); operands.pop();
//                char op = operators.top(); operators.pop();
//                operands.push(applyOperator(a, b, op));
//            }
//            operators.pop(); // Remove '('
//        }
//        else if (c == 'A' || c == 'O')
//        {
//            while (!operators.empty() && operators.top() != '(' &&
//                ((c == 'O' && operators.top() == 'A') || (c == operators.top())))
//            {
//                bool b = operands.top(); operands.pop();
//                bool a = operands.top(); operands.pop();
//                char op = operators.top(); operators.pop();
//                operands.push(applyOperator(a, b, op));
//            }
//            operators.push(c);
//        }
//    }

//    while (!operators.empty()) {
//        bool b = operands.top(); operands.pop();
//        bool a = operands.top(); operands.pop();
//        char op = operators.top(); operators.pop();
//        operands.push(applyOperator(a, b, op));
//    }

//    return operands.top();
//}

//bool where::checkConstrains(const string &message, const type &type, const string &inputs)
//{
//    if(type==type::INT)
//    {
//        int newInput;
//        if(inputs=="")//空值
//            newInput=numeric_limits<int>::min()+1;//用最小负值+1表示null
//        else
//            newInput=stoi(inputs);
//        translateFromConstrainMessageAndCheck_i(message,type,newInput);
//    }
//    else if (type==type::DOUBLE)
//    {
//        double newInput;
//        if(inputs=="")//空值
//        {
//            newInput=numeric_limits<double>::quiet_NaN();//用numeric_limits<double>::quiet_NaN()表示null
//        }
//        else
//            newInput=stod(inputs);
//        translateFromConstrainMessageAndCheck_d(message,type,newInput);
//    }
//    else if (type==type::CHAR)
//    {
//        translateFromConstrainMessageAndCheck_c(message,type,inputs);
//    }
//}

//vector<string> where::splitByPipe(const string &input)
//{
//    vector<string> result;
//    istringstream iss(input);
//    string token;
//    while (std::getline(iss, token, '|'))
//    {
//        result.push_back(token);
//    }

//    return result;
//}
