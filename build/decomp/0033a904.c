// OoT3D decomp @ 0033a904  name=FUN_0033a904  size=404

int FUN_0033a904(int param_1,int param_2,short param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;

  uVar7 = FUN_00363c10(param_1 + 0x3a58,(int)param_3);
  puVar1 = DAT_0033aa9c;
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7 & 0xff;
  if (uVar2 < 0x13) {
    param_1 = param_1 + uVar2 * 0x80;
    iVar5 = *(int *)(DAT_0033aa98 + param_1);
    if (iVar5 != 0) {
      param_1 = param_1 + 0x3a5c;
      goto LAB_0033a954;
    }
  }
  param_1 = 0;
LAB_0033a954:
  if ((*DAT_0033aa9c & 1) == 0) {
    uVar7 = FUN_003679b4(DAT_0033aa9c);
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_0036788c(DAT_0033aaa0);
      iVar5 = DAT_0033aaa8;
    }
  }
  *(int *)(*(int *)(DAT_0033aaa0 + 0x17c) + 8) = param_2;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0033aa9c,iVar5), iVar5 != 0)) {
    FUN_0036788c(DAT_0033aaa0);
  }
  piVar6 = *(int **)(DAT_0033aaa0 + 0x17c);
  uVar3 = ObjectBankArchive_00358ef8(param_1 + 0x10,param_4);
  iVar5 = (**(code **)(*piVar6 + 8))(piVar6,uVar3,param_2 != 0);
  if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0033aa9c), iVar4 != 0)) {
    FUN_0036788c(DAT_0033aaa0);
  }
  *(undefined4 *)(*(int *)(DAT_0033aaa0 + 0x17c) + 8) = 0;
  if (-1 < param_5) {
    uVar3 = FUN_00372f0c(param_1 + 0x10,param_5);
    FUN_00372d94(*(undefined4 *)(iVar5 + 0xc),uVar3);
  }
  return iVar5;
}
