// OoT3D decomp @ 002412b4  name=FUN_002412b4  size=336

void FUN_002412b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  FUN_003510b0(param_1,DAT_00241404);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,2,0);
  FUN_003532e8(param_1,0);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00241408 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = FUN_003532c0(iVar2 + 0x10,0);
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  uVar3 = DAT_0024140c;
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  FUN_00372d4c(uVar3,uVar3,param_1 + 0xbc,0);
  FUN_0037322c(DAT_00241410,param_1);
  uVar1 = DAT_00241428;
  uVar4 = DAT_00241420;
  if (*(int *)(DAT_00241414 + 0x4e8) < 4) {
    if (*(int *)(DAT_00241418 + 4) != 0) {
      *(undefined4 *)(param_1 + 0x1bc) = DAT_0024141c;
      goto LAB_002413ec;
    }
  }
  else if (*(int *)(DAT_00241418 + 4) != 0 && *(int *)(DAT_00241414 + 0x4e8) != 7) {
    *(undefined4 *)(param_1 + 0x1c0) = DAT_00241424;
    *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    goto LAB_002413ec;
  }
  *(undefined4 *)(param_1 + 0x1c0) = uVar3;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
LAB_002413ec:
  *(short *)(DAT_00241430 + param_1) = (short)DAT_0024142c;
  return;
}
