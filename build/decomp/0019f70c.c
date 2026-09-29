// OoT3D decomp @ 0019f70c  name=FUN_0019f70c  size=312

void FUN_0019f70c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  fVar2 = DAT_0019f848;
  uVar1 = DAT_0019f844;
  FUN_00373500(*(undefined4 *)(param_1 + 0xc),DAT_0019f848,DAT_0019f844,param_1 + 0x2c);
  iVar6 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar6 == 0) {
    if (DAT_0019f85c <= (int)*(float *)(param_1 + 0x1e0)) {
      FUN_0037572c((DAT_0019f860 - *(float *)(param_1 + 0x1e0)) * fVar2 * DAT_0019f864,param_1);
    }
  }
  else {
    FUN_00375bcc(param_1,DAT_0019f84c);
    uVar5 = DAT_0019f858;
    uVar4 = DAT_0019f854;
    uVar3 = DAT_0019f850;
    iVar6 = 0;
    do {
      FUN_00368a98(uVar5,uVar4,uVar1,uVar3,param_2,param_1 + 0x28);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    FUN_001808a0(param_1);
  }
  uVar1 = DAT_0019f868;
  iVar6 = FUN_003736fc(DAT_0019f86c,DAT_0019f868,param_1 + 0x1a4);
  if (iVar6 != 0) {
    FUN_00375bcc(param_1,DAT_0019f870);
  }
  iVar6 = FUN_003736fc(DAT_0019f874,uVar1,param_1 + 0x1a4);
  if (iVar6 != 0) {
    FUN_0036e670(param_2,param_1 + 8,0,0,0,DAT_0019f878);
  }
  return;
}
