// OoT3D decomp @ 00496ad0  name=FUN_00496ad0  size=352

void FUN_00496ad0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  FUN_0036b4ec(param_1 + 0x254,param_2);
  FUN_0034cc78(param_1,param_2);
  if (*(short *)(param_1 + 0x2238) == 0) {
    FUN_00367c7c(param_2,0x3b,param_1);
    *(undefined2 *)(param_1 + 0x2238) = 1;
  }
  else {
    iVar5 = FUN_003769d8(param_2 + 0x28a0);
    iVar2 = DAT_00496c08;
    if (iVar5 == 2) {
      cVar1 = *(char *)(DAT_00496c08 + 0x3b);
      iVar5 = FUN_00369f3c(param_2);
      if (iVar5 != 0) {
        iVar6 = FUN_00369f3c(param_2);
        iVar5 = DAT_00496c0c;
        if (iVar6 == 1) {
          *(char *)(iVar2 + 0x3b) = -cVar1;
          uVar4 = DAT_00496c18;
          uVar3 = DAT_00496c14;
          *(undefined4 *)(iVar5 + 0xe98) = 0;
          FUN_0037547c(DAT_00496c1c,DAT_00496c10,4,uVar4,uVar4,uVar3);
        }
        FUN_0034bc38(DAT_00496c20,param_1,param_2);
        FUN_0036c5bc(param_2,0);
        FUN_0036ae48();
        return;
      }
      *(undefined4 *)(iVar2 + -0x14) = 3;
      FUN_003716f0(param_2,(int)*(short *)(iVar2 + 0x38),0x14,5);
      if (*(short *)(DAT_0033de94 + 0x62) != 0) {
        if ((*(ushort *)(DAT_0033de94 + 0x8c) & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0xef;
        }
        *(undefined2 *)(DAT_0033de94 + 100) = uVar7;
      }
      return;
    }
  }
  return;
}
