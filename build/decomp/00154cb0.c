// OoT3D decomp @ 00154cb0  name=FUN_00154cb0  size=228

void FUN_00154cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1c1));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1c1);
    *(undefined4 *)(param_1 + 0x140) = DAT_00154d94;
    FUN_00372f38(param_1,param_2,param_1 + 0x1c4,
                 *(undefined4 *)(DAT_00154d98 + *(short *)(param_1 + 0x1c) * 4),param_1 + 0x1c8,3,0)
    ;
    if (*(char *)(DAT_00154d9c + param_2) == '\0') {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00154da0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00154da4;
      if (*(int *)(DAT_00154da8 + *(short *)(param_1 + 0x1c) * 4) != 0) {
        uVar2 = FUN_00353fd4(param_1,param_2);
        uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
        *(undefined4 *)(param_1 + 0x1a4) = uVar2;
      }
    }
  }
  return;
}
