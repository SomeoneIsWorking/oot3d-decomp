// OoT3D decomp @ 0031488c  name=FUN_0031488c  size=232

int FUN_0031488c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;

  iVar4 = 0;
  iVar5 = DAT_00314974 + param_3 * 6 + param_4 * 2;
  if (*(char *)(iVar5 + 2) != -1) {
    uVar1 = ObjectBankArchive_00358ef8(param_2);
    if (((*DAT_00314978 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00314978), iVar4 != 0)) {
      FUN_0036788c(DAT_0031497c);
    }
    piVar3 = *(int **)(DAT_0031497c + 0x17c);
    piVar3[2] = param_1;
    uVar6 = (**(code **)(*piVar3 + 8))(piVar3,uVar1,1);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar4 = (int)uVar6;
    piVar3[2] = 0;
    if (iVar4 != 0) {
      uVar2 = (uint)*(byte *)(iVar5 + 3);
    }
    if (iVar4 != 0 && uVar2 != 0xff) {
      iVar5 = *(int *)(iVar4 + 0xc);
      uVar1 = FUN_00372f0c(param_2);
      FUN_00372d94(iVar5,uVar1);
      *(undefined1 *)(iVar5 + 0x10) = 1;
    }
    FUN_00369178(iVar4,param_3);
  }
  return iVar4;
}
