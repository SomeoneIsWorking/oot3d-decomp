// OoT3D decomp @ 003114b4  name=FUN_003114b4  size=252

void FUN_003114b4(uint param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;

  uVar1 = DAT_003115b8;
  param_1 = param_1 & 0xffff0000;
  puVar4 = (uint *)*DAT_003115b0;
  if (param_1 == 0) {
    param_1 = 0x20000;
  }
  else if (param_1 != 0x20000 && param_1 != 0x30000) {
    return;
  }
  piVar3 = *(int **)(*DAT_003115b4 + 0xc);
  if (*piVar3 != 0) {
    iVar2 = piVar3[5];
    bVar5 = iVar2 == param_2;
    if (bVar5) {
      iVar2 = piVar3[3];
    }
    bVar6 = bVar5 && iVar2 == param_3;
    if (bVar5 && iVar2 == param_3) {
      bVar6 = piVar3[4] == param_4;
    }
    if (bVar6) {
      return;
    }
    if ((code *)*DAT_003115bc != (code *)0x0) {
      (*(code *)*DAT_003115bc)(piVar3[0xf],DAT_003115b8,piVar3[0x10]);
    }
    *piVar3 = 0;
  }
  FUN_00302bcc(param_3,param_4,param_2,0,1,0,piVar3);
  if ((code *)*DAT_003115c0 == (code *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)*DAT_003115c0)(param_1,uVar1,piVar3[0x10],piVar3[8]);
  }
  *piVar3 = iVar2;
  piVar3[0xf] = param_1;
  *puVar4 = *puVar4 | 1;
  return;
}
