//1108. IP ��ַ��Ч��
//����һ����Ч�� IPv4 ��ַ address��������� IP ��ַ����Ч���汾��
//
//��ν��Ч�� IP ��ַ����ʵ������ "[.]" ������ÿ�� "."��
//
//
//
//ʾ�� 1��
//
//���룺address = "1.1.1.1"
//�����"1[.]1[.]1[.]1"
//ʾ�� 2��
//
//���룺address = "255.100.50.0"
//�����"255[.]100[.]50[.]0"
class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
                str += "[.]";
            else
            {
                str += address[i];
            }
        }
        return str;
    }
};