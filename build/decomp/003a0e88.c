// OoT3D decomp @ 003a0e88  name=FUN_003a0e88  size=348

int FUN_003a0e88(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;

  iVar6 = 0;
  psVar3 = (short *)(DAT_003a0fe4 + param_3 * 6);
  uVar1 = FUN_00363c10(param_2 + 0x3a58,(int)*psVar3);
  if (-1 < (int)uVar1) {
    FUN_0033da8c(param_2 + 0x3a58,uVar1,param_2);
    if (((uVar1 & 0xff) < 0x13) &&
       (param_2 = param_2 + (uVar1 & 0xff) * 0x80, *(int *)(DAT_003a0fe8 + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    iVar6 = 0;
    if ((char)psVar3[param_4 + 1] != -1) {
      uVar2 = ObjectBankArchive_00358ef8(param_2 + 0x10);
      if (((*DAT_003a0fec & 1) == 0) && (iVar6 = FUN_003679b4(DAT_003a0fec), iVar6 != 0)) {
        FUN_0036788c(DAT_003a0ff0);
      }
      piVar4 = *(int **)(DAT_003a0ff0 + 0x17c);
      piVar4[2] = param_1;
      uVar7 = (**(code **)(*piVar4 + 8))(piVar4,uVar2,1);
      uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
      iVar6 = (int)uVar7;
      piVar4[2] = 0;
      if (iVar6 != 0) {
        uVar1 = (uint)*(byte *)((int)psVar3 + param_4 * 2 + 3);
      }
      if (iVar6 != 0 && uVar1 != 0xff) {
        iVar5 = *(int *)(iVar6 + 0xc);
        uVar2 = FUN_00372f0c(param_2 + 0x10);
        FUN_00372d94(iVar5,uVar2);
        *(undefined1 *)(iVar5 + 0x10) = 1;
      }
      FUN_00369178(iVar6,param_3);
    }
  }
  return iVar6;
}
