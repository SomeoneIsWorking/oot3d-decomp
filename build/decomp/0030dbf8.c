// OoT3D decomp @ 0030dbf8  name=FUN_0030dbf8  size=220

int FUN_0030dbf8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  int iVar2;
  uint extraout_r2;
  uint uVar3;
  uint uVar4;
  undefined4 local_28;

  uVar4 = param_5 - *param_2 & 0xfffffff8;
  (*(code *)param_2[1])(param_4,uVar4);
  piVar1 = (int *)(uVar4 - 0x18);
  *piVar1 = param_2[2];
  uVar3 = extraout_r2;
  if (param_6 < 0x21) {
    uVar3 = param_6 + 0x20;
  }
  *(int *)(uVar4 - 0x14) = param_2[3];
  *(undefined4 *)(uVar4 - 0x10) = param_3;
  *(uint *)(uVar4 - 0xc) = uVar4;
  *(undefined1 *)(uVar4 - 4) = param_8;
  *(int *)(uVar4 - 8) = param_5;
  local_28 = 0;
  if (0x20 < param_6) {
    if (DAT_0030dcd4 + param_6 < 0x28) {
      uVar3 = DAT_0030dcd4 + param_6 + 0x18;
    }
    else {
      uVar3 = param_6 + DAT_0030dcd8;
      if (0x40 < uVar3) {
        uVar3 = 0xffffffff;
      }
    }
  }
  iVar2 = FUN_00422180(&local_28,DAT_0030dcdc,piVar1,piVar1,uVar3,param_7);
  if (-1 < iVar2) {
    *param_1 = local_28;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return iVar2;
}
