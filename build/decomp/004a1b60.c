// OoT3D decomp @ 004a1b60  name=FUN_004a1b60  size=188

undefined4
FUN_004a1b60(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;

  if (param_1 == 0) {
    return 1;
  }
  uVar4 = FUN_002bfffc(*(undefined4 *)(param_1 + 4));
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x58);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = FUN_004a59c8();
    if (iVar2 != 0) {
      *param_3 = *(undefined4 *)(iVar2 + 4);
      *param_4 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4);
      *param_5 = *(undefined4 *)(iVar2 + 0x18);
      uVar3 = *(undefined4 *)(iVar2 + 0x14);
      *param_6 = *(undefined4 *)(iVar2 + 0x10);
      param_6[1] = uVar3;
      return 0;
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0xffffffff;
    param_6[1] = 0xffffffff;
    return 0x14;
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0xffffffff;
  param_6[1] = 0xffffffff;
  return 0xe;
}
