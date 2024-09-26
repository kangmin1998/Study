#include <iostream>

//class PlayerSaveData
//{
//public:
//    int Hp;
//    int Att;
//};

const int NAMELEN = 10;

// ���߻���� ���������� �����ϴ� ����� ���ƿ�.
// 1. ���߻���� ����� �����ϱ�.
// 2. ����� ���� �˾Ƶ� �ٸ� ������� �������ϱ�.

// ���� �ٺ��� ����� ��ɰ� �����͵��� ���ĸ� �Ǵ��ϴ� �ɷ�.
// ��ӱ����� ���� �ݱ�.

class StatusUnit
{
protected:
    char Name[NAMELEN] = "NONE";
    int Hp = 100;
    int MinAtt = 10;
    int MaxAtt = 20;
    int Speed = 10;
    int Charm = 0;

    // �θ�� �ڽ�Ŭ������ ���� ����� �˾Ƽ��� �ȵȴ�.
    //void Test(FightUnit& _Test)
    //{
    //}
};


class FightUnit : public StatusUnit
{
public:
    // void DamageLogic(int _Att)
    // class DamageData;

    // AttackLogic�̶�� ����

    //void AttackLogic(FightUnit& _DefUnit)
    //{
    //    _DefUnit.Hp -= MinAtt;
    //}

    // MinMax
    int GetDamage() const
    {
        // minAtt ~ MaxAtt ������ ���ڰ� ���ϵǴ� �Լ��� ���弼��.
       return MinAtt + rand() % (MaxAtt - MinAtt + 1) + MinAtt;
      
    }
      
   

    // Ŭ������ ���۷����� �־��ִ°��� ������ ������ ���ϴ�.
    void DamageLogic(const FightUnit& _AttUnit)
    {
        // _AttUnit => ���� �����Ϸ��� ���
        Hp -= _AttUnit.GetDamage();
    }

    void DamageRender(const char* const _AttName, int _Att)
    {
        printf_s("%s �� %s�� �����ؼ� %d�� �������� �������ϴ�.\n", _AttName, Name, _Att);
    }

    const char* GetName() const
    {
        return Name;
    }

protected:


private:
};

// ������Ʈ ����̶�� �Ͱ� ���̰� ���� ����.
// ���� ��ӱ����� ������Ʈ ��ݱ����� ������ �����踦 �����ϰ� �ִ�.
// 

class Player : public FightUnit
{
};

class Monster : public FightUnit
{

};


// ������ ����ٺ���
// �Ϲ����� ����Ŭ���� Player
// ���ҽ� Ŭ���� <= 
// ������ ����Ŭ������ <= ���ο� �����ۿ� ����. 
// �ɹ������� public�� ����մϴ�.

int main()
{

    Player NewPlayer;
    Monster NewMonster;
    NewMonster.DamageLogic(NewPlayer);

    // NewPlayer.
}